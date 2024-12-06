#ifndef FREIGHTWAGON_H
#define FREIGHTWAGON_H

#include "AbstractWagon.h"

namespace simasciitrain {
    class FreightWagon : public AbstractWagon {
        int freightCount;

    public:
        FreightWagon(int freightCount);
        FreightWagon();
        void setFreightCount(int freightCount);
        int getFreightCount() const;
        void print(std::ostream& os) const override;
    };
}
#endif // FREIGHTWAGON_H