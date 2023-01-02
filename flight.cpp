
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
    return os;
}
/*
        int static verifyFlightNo(){
        std::string fln;
        std::cout<<"Flight number (*use uppercase letters)";
        std::cin>>fln;

        if(std::isalpha(fln[0]) && std::isalpha(fln[1]))
            {
                for(int i=2; i<5; i++)
                    if(std::isdigit(fln[i])==0)
                        return 0;
                return 1;
            }
        else
            return 0;

    }
 */