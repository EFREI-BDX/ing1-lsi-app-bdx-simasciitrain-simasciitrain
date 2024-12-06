#include "UtilityWagon.h"

using namespace simasciitrain;

UtilityWagon::UtilityWagon()
    : AbstractWagon(&TypeWagon::UTILITY) {}

void UtilityWagon::print(std::ostream& os) const {
    os << "[@]";
}