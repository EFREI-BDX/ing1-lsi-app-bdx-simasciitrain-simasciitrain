#ifndef TRAIN_H
#define TRAIN_H

#include <vector>
#include "ITrain.h"
#include "AbstractLocomotive.h"
#include "AbstractWagon.h"
#include "Wagons.h"

namespace simasciitrain {
    class Train : public ITrain {
    private:
        Wagons* _wagons;
        AbstractLocomotive* _locomotive;

    public:
        Train(Wagons* wagons, AbstractLocomotive* locomotive);
        ~Train() override;

        void print(std::ostream& os) const override;
    };
}
#endif // TRAIN_H
