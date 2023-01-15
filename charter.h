
#ifndef CHARTER_H
#define CHARTER_H
#include <iostream>
#include <utility>
#include <memory>
#include <string>
#include <vector>
#include "flight.h"

class Charter : public Flight {
    std::string season; //winter , summer
    std::string frequency; //weekly, bi-weekly
public:
    Charter();
    Charter(Airline& Arl, const std::string& flightNo, const std::string& departureDate, const std::string& arrivalDate,
            const std::string& departureTime, const std::string& arrivalTime, const std::string& departureAirport,
            const std::string& arrivalAirport, const std::string& Season, const std::string& Frequency);
    std::shared_ptr<Flight> clone() const override;
    void details() override;
    void show(std::ostream &os)const override;
    void get_frequency();

};


#endif //CHARTER_H
