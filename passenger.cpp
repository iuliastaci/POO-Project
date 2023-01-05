
#include "passenger.h"

Passenger::Passenger() {}

Passenger::Passenger(const std::string &firstName, const std::string &lastName, const std::string &phoneNumber,
                     const std::string &Address, int ID, int Age):first_name{std::move(firstName)},
                                                                  last_name{lastName}, phone_number{phoneNumber}, address{Address}, id{ID}, age{Age}{
    if(age<18)
        throw passenger_error(firstName + " " + lastName + " is not 18y old!");
}

std::ostream& operator<<(std::ostream &os, const Passenger &pa) {
    os << "Pasagerul " << pa.id << ": " << pa.first_name << " " << pa.last_name << " " <<
       pa.age << " years " << pa.address << " "  << pa.phone_number << "\n";
    return os;
}

//
