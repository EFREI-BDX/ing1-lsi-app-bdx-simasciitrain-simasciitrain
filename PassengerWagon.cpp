#include "PassengerWagon.h"

using namespace simasciitrain;

PassengerWagon::PassengerWagon(int passengerCount)
    : AbstractWagon(&TypeWagon::PASSENGER), passengerCount(passengerCount) {}

PassengerWagon::PassengerWagon() : PassengerWagon(0) {}

void PassengerWagon::setPassengerCount(int passengerCount) {
    this->passengerCount = passengerCount;
}

int PassengerWagon::getPassengerCount() const {
    return passengerCount;
}

void PassengerWagon::print(std::ostream& os) const {
    os << "[";
    for (int i = 0; i < passengerCount; ++i) {
        os << "o";
    }
    os << "]";
}