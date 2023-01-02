
#include "exceptions.h"

passenger_error::passenger_error(const std::string &message): error("Passenger error: " + message){}