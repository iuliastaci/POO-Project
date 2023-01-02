
#ifndef PASSENGER_H
#define PASSENGER_H
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <cctype>
#include "exceptions.h"

class Passenger {
    std::string first_name;
    std::string last_name;
    std::string phone_number;
    std::string address;
    int id = 0;
    int age = 0;

public:
    explicit Passenger(const std::string &firstName, const std::string &lastName, const std::string &phoneNumber,
                       const std::string &Address, int ID, int Age);

    Passenger();

    friend std::ostream &operator<<(std::ostream &os, const Passenger &pa);

};
#endif //PASSENGER_H
