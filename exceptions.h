

#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H
#include <stdexcept>
#include <string>

class error:public std::runtime_error {
    using std::runtime_error::runtime_error;
};

//the passenger's age must be 18+
class passenger_error:public error {
public:
    explicit passenger_error(const std::string &message);
};

#endif //EXCEPTIONS_H
