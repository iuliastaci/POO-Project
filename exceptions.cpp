
#include "exceptions.h"

passenger_error::passenger_error(const std::string &message): error("Passenger error: " + message){}
reservation_error::reservation_error(const std::string &message) : error("Reservation error:" + message){}