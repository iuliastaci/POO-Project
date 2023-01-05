
#include "charter.h"

Charter::Charter() {}

Charter::Charter(Airline &Arl, const std::string &flightNo, const std::string &departureDate,
                 const std::string &arrivalDate, const std::string &departureTime, const std::string &arrivalTime,
                 const std::string &departureAirport, const std::string &arrivalAirport, const std::string &Season,
                 const std::string &Frequency) : Flight(Arl, flightNo, departureDate, arrivalDate, departureTime, arrivalTime,
                                                        departureAirport, arrivalAirport),
                 season{Season}, frequency{Frequency}{}

std::shared_ptr<Flight>Charter ::clone() const {
    return std::make_shared<Charter>(*this);
}
void Charter::show_cast() {
    std::cout<<"Charter\n";
}