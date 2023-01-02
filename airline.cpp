
#include "airline.h"
Airline::Airline() {}
Airline::Airline(const std::string& IATA_Code, const std::string& Name):IATA_code{IATA_Code}, name{Name} {
    //std::cout<< "Constructor explicit de initializare Airline\n";
}
Airline::Airline(const Airline& other) : IATA_code{other.IATA_code}, name{other.name} {
    //std::cout<< "Constructor de copiere Airline\n";
}
Airline &Airline:: operator=(const Airline& other) {
    IATA_code = other.IATA_code;
    name = other.name;
    //std::cout<< "Operator =copiere Airline\n";
    return *this;
}
Airline::~Airline() {
    //std::cout<< "Destructor Airline\n";
}
std::ostream& operator<<(std::ostream& os, const Airline& arl) {
    os << "Compania aeriana " << arl.name << " are codul IATA " << arl.IATA_code << "\n";
return os;
}