#ifndef MEMBER_H
#define MEMBER_H

#include "Book.h"
#include <string>
// Name:         Thuy Nguyen
// Program:      CSC 275 Program 2
// Due Date:     10/19/24
// Compiler:     Code Block
// This file is for the Member class definition, which includes dynamic memory management for the list of borrowed books.

class Member {
private:
    std::string firstName;
    std::string lastName;
    int memberID;
    Book* borrowedBooks;  // Dynamically allocated array of books
    int bookCapacity;
    int borrowedCount;

    void resizeBookList();  // Helper method to resize the array

public:
    // Constructors and destructor
    Member(const std::string& firstName, const std::string& lastName, int memberID);
    ~Member();

    // Getter methods
    std::string getFirstName() const;
    std::string getLastName() const;
    int getMemberID() const;

    // Borrow and return book methods
    void borrowBook(const Book& book);
    void returnBook(const std::string& ISBN);

    // Display borrowed books
    void displayBorrowedBooks() const;
};

#endif
