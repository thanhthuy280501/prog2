#include "Book.h"
#include <algorithm>
#include <cctype>
// Name:         Thuy Nguyen
// Program:      CSC 275 Program 2
// Due Date:     10/19/24
// Compiler:     Code Block
// This file contains the implementation of the Book class.

// Constructors
Book::Book() : title(""), authorFirstName(""), authorLastName(""), ISBN(""), publisher("") {}

Book::Book(const std::string& title, const std::string& authorFirst, const std::string& authorLast, const std::string& ISBN, const std::string& publisher)
    : title(title), authorFirstName(authorFirst), authorLastName(authorLast), ISBN(ISBN), publisher(publisher) {}

// Getter methods
std::string Book::getTitle() const { return title; }
std::string Book::getAuthorFirstName() const { return authorFirstName; }
std::string Book::getAuthorLastName() const { return authorLastName; }
std::string Book::getISBN() const { return ISBN; }
std::string Book::getPublisher() const { return publisher; }

// Setter methods
void Book::setTitle(const std::string& title) { this->title = title; }
void Book::setAuthorFirstName(const std::string& authorFirstName) { this->authorFirstName = authorFirstName; }
void Book::setAuthorLastName(const std::string& authorLastName) { this->authorLastName = authorLastName; }
void Book::setISBN(const std::string& ISBN) { this->ISBN = ISBN; }
void Book::setPublisher(const std::string& publisher) { this->publisher = publisher; }

// String manipulation methods
void Book::titleToUpper() {
    std::transform(title.begin(), title.end(), title.begin(), ::toupper);
}

void Book::titleToLower() {
    std::transform(title.begin(), title.end(), title.begin(), ::tolower);
}

void Book::authorToUpper() {
    std::transform(authorFirstName.begin(), authorFirstName.end(), authorFirstName.begin(), ::toupper);
    std::transform(authorLastName.begin(), authorLastName.end(), authorLastName.begin(), ::toupper);
}

void Book::authorToLower() {
    std::transform(authorFirstName.begin(), authorFirstName.end(), authorFirstName.begin(), ::tolower);
    std::transform(authorLastName.begin(), authorLastName.end(), authorLastName.begin(), ::tolower);
}
