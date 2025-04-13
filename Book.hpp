#ifndef BOOK_HPP // Header Guards
#define BOOK_HPP

#include <string> 
#include <iostream> 
using namespace std;

class Book { // initilizing book class
    // Variables for title, author and date of publication of books
    string title;
    string authors;
    string date_of_publication;


    public:
    // Constructors: 
    Book(); // Default constructor 
    Book(const string& title); // Book with only title given
    Book(const string& title, const string& authors); // Book with both title and authors given 
    Book(const string& title, const string& authors, const string& date_of_publication); // Book with all attributes given
    // Methods:
    void print() const; // Prints the books attributes
    bool operator==(const Book& other) const; // Making a comparison operator so I can compare attributes of books to avoid duplicates
    // Getters 
    string get_title() const; // Returns title of book
    string get_authors() const; // Returns author of book
    string get_DoP() const; // Returns date of publication
};

#endif // Ends header guard