
#include "scheduled.h"


Scheduled::Scheduled() {}

Scheduled::Scheduled(Airline &Arl, const std::string &flightNo, const std::string &departureDate,
                     const std::string &arrivalDate, const std::string &departureTime, const std::string &arrivalTime,
                     const std::string &departureAirport, const std::string &arrivalAirport, std::string  lowCost) :
                     Flight(Arl, flightNo, departureDate, arrivalDate, departureTime, arrivalTime,departureAirport,
                            arrivalAirport),low_cost(std::move(lowCost)){}

std::shared_ptr<Flight>Scheduled ::clone() const {
    return std::make_shared<Scheduled>(*this);
}