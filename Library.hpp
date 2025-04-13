#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "Book.hpp"
#include <vector>
using namespace std;

// Represents a collection of books and provides functionality to manage them.
class Library {
    vector<Book> books; // Collection of books in the library.

public:
    // Default constructor for Library.
    // Initializes an empty collection of books.
    Library();

    // Constructor for Library that initializes the collection with a given list of books.
    Library(const vector<Book>& books); // A vector of Book objects to initialize the library.

    void print() const; // Prints details of all books in the library in a formatted way.

    // Adds a book to the library using its title, author(s) and date of publication
    bool insert_book(const string& title, const string& authors, const string& date_of_publication); // Returns true if book is added successfully, false if otherwise

    // Adds a book to the library as a Book object.
    bool insert_book(const Book& book); // Returns true if book is added successfully, false if otherwise

    // Removes a book from the library using its title, authors, date of publication.
    bool remove_book(const string& title, const string& authors, const string& date_of_publication); // Returns true if book is removed successfully, false if otherwise

    // Removes a book to the library as a Book object.
    bool remove_book(const Book& book); // Returns true if book is removed successfully, false if otherwise
};

#endif
