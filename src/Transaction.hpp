#ifndef __CRYPTO_TRANSACTION_HPP__
#define __CRYPTO_TRANSACTION_HPP__

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <sys/types.h>
#include <sstream>

class Transaction {

    public:

        
        /// @brief Transaction 
        /// @param To 
        /// @param From 
        /// @param Amount 
        Transaction(char* To, char* From, uint Amount);
        ~Transaction();

        void setValid(bool val);

        void Load(std::stringstream& oa);
        void Save(std::stringstream& oa);

    private:

        char* To;
        char* From;
        char* Hash;

        uint Amount;

        __time_t timestamp;

        bool isValid = false;
};

#endif //! __CRYPTO_TRANSACTION_HPP__
