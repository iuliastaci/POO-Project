
#include "scheduled.h"


Scheduled::Scheduled() {}

Scheduled::Scheduled(Airline &Arl, const std::string &flightNo, const std::string &departureDate,
                     const std::string &arrivalDate, const std::string &departureTime, const std::string &arrivalTime,
                     const std::string &departureAirport, const std::string &arrivalAirport, std::string  lowCost) :
                     Flight(Arl, flightNo, departureDate, arrivalDate, departureTime, arrivalTime,departureAirport,
                            arrivalAirport),low_cost(std::move(lowCost)){}

void Scheduled::details() {
    std::cout<<"\nThis flight is operated throughout the year.";
    if(!low_cost.compare("yes"))
        std::cout<<"\nThis is a low-cost flight.";
}

void Scheduled::show(std::ostream &os) const {
    os <<"Low cost "<< low_cost <<"\n";
}
std::shared_ptr<Flight>Scheduled ::clone() const {
    return std::make_shared<Scheduled>(*this);
}