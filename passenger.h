
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
    const int id;
    static int max_id;
    int age = 0;

public:
    Passenger ();
    explicit Passenger(const std::string &firstName, const std::string &lastName, const std::string &phoneNumber,
                       const std::string &Address, int Age);


    friend std::ostream &operator<<(std::ostream &os, const Passenger &pa);
    Passenger(const Passenger& other);
    Passenger& operator=(const Passenger& other);
    int get_id()const;

};
#endif //PASSENGER_H
