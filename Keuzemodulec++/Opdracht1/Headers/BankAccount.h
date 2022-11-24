//
// Created by david on 15/11/2022.
//

#ifndef OPDRACHT1_BANKACCOUNT_H
#define OPDRACHT1_BANKACCOUNT_H

#include "transaction.h"
#include <vector>
#include <ostream>

class BankAccount {
    friend std::ostream& operator<<(std::ostream& os, const BankAccount& s);

public:
    int m_AccountNumber;
    std::vector<Transaction*>* m_TransactionHistory;
    double m_Money;

    BankAccount& operator+=(Transaction* transaction);
    BankAccount& operator-=(Transaction* transaction);



    BankAccount();
    ~BankAccount();
};


#endif //OPDRACHT1_BANKACCOUNT_H
