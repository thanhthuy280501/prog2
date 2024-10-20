#include "Member.h"
#include <iostream>

// Constructor to initialize the member with an empty borrowed book list
Member::Member(const std::string& firstName, const std::string& lastName, int memberID)
    : firstName(firstName), lastName(lastName), memberID(memberID), borrowedCount(0), bookCapacity(5) {
    borrowedBooks = new Book[bookCapacity];
}

// Destructor to free the dynamically allocated memory
Member::~Member() {
    delete[] borrowedBooks;
}

// Getter methods
std::string Member::getFirstName() const { return firstName; }
std::string Member::getLastName() const { return lastName; }
int Member::getMemberID() const { return memberID; }

// Resize the dynamic array of books if needed
void Member::resizeBookList() {
    bookCapacity *= 2;
    Book* newBookList = new Book[bookCapacity];
    for (int i = 0; i < borrowedCount; ++i) {
        newBookList[i] = borrowedBooks[i];
    }
    delete[] borrowedBooks;
    borrowedBooks = newBookList;
}

// Borrow a book
void Member::borrowBook(const Book& book) {
    if (borrowedCount >= bookCapacity) {
        resizeBookList();
    }
    borrowedBooks[borrowedCount++] = book;
}

// Return a book by ISBN
void Member::returnBook(const std::string& ISBN) {
    for (int i = 0; i < borrowedCount; ++i) {
        if (borrowedBooks[i].getISBN() == ISBN) {
            for (int j = i; j < borrowedCount - 1; ++j) {
                borrowedBooks[j] = borrowedBooks[j + 1];
            }
            --borrowedCount;
            break;
        }
    }
}

// Display the list of borrowed books
void Member::displayBorrowedBooks() const {
    std::cout << firstName << " " << lastName << " (ID: " << memberID << ") has borrowed the following books:\n";
    for (int i = 0; i < borrowedCount; ++i) {
        std::cout << borrowedBooks[i].getTitle() << " by " << borrowedBooks[i].getAuthorFirstName() << " " 
                  << borrowedBooks[i].getAuthorLastName() << ", ISBN: " << borrowedBooks[i].getISBN() << "\n";
    }
}
