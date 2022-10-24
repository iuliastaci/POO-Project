#include <iostream>
#include <utility>
#include <vector>
#include <string>

class Passenger {
    std::string first_name;
    std::string last_name;
    std::string phone_number;
    std::string address;
    int id;
    int age;
public:
    explicit Passenger(const std::string&  firstName, const std::string& lastName, const std::string& phoneNumber, const std::string& Address, int ID, int Age) : first_name{std::move(firstName)},
                                                                                                                                                                  last_name{lastName}, phone_number{phoneNumber}, address{Address}, id{ID}, age{Age}  {
        std::cout<< " Constructor explicit de initializare Passenger\n";
    }
    friend std::ostream& operator<<(std::ostream& os, const Passenger& pa) {
        os << "Pasagerul " << pa.id << ": " << pa.first_name << " " << pa.last_name << " " <<
           pa.age << " years " << pa.address << " "  << pa.phone_number << "\n";
        return os;
    }

};

class Airline{
    std::string IATA_code; //is consisting of two letters or one letter and one digit
    std::string name;
public:
    explicit Airline(const std::string& IATA_Code, const std::string& Name) : IATA_code{IATA_Code}, name{Name} {
        std::cout<< "Constructor explicit de initializare Airline\n";
    }
    Airline(const Airline& other) : IATA_code{other.IATA_code}, name{other.name} {
        std::cout<< "Constructor de copiere Airline\n";
    }
    Airline& operator=(const Airline& other) {
        IATA_code = other.IATA_code;
        name = other.name;
        std::cout<< "Operator =copiere Airline\n";
        return *this;
    }
    ~Airline() {
        std::cout<< "Destructor Airline\n";
    }
    friend std::ostream& operator<<(std::ostream& os, const Airline& arl) {
        os << "Compania aeriana " << arl.name << " are codul IATA " << arl.IATA_code << "\n";
        return os;
    }
};

class Flight{
    std::string flight_no; //is consisting of IATA_code and 3/4 digits
    std::string departure_date;
    std::string arrival_date;
    std::string departure_time;
    std::string arrival_time;
    std::string departure_airport;
    std::string arrival_airport;
public:
    explicit Flight(const std::string& flightNo, const std::string& departureDate, const std::string& arrivalDate,
                    const std::string& departureTime, const std::string& arrivalTime, const std::string& departureAirport,
                    const std::string& arrivalAirport) : flight_no{flightNo}, departure_date{departureDate}, arrival_date{arrivalDate},
                                                         departure_time{departureTime}, arrival_time{arrivalTime}, departure_airport{departureAirport}, arrival_airport{arrivalAirport} {
        std::cout<< "Constructor explicit de initializare Flight\n";
    }
    friend std::ostream& operator<<(std::ostream& os, const Flight& fl) {
        os << "Zborul "<< fl.flight_no << ": DEP " << fl.departure_airport << " " << fl.departure_date <<
           " " << fl.departure_time << " -> ARR " << fl.arrival_airport << " " << fl.arrival_date << " " << fl.arrival_time << "\n";
        return os;
    }
};

class Reservation{
    int reservation_no;
    int no_of_passengers;
    std::string flight_no;
    std::string departure_date;
    //std::vector<Passenger> passengers;
public:
    explicit Reservation(int reservationNo, int noOfPassengers, const std::string& flightNo, const std::string& departureDate) :
            reservation_no{reservationNo}, no_of_passengers{noOfPassengers}, flight_no{flightNo}, departure_date{departureDate} {
        std::cout<< "Constructor explicit de initializare Reservation\n";
    }
    friend std::ostream& operator<<(std::ostream& os, const Reservation& re) {
        os << "Rezervarea " << re.reservation_no << ", " << re.no_of_passengers << " pasageri, zborul " << re.flight_no << " , data "
           << re.departure_date << "\n";
        return os;
    }
};
int main() {

    return 0;
}
