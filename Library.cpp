#include "Library.hpp"
#include <iostream>
using namespace std;

// Prints the details of all books in the library in a formatted manner.
// Iterates through the collection of books and calls each book's print function.
void Library::print() const {
    for (size_t i = 0; i < books.size(); ++i) {
        cout << "Book " << i + 1 << ":" << endl;
        books[i].print();  
        cout << endl;
    }
}

// Default constructor for Library.
// Initializes the library with an empty collection of books.
Library::Library() : books() {}

// Constructor for Library that initializes the collection with a given list of books.
Library::Library(const vector<Book>& input_books) { // A vector of Book objects used to initialize the library.
    books = input_books;
}

// Adds a book to the library using its title, authors, and date of publication.
bool Library::insert_book(const string& title, const string& authors, const string& date_of_publication) { //true if the book is successfully added, false if it already exists.
    Book new_book(title, authors, date_of_publication); // Create a new Book object.
    return insert_book(new_book); // Reuse insert_book function for a Book object.
}

// Adds a Book object to the library.
bool Library::insert_book(const Book& book) { // true if the book is successfully added, false if it already exists in the collection.
    for (const auto& existing_book : books) {
        if (existing_book == book) { // Check for duplicates using operator==.
            return false; // Duplicate found, insertion fails.
        }
    }
    books.push_back(book); // Add the new book to the collection.
    return true; // Insertion successful.
}

// Removes a book from the library using its title, authors, and date of publication.
bool Library::remove_book(const string& title, const string& authors, const string& date_of_publication) { // true if the book is successfully removed, false if it doesn't exist.
    Book new_book(title, authors, date_of_publication); // Create a new Book object.
    return remove_book(new_book); // Reuse remove_book function for a Book object.
}

// Removes a Book object from the library.
bool Library::remove_book(const Book& book) { // true if the book is successfully removed, false if it doesn't exist in the collection.
    for (size_t i = 0; i < books.size(); ++i) {
        if (books[i] == book) { // Check for equality using operator==.
            books.erase(books.begin() + i); // Remove the book from the collection.
            return true; // Removal successful.
        }
    }
    return false; // Book not found, removal fails.
}
