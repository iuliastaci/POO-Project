
#include "reservation.h"
Reservation::Reservation() {}
Reservation::Reservation(int reservationNo, float Price, const std::vector<std::shared_ptr<Flight>> &Flights, Passenger &Passenger) : reservation_no{reservationNo}, price{Price}, passenger{Passenger}{
    if(price<=50)
        throw reservation_error("Discount is not applicable.");
    for (const auto &flight: Flights)
        flights.push_back(flight->clone());
}
std::ostream& operator<<(std::ostream& os, const Reservation& re) {
    os << "Rezervarea " << re.reservation_no <<", zborul " << " costa " << re.price<<"euro, "<<re.passenger<<"\n";
    for (const auto &fl: re.flights) {
        os<<fl<<"/n";
    }
    return os;
}
Reservation::Reservation(const Reservation &other) {
    reservation_no = other.reservation_no;
    price = other.price;
    for(const auto &fl: other.flights)
        flights.push_back(fl->clone());
    passenger = other.passenger;
}

Reservation& Reservation::operator=(Reservation other) {
    swap(*this,other);
    return *this;
}

void Reservation::set_price(){
    price=discount(price);

}

float Reservation::get_totalprice()const {
    return price;
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

void swap(Reservation &rsv1, Reservation &rsv2){
    using std::swap;
    swap(rsv1.reservation_no, rsv2.reservation_no);
    swap(rsv1.price, rsv2.price);
    swap(rsv1.flights, rsv2.flights);
    swap(rsv1.passenger, rsv2.passenger);
}

void Reservation::flight_operating_frequency(Flight *fl){
    if(auto* x = dynamic_cast<Charter*>(fl)) {
        std::cout<<"Succes!\n";
        x->get_frequency();
    }
    else
        std::cout<<"Cast unsuccesed\n";

}