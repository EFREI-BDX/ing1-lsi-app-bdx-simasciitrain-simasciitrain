#ifndef PASSENGERWAGON_H
#define PASSENGERWAGON_H

#include "AbstractWagon.h"

namespace simasciitrain {
    class PassengerWagon : public AbstractWagon {
        int passengerCount;

    public:
        PassengerWagon(int passengerCount);
        PassengerWagon();
        void setPassengerCount(int passengerCount);
        int getPassengerCount() const;
        void print(std::ostream& os) const override;
    };
}
#endif // PASSENGERWAGON_H