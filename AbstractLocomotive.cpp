#include "AbstractLocomotive.h"

using namespace simasciitrain;

AbstractLocomotive::AbstractLocomotive(const TypeLocomotive* type) : typeLocomotive(type) {}

char AbstractLocomotive::getSymbol() const {
    return typeLocomotive->getSymbol();
}

std::string AbstractLocomotive::getType() const {
    return typeLocomotive->getName();
}

void AbstractLocomotive::print(std::ostream& os) const {
    os << "[" << getSymbol() << "]";
}