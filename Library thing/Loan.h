#ifndef LOAN_H
#define LOAN_H

#include <string>
#include <iostream>

using namespace std;

class Loan
{
private:
    string isbn, memberId, borrowDate, returnDate;

public:
    Loan(string i, string m, string bDate);
    string getIsbn() const;
    string getMemberId() const;
    string getBorrowDate() const;
    string getReturnDate() const;
    bool isActive() const;
    void setReturnDate(const string& rDate);
    void printInfo() const;
};

#endif // LOAN_H