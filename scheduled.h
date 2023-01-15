
#ifndef SCHEDULED_H
#define SCHEDULED_H
#include <iostream>
#include <utility>
#include <memory>
#include <string>
#include <vector>
#include "flight.h"

class Scheduled : public Flight{
    std::string low_cost{};
public:
    Scheduled();
    Scheduled(Airline& Arl, const std::string& flightNo, const std::string& departureDate, const std::string& arrivalDate,
              const std::string& departureTime, const std::string& arrivalTime, const std::string& departureAirport,
              const std::string& arrivalAirport, std::string  lowCost);
    std::shared_ptr<Flight> clone() const override;
    void details() override;
    void show(std::ostream &os)const override;
};


#endif //SCHEDULED_H
