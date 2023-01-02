
#ifndef AIRLINE_H
#define AIRLINE_H
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <cctype>

class Airline {
    std::string IATA_code; //is consisting of two letters or one letter and one digit
    std::string name;
public:
    Airline();
    explicit Airline(const std::string& IATA_Code, const std::string& Name);
    Airline(const Airline& other);
    Airline& operator=(const Airline& other);
    ~Airline();
    friend std::ostream& operator<<(std::ostream& os, const Airline& arl);

};


#endif //AIRLINE_H
