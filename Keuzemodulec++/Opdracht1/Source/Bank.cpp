//
// Created by david on 15/11/2022.
//

#include <chrono>
#include <iostream>
#include "../Headers/Bank.h"


void Bank::DoTransaction(bool add, double valueChange, BankAccount* firstParty, BankAccount* secondParty) {
    auto* currentTransaction = new Transaction();
    currentTransaction->m_Added = add;
    currentTransaction->m_ValueChange = valueChange;
    currentTransaction->m_FirstParty = firstParty->m_AccountNumber;
    currentTransaction->m_SecondParty = secondParty->m_AccountNumber;
    currentTransaction->m_TimeOfTransaction = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    if(add)
    {
        *firstParty += currentTransaction;
        *secondParty -= currentTransaction;
    }
    else{
        *firstParty -= currentTransaction;
        *secondParty += currentTransaction;
    }
    m_AllTransactions->push_back(currentTransaction);
}

Bank::Bank() {
    m_Accounts = new std::vector<BankAccount*>();
    m_AllTransactions = new std::vector<Transaction*>();
}

Bank::~Bank() {
    while(m_Accounts->size() > 0){
        std::cout << m_Accounts->size() << " accounts size before";
      delete m_Accounts->front();
        std::cout << m_Accounts->size() << " accounts size after";
        m_Accounts->erase(m_Accounts->begin());
    }
    while(m_AllTransactions->size() > 0){
        std::cout << m_AllTransactions->size() << " transactions size before";
        delete m_AllTransactions->front();
        std::cout << m_AllTransactions->size() << " transactions size after";
        m_Accounts->erase(m_Accounts->begin());
    }
}


