#include <iostream>
#include <string>
#include "Book.h"
#include "Member.h"
# This is the main program file, which provides the user interface and integrates the Book and Member classes.
void addBook(Book& book) {
    std::string title, authorFirst, authorLast, ISBN, publisher;
    std::cout << "Enter the book title: ";
    std::getline(std::cin, title);
    std::cout << "Enter author's first name: ";
    std::getline(std::cin, authorFirst);
    std::cout << "Enter author's last name: ";
    std::getline(std::cin, authorLast);
    std::cout << "Enter the ISBN: ";
    std::getline(std::cin, ISBN);
    std::cout << "Enter the publisher: ";
    std::getline(std::cin, publisher);

    book.setTitle(title);
    book.setAuthorFirstName(authorFirst);
    book.setAuthorLastName(authorLast);
    book.setISBN(ISBN);
    book.setPublisher(publisher);
}

int main() {
    // Creating some books and a member
    Book library[4];
    for (int i = 0; i < 4; ++i) {
        addBook(library[i]);
    }

    // Input member details
    std::string firstName, lastName;
    int memberID;
    std::cout << "Enter member's first name: ";
    std::getline(std::cin, firstName);
    std::cout << "Enter member's last name: ";
    std::getline(std::cin, lastName);
    std::cout << "Enter member ID: ";
    std::cin >> memberID;
    std::cin.ignore();  // Clear the buffer

    Member member(firstName, lastName, memberID);

    // Main loop to interact with the user
    std::string command;
    while (true) {
        std::cout << "\nEnter a command (borrow, return, updatebook, titleupper, authorupper, exit): ";
        std::getline(std::cin, command);

        if (command == "borrow") {
            std
