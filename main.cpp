#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <cctype>

class Passenger {
    std::string first_name;
    std::string last_name;
    std::string phone_number;
    std::string address;
    int id=0;
    int age=0;
public:
    explicit Passenger(const std::string&  firstName, const std::string& lastName, const std::string& phoneNumber, const std::string& Address, int ID, int Age) : first_name{std::move(firstName)},
                                                                                                                                                                  last_name{lastName}, phone_number{phoneNumber}, address{Address}, id{ID}, age{Age}  {
        std::cout<< " Constructor explicit de initializare Passenger\n";
    }
    Passenger(){
        ++id;
    }
    friend std::ostream& operator<<(std::ostream& os, const Passenger& pa) {
        os << "Pasagerul " << pa.id << ": " << pa.first_name << " " << pa.last_name << " " <<
           pa.age << " years " << pa.address << " "  << pa.phone_number << "\n";
        return os;
    }
    int verifyAge(){
        int y=0;
        std::cout<<"Varsta: ";
        std::cin>>y;
        if(y>=18)
            return y;
        else
            std::cout<<"This passenger is minor!";
        return -1;
    }
    void read(){
        std::cout<<"Passenger "<<id<<"\n First name ";
        std::cin>>first_name;
        first_name[0] = toupper(first_name[0]);
        std::cout<<"\n Last name ";
        std::cin>>last_name;
        last_name[0] = toupper(last_name[0]);
        age = verifyAge();
        std::cout<<"\nAddress ";
        std::cin>>address;
        std::cout<<"\nPhone number ";
        std::cin>>phone_number;
    }
};

class Airline{
    std::string IATA_code; //is consisting of two letters or one letter and one digit
    std::string name;
public:
    explicit Airline(const std::string& IATA_Code, const std::string& Name) : IATA_code{IATA_Code}, name{Name} {
        std::cout<< "Constructor explicit de initializare Airline\n";
    }
    Airline(){

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
    void read(){
        std::cout<<"IATA code: ";
        std::cin>>IATA_code;
        std::cout<<"\nName: ";
        std::cin>>name;
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
    Flight(){

    }
    friend std::ostream& operator<<(std::ostream& os, const Flight& fl) {
        os << "Zborul "<< fl.flight_no << ": DEP " << fl.departure_airport << " " << fl.departure_date <<
           " " << fl.departure_time << " -> ARR " << fl.arrival_airport << " " << fl.arrival_date << " " << fl.arrival_time << "\n";
        return os;
    }
    int verifyFlightNo(){
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
    void read(){
        std::cout<<"Flight number ";
        if(verifyFlightNo())
            std::cin>>flight_no;
        else
            std::cout<<"Invalid flight number";
        std::cout<<"\nDeparture date ";
        std::cin>>departure_date;
        std::cout<<"\nDeparture time ";
        std::cin>>departure_time;
        std::cout<<"\nDeparture airport ";
        std::cin>>departure_airport;
        std::cout<<"\nArrival date ";
        std::cin>>arrival_date;
        std::cout<<"\nArrival time ";
        std::cin>>arrival_time;
        std::cout<<"\nArrival airport ";
        std::cin>>arrival_airport;

    }
};

class Reservation{
    int reservation_no=0;
    int no_of_passengers=0;
    float price=0;
    std::string flight_no;
    std::string departure_date;
    //std::vector<Passenger> passengers;
public:
    explicit Reservation(int reservationNo, int noOfPassengers, float Price, const std::string& flightNo, const std::string& departureDate) :
            reservation_no{reservationNo}, no_of_passengers{noOfPassengers}, price{Price}, flight_no{flightNo}, departure_date{departureDate} {
        std::cout<< "Constructor explicit de initializare Reservation\n";
    }
    Reservation(){
        ++reservation_no;
    }
    friend std::ostream& operator<<(std::ostream& os, const Reservation& re) {
        os << "Rezervarea " << re.reservation_no << ", " << re.no_of_passengers << " pasageri, zborul " << re.flight_no << " , data "
           << re.departure_date << "costa " << re.price<<"\n";
        return os;
    }
    float discount(){
        float p=0.0;
        std::cout<<"Price: ";
        std::cin>>p;
        if(p>50)
            p = p - 10/100*p; // 10% discount
        else if(p>120)
            p = p - 20/100*p; //20% discount
        else if(p>300)
            p = p - 25/100*p; //25% discount
        return p;
    }
    void read(){
        std::cout<<"Reservation no: "<<reservation_no<<"\n";\
        std::cout<<"Number of passengers: ";
        std::cin>>no_of_passengers;
        std::cout<<"\n";
        price = discount();
        std::cout<<"\nPrice after discount: "<<price;
        std::cout<<"\nFlight no: ";
        std::cin>>flight_no;
        std::cout<<"\nDeparture date: ";
        std::cin>>departure_date;
    }
};
int main() {
    Airline a1{"BA", "British Airlines"};
    Reservation rsv1{1, 3, 120, "BA158", "31.10.2022"};
    Passenger p1{"Maria", "Popescu", "0040755189654", "Bucharest", 31, 20};
    Flight f1{"BA158", "31.10.2022", "31.10.2022", "10:00", "13:00", "OTP", "LHR"};
    std::cout<<a1<<"\n";
    operator<<(std::cout, a1);

    Airline a2;
    a2.read();
    std::cout<<a2<<"\n";

    Reservation rsv2;
    rsv2.read();
    std::cout<<rsv2<<"\n";

    Passenger p2;
    p2.read();
    std::cout<<p2<<"\n";

    Flight f2;
    f2.read();
    std::cout<<f2<<"\n";



    return 0;
}
