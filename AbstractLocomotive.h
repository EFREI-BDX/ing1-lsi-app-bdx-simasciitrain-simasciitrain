#ifndef ABSTRACTLOCOMOTIVE_H
#define ABSTRACTLOCOMOTIVE_H

#include <iostream>

#include "TrainElement.h"
#include "TypeLocomotive.h"

namespace simasciitrain {
    class AbstractLocomotive : public TrainElement {
    protected:
        const TypeLocomotive* typeLocomotive;

    public:
        AbstractLocomotive(const TypeLocomotive* type);

        virtual ~AbstractLocomotive() = default;

        virtual char getSymbol() const;
        virtual std::string getType() const;
        virtual void print(std::ostream& os) const;
    };
}
#endif // ABSTRACTLOCOMOTIVE_H