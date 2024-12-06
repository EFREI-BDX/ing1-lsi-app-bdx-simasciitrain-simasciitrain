#ifndef ABSTRACTWAGON_H
#define ABSTRACTWAGON_H

#include <iostream>
#include "TrainElement.h"
#include "TypeWagon.h"

namespace simasciitrain {
    class AbstractWagon : public TrainElement {
    protected:
        const TypeWagon* _typeWagon;

    public:
        AbstractWagon(const TypeWagon* typeWagon);
        ~AbstractWagon() override = default;

        char getSymbol() const override;
        std::string getType() const override;
        void print(std::ostream& os) const override;
    };
}
#endif // ABSTRACTWAGON_H