#include <iostream>
#include "../Headers/Bank.h"

Bank* m_Bank;
int main() {
    m_Bank = new Bank();
    m_Bank->m_Accounts->push_back(new BankAccount());
    m_Bank->m_Accounts->push_back(new BankAccount());
    m_Bank->m_Accounts->push_back(new BankAccount());
    m_Bank->m_Accounts->push_back(new BankAccount());

    auto* firstParty = m_Bank->m_Accounts->at(3);
    auto* secondParty = m_Bank->m_Accounts->at(1);

    m_Bank->DoTransaction(true,250,firstParty,secondParty);
    std::cout << *m_Bank->m_Accounts->at(1)  << std::endl;
    return 0;
}
