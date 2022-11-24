//
// Created by david on 15/11/2022.
//

#ifndef OPDRACHT1_TRANSACTION_H
#define OPDRACHT1_TRANSACTION_H

#include <ctime>
#include <ostream>

class Transaction {
    friend std::ostream& operator<<(std::ostream& os, const Transaction& s);

public:
    bool m_Added;
    double m_ValueChange;
    int m_FirstParty;
    int m_SecondParty;
    time_t m_TimeOfTransaction;

};


#endif //OPDRACHT1_TRANSACTION_H
