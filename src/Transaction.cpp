#include "Transaction.hpp"


Transaction::Transaction(std::string to, std::string from, uint amount) : 
    To(to),
    From(from),
    Amount(amount) {

        this->timestamp = time(NULL);

        this->Hash = "Not implemented 0x01";
    }

Transaction::~Transaction() {}

void Transaction::setValid(bool val) {

    this->isValid = val;
}

void Transaction::Load(std::stringstream& oa) {

    oa >> this->To >> this->From >> this->Amount >> this->Hash >> this->timestamp >> this->isValid;
}

void Transaction::Save(std::stringstream& oa) {

    oa << this->To << this->From << this->Amount << this->Hash << this->timestamp << this->isValid;
}
