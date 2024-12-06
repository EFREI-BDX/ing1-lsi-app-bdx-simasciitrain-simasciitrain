#include "Wagons.h"

using namespace simasciitrain;

Wagons::Wagons() : _wagons() {}

Wagons* Wagons::addWagon(AbstractWagon* wagon) {
    _wagons.push_back(wagon);
    return this;
}

void Wagons::print(std::ostream &os) const {
    for (size_t i = 0; i < _wagons.size(); ++i) {
        if (i > 0) {
            os << "-";
        }
        os << *_wagons[i];
    }
}
