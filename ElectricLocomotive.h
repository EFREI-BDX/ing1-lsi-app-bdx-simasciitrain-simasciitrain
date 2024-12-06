#ifndef ELECTRICLOCOMOTIVE_H
#define ELECTRICLOCOMOTIVE_H

#include "AbstractLocomotive.h"

namespace simasciitrain {
    class ElectricLocomotive : public AbstractLocomotive {
    public:
        ElectricLocomotive();
        ~ElectricLocomotive() = default;
    };
}
#endif // ELECTRICLOCOMOTIVE_H