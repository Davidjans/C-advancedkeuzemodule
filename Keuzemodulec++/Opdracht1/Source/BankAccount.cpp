//
// Created by david on 15/11/2022.
//

#include <cstdlib>
#include "../Headers/BankAccount.h"


BankAccount::BankAccount() {
    m_AccountNumber = rand() % 999999999;
    m_TransactionHistory = new std::vector<Transaction*>();
}

BankAccount::~BankAccount() {
    delete m_TransactionHistory;
}

BankAccount& BankAccount::operator+=(Transaction* transaction) {
    this->m_Money += transaction->m_ValueChange;
    this->m_TransactionHistory->push_back(transaction);

    return *this;
}

BankAccount& BankAccount::operator-=(Transaction* transaction) {
    this->m_Money -= transaction->m_ValueChange;
    this->m_TransactionHistory->push_back(transaction);

    return *this;
}

std::ostream &operator<<(std::ostream &os, const BankAccount &bankAccount) {
    os << " AccountNumber: " << bankAccount.m_AccountNumber << std::endl
       << " CurrentBalance: " << bankAccount.m_Money << std::endl
       << " TransactionHistory: " <<std::endl << "[" <<std::endl;
    for (Transaction* transaction : *bankAccount.m_TransactionHistory) {
        os<< "(" << std::endl << *transaction << ")";
    }
    os << "]";
    return os;
}
