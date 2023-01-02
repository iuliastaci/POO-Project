

#ifndef RESERVATION_H
#define RESERVATION_H
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <cctype>
#include "flight.h"
#include "passenger.h"

class Reservation {
    int reservation_no=0;
    float price=0;
    std::vector<Flight> flights;
    Passenger passenger;
public:
    Reservation();
    explicit Reservation(int reservationNo, float Price, std::vector<Flight> Flights, Passenger& Passenger);
    friend std::ostream& operator<<(std::ostream& os, const Reservation& re);
    float static discount(float p);
};


#endif //RESERVATION_H
