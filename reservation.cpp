
#include "reservation.h"
Reservation::Reservation() {}
Reservation::Reservation(int reservationNo, float Price, std::vector<Flight> Flights, Passenger &Passenger) : reservation_no{reservationNo}, price{Price},flights{std::move(Flights)}, passenger{Passenger}{}
std::ostream& operator<<(std::ostream& os, const Reservation& re) {
    os << "Rezervarea " << re.reservation_no <<", zborul " << " costa " << re.price<<"euro, "<<re.passenger<<"\n";
    for (const auto &fl: re.flights) {
        os<<fl<<"/n";
    }
    return os;
}
float Reservation::discount(float p) {
    if(p>50)
        p = p - 10/100*p; // 10% discount
    else if(p>120)
        p = p - 20/100*p; //20% discount
    else if(p>300)
        p = p - 25/100*p; //25% discount
    return p;
}