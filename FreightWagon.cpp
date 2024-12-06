#include "FreightWagon.h"

using namespace simasciitrain;

FreightWagon::FreightWagon(int freightCount)
    : AbstractWagon(&TypeWagon::FREIGHT), freightCount(freightCount) {}

FreightWagon::FreightWagon() : FreightWagon(0) {}

void FreightWagon::setFreightCount(int freightCount) {
    this->freightCount = freightCount;
}

int FreightWagon::getFreightCount() const {
    return freightCount;
}

void FreightWagon::print(std::ostream& os) const {
    os << "[";
    for (int i = 0; i < freightCount; ++i) {
        os << "#";
    }
    os << "]";
}