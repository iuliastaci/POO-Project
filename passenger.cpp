
#include "passenger.h"

int Passenger::max_id=200;

Passenger::Passenger() : id(max_id) {++max_id;}
Passenger::Passenger(const std::string &firstName, const std::string &lastName, const std::string &phoneNumber,
                     const std::string &Address, int Age):first_name{std::move(firstName)},
                                                                  last_name{lastName}, phone_number{phoneNumber}, address{Address}, id{max_id}, age{Age}{
    ++max_id;
    if(age<18)
        throw passenger_error(firstName + " " + lastName + " is not 18y old!");
}

Passenger::Passenger(const Passenger& other)=default;
Passenger& Passenger::operator=(const Passenger &other) {
    first_name = other.first_name;
    last_name = other.last_name;
    phone_number = other.phone_number;
    address = other.address;
    age = other.age;
    return *this;
}
std::ostream& operator<<(std::ostream &os, const Passenger &pa) {
    os << "Pasagerul " << pa.id << ": " << pa.first_name << " " << pa.last_name << " " <<
       pa.age << " years " << pa.address << " "  << pa.phone_number << "\n";
    return os;
}

int Passenger::get_id() const {
    return id;
}

//
