//
// Created by david on 15/11/2022.
//

#ifndef OPDRACHT1_BANK_H
#define OPDRACHT1_BANK_H
#include <vector>
#include "BankAccount.h"
class Bank {

public:
    void DoTransaction(bool add,double valueChange,BankAccount* firstParty,BankAccount* secondParty);
    Bank();
    ~Bank();

    std::vector<BankAccount*>* m_Accounts;
    std::vector<Transaction*>* m_AllTransactions;
};


#endif //OPDRACHT1_BANK_H
