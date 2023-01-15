
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
void Charter::details() {
 if(!season.compare("winter")){
     std::cout<<"\nThis flight is operated between November and March.";
     }
 else if (!season.compare("summer")){
     std::cout<<"\nThis flight is operated between May and October.";
 }
}

void Charter::show(std::ostream &os) const {
    os << "Season: " << season << " Frequency: " << frequency <<"\n";
}

void Charter::get_frequency() {
    if(!frequency.compare("weekly"))
        std::cout<<"\nThis charter flight is operated weekly. ";
    else if(!frequency.compare("bi-weekly"))
        std::cout<<"\nThis charter flight is operated two times a week. ";
}