#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <cctype>
#include <memory>
#include "reservation.h"
#include "airline.h"
#include "passenger.h"
#include "flight.h"
#include "charter.h"
#include "scheduled.h"
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

    Passenger p1{"Maria", "Popescu", "0040755189654", "Bucharest", 1, 20};
    Passenger p2{"Ana", "Ionescu", "0040758134654", "Constanta", 2, 31};
    Passenger p4{"Andrei", "Nedelcu", "00407189472", "Bucharest", 4, 18};

    Scheduled sch1(a1, "BA158", "31.10.2023", "31.10.2023", "10:00", "13:00", "OTP", "LHR", "no");
    Scheduled sch2(a2, "TK743", "15.03.2023", "15.03.2023", "15:15", "16:45", "OTP", "IST", "no");
    Scheduled sch3(a3, "RO108", "25.02.2023", "26.02.2023", "22:30", "00:15", "AMS", "OTP", "no");
    Scheduled sch4(a4, "OS784", "26.02.2023", "26.02.2023", "06:40", "07:00", "OTP", "VIE", "no");
    Scheduled sch5(a5, "AF159", "15.03.2023", "15.03.2023", "18:00", "21:15", "IST", "CDG", "no");

    Charter ch1(a3, "RO100", "15.07.2023", "15.07.2023", "10:45", "12:00", "OTP", "AYT","summer", "bi-weekly");
    Charter ch2(a3, "RO121", "23.12.2023", "23.12.2023", "18:15", "20:30", "OTP", "RVN", "winter", "weekly");
    Charter ch3(a5, "AF253", "03.01.2023", "03.01.2023", "14:40", "19:55", "CDG", "SEY", "winter", "bi-weekly");


    auto fl1 = {sch2.clone(), sch5.clone(), ch1.clone()};
    auto fl2 = {sch1.clone(), ch2.clone()};
    auto fl3 = {ch3.clone(), sch3.clone(), sch4.clone()};

    try{
        Reservation re1(1, 160.0, fl1, p1);
        //Reservation re2(2, 49.0, fl2, p2);
        Reservation re3(3, 245.0, fl3, p4);
        re1.set_price();
        //re2.set_price();
        re3.set_price();
    }
    catch (reservation_error &error) {
        std::cout<<error.what()<<"\n";
    }


    Reservation r;
    r.dcast(&ch1);
    r.dcast(&sch3);

    Reservation re4{4, 185.0, fl1, p1};
    Reservation re5{5, 235.0, fl2, p2};
    swap(re4,re5);



    return 0;
}
