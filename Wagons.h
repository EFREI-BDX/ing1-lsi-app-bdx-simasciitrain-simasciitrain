#ifndef WAGONS_H
#define WAGONS_H

#include <vector>
#include <iostream>
#include "AbstractWagon.h"

namespace simasciitrain {
    class Wagons {
    public:
        Wagons();
        ~Wagons() = default;

        Wagons* addWagon(AbstractWagon *wagon);
        void print(std::ostream &os) const;
    private:
        std::vector<AbstractWagon*> _wagons;
    };

    inline std::ostream& operator<<(std::ostream &os, Wagons &w) {
        w.print(os);
        return os;
    }
}
#endif // WAGONS_H