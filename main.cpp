#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <cctype>
#include "reservation.h"
#include "airline.h"
#include "passenger.h"
#include "flight.h"
#include "exceptions.h"

int main() {
    Airline a1{"BA", "British Airlines"};
    Airline a2{"TK", "Turkish Airlines"};
    Airline a3{"RO", "Tarom"};
    Airline a4{"OS", "Austrian Airlines"};
    Airline a5{"AF", "Air France"};

    std::cout << a1 << std::endl;
    std::cout << a2 << std::endl;
    std::cout << a3 << std::endl;
    std::cout << a4 << std::endl;
    std::cout << a5 << std::endl;

try {
    Passenger p1{"Maria", "Popescu", "0040755189654", "Bucharest", 1, 20};
    Passenger p2{"Ana", "Ionescu", "0040758134654", "Constanta", 2, 31};
    //Passenger p3{"Robert", "Barbu", "0040764231435", "Cluj", 3, 17};
    Passenger p4{"Andrei", "Nedelcu", "00407189472", "Bucharest", 4, 18};
    Passenger p5{"Dan", "Alexandru", "0040765324158", "Bucharest", 5, 34};

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    //std::cout << p3 << std::endl;
    std::cout << p4 << std::endl;
    std::cout << p5 << std::endl;
}
catch(passenger_error &error){
    std::cout<<error.what()<<std::endl;
}

    //Flight f1{a1,"BA158", "31.10.2022", "31.10.2022", "10:00", "13:00", "OTP", "LHR"};
    Flight f2{};
    Flight f3{};
    Flight f4{};
    Flight f5{};

    //Reservation rsv1{1, 120, f1,p1};

    /*std::cout<<a1<<"\n";
    operator<<(std::cout, a1);
    std::cout<<rsv1<<"\n";
    std::cout<<p1<<"\n";
    std::cout<<f1<<"\n";
*/

    return 0;
}
