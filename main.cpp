#include "Book.hpp"
#include "Library.hpp"
#include <iostream>
#include <vector>

using namespace std;

// Main function to demonstrate the functionality of the Book and Library classes.
int main() {
    // Creating Book objects with different titles
    Book book_one("Harry Potter and the Philosopher's Stone", "J.K. Rowling", "1997");
    Book book_two("The Help", "Katheryn Stockett");
    Book book_three("Dracula");
    Book book_four; // Default constructor creates a book with "n/a" values.

    // Printing details of each Book.
    cout << "Book 1: \n";
    book_one.print();
    cout << "\nBook 2: \n";
    book_two.print();
    cout << "\nBook 3: \n";
    book_three.print();
    cout << "\nBook 4: \n";
    book_four.print();

    // Creating a vector of books to initialize Library objects.
    vector<Book> books;
    books.push_back(book_one);
    books.push_back(book_two);

    // Initializing libraries with and without pre-existing books.
    Library library_one(books); // Library initialized with books.
    Library library_two; // Empty library.

    // Printing details of both libraries.
    cout << "Library 1: \n";
    library_one.print();
    cout << "\nLibrary 2: \n";
    library_two.print();

    // Adding books to Library 2.
    cout << "\nPutting books into Library 2...\n";
    library_two.insert_book("Animal Farm", "George Orwell", "1945"); // Adding book using title, authors, and publication date.
    library_two.insert_book(book_three); // Adding a Book object.
    library_two.print(); // Printing updated Library 2.

    // Attempting to add a duplicate book to Library 2.
    cout << "\nInserting a duplicate book into Library 2...\n";
    if (!library_two.insert_book(book_three)) { 
        // Duplicate book detected, insertion fails.
        cout << "Duplicate book insertion rejected!\n";
    }

    // Removing a book from Library 2 by specifying its details.
    cout << "\nRemoving a book from Library 2...\n";
    if (library_two.remove_book("Dracula", "n/a", "n/a")) {
        // Successful removal.
        cout << "Book removed successfully!\n";
    } else {
        // Book not found in library.
        cout << "Book not found in library...\n";
    }
    library_two.print(); // Printing updated Library 2 after removal.

    // Attempting to remove a book that does not exist in Library 2.
    cout << "\nAttempting to remove a non-existent book from Library 2:\n";
    if (!library_two.remove_book("1984", "George Orwell", "1949")) {
        // Book not found.
        cout << "Book not found in library...\n";
    }

    // End of program.
    return 0;
}
