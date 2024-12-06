#ifndef TYPEWAGON_H
#define TYPEWAGON_H

#include <string>
#include <utility>

namespace simasciitrain {

    class TypeWagon {
    public:
        TypeWagon(std::string name, char symbol) : name_(std::move(name)), symbol_(symbol) {}

        [[nodiscard]] std::string getName() const { return name_; }
        [[nodiscard]] char getSymbol() const { return symbol_; }

        const static TypeWagon PASSENGER;
        const static TypeWagon FREIGHT;
        const static TypeWagon UTILITY;
    private:
        std::string name_;
        char symbol_;
    };

}

#endif // TYPEWAGON_H