

#ifndef RESERVATION_H
#define RESERVATION_H
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <cctype>
#include <memory>
#include "flight.h"
#include "passenger.h"
#include "exceptions.h"
#include "charter.h"
#include "scheduled.h"

class Reservation {
    int reservation_no=0;
    float price=0;
    std::vector<std::shared_ptr<Flight>> flights;
    Passenger passenger;
public:
    Reservation();
    explicit Reservation(int reservationNo, float Price, const std::vector<std::shared_ptr<Flight>> &Flights, Passenger& Passenger);
    friend std::ostream& operator<<(std::ostream& os, const Reservation& re);
    Reservation (const Reservation &other);
    Reservation &operator=(Reservation other);
    void set_price();
    float get_totalprice()const;
    float static discount(float p);
    friend void swap(Reservation &sv1, Reservation &rsv2);
    void flight_operating_period(Flight *fl);
};


#endif //RESERVATION_H
