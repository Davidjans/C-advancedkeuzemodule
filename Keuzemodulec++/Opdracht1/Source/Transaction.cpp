//
// Created by david on 15/11/2022.
//

#include "../Headers/Transaction.h"

std::ostream &operator<<(std::ostream &os, const Transaction &transaction) {
    os << " Added: " << transaction.m_Added << std::endl
       << " ValueChange: " << transaction.m_ValueChange << std::endl
       << " FirstParty: " << transaction.m_FirstParty << std::endl
       << " SecondParty: " << transaction.m_SecondParty << std::endl
       << " Time of transaction: " << transaction.m_TimeOfTransaction << std::endl;
    return os;
}


