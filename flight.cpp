
#include "flight.h"
Flight::Flight(){

}
Flight::Flight(Airline &Arl, const std::string &flightNo, const std::string &departureDate,
               const std::string &arrivalDate, const std::string &departureTime, const std::string &arrivalTime,
               const std::string &departureAirport, const std::string &arrivalAirport) :arl{Arl}, flight_no{flightNo}, departure_date{departureDate}, arrival_date{arrivalDate},
                                                                                        departure_time{departureTime}, arrival_time{arrivalTime}, departure_airport{departureAirport}, arrival_airport{arrivalAirport}{

}
std::ostream& operator<<(std::ostream& os, const Flight& fl) {
    os <<fl.arl<<"si opereaza zborul "<< fl.flight_no << ": DEP " << fl.departure_airport << " " << fl.departure_date <<
       " " << fl.departure_time << " -> ARR " << fl.arrival_airport << " " << fl.arrival_date << " " << fl.arrival_time << "\n";
    fl.show(os);
    os<<"\n";
    return os;
}

void Flight::details() {}
Flight::~Flight() {}
void Flight::show(std::ostream &) const {}