#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string authorFirstName;
    std::string authorLastName;
    std::string ISBN;
    std::string publisher;

public:
    // Constructors
    Book();
    Book(const std::string& title, const std::string& authorFirst, const std::string& authorLast, const std::string& ISBN, const std::string& publisher);

    // Getter methods
    std::string getTitle() const;
    std::string getAuthorFirstName() const;
    std::string getAuthorLastName() const;
    std::string getISBN() const;
    std::string getPublisher() const;

    // Setter methods
    void setTitle(const std::string& title);
    void setAuthorFirstName(const std::string& authorFirstName);
    void setAuthorLastName(const std::string& authorLastName);
    void setISBN(const std::string& ISBN);
    void setPublisher(const std::string& publisher);

    // String manipulation methods
    void titleToUpper();
    void titleToLower();
    void authorToUpper();
    void authorToLower();
};

#endif
