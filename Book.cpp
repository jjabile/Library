#include "Book.hpp"

// Operator overload to compare two Book objects.
// Checks if title, authors, and date_of_publication of both books are equal.
bool Book::operator==(const Book& other) const {
    return (title == other.title &&
            authors == other.authors &&
            date_of_publication == other.date_of_publication);
}

// Default constructor for Book when all 3 are not available
Book::Book() : title("n/a"), authors("n/a"), date_of_publication("n/a") {}

// Constructor for Book that initializes all three member variables for when all 3 are provided.
Book::Book(const string& title, const string& authors, const string& date_of_publication)
    : title(title), authors(authors), date_of_publication(date_of_publication) {}

// Constructor for Book that initializes title and authors while setting date_of_publication to "n/a". for when D.O.P. is unknown.
Book::Book(const string& title, const string& authors)
    : title(title), authors(authors), date_of_publication("n/a") {}

// Constructor for Book that initializes only the title and defaults the other members to "n/a" for when only title is known
Book::Book(const string& title)
    : title(title), authors("n/a"), date_of_publication("n/a") {}

// Print function to display book details in a formatted manner.
void Book::print() const {
    cout << "Title: " << title 
         << ", Authors: " << authors 
         << ", Date of Publication: " << date_of_publication << endl;
}

// Getters that provide access to title, author and date of publication
// Getter for title.
string Book::get_title() const {
    return title; 
}
// Getter for authors.
string Book::get_authors() const {
    return authors; 
}

// Getter for date_of_publication.
string Book::get_DoP() const {
    return date_of_publication;
}