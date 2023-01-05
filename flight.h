
#ifndef FLIGHT_H
#define FLIGHT_H
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <cctype>
#include <memory>
#include "airline.h"

class Flight {
    Airline arl;
    std::string flight_no; //is consisting of IATA_code and 3/4 digits
    std::string departure_date;
    std::string arrival_date;
    std::string departure_time;
    std::string arrival_time;
    std::string departure_airport;
    std::string arrival_airport;
public:
    Flight();
    explicit Flight(Airline& Arl, const std::string& flightNo, const std::string& departureDate, const std::string& arrivalDate,
                    const std::string& departureTime, const std::string& arrivalTime, const std::string& departureAirport,
                    const std::string& arrivalAirport);
    friend std::ostream& operator<<(std::ostream& os, const Flight& fl);
    virtual std::shared_ptr<Flight> clone() const=0;
    virtual ~Flight();

};


#endif //FLIGHT_H
