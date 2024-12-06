#ifndef TYPELOCOMOTIVE_H
#define TYPELOCOMOTIVE_H

#include <string>
#include <utility>

namespace simasciitrain {
    class TypeLocomotive {
    public:
        TypeLocomotive(std::string name, char symbol) : name(std::move(name)), symbol(symbol) {}

        [[nodiscard]] std::string getName() const { return name; }
        [[nodiscard]] char getSymbol() const { return symbol; }

        const static TypeLocomotive ELECTRIC;
        const static TypeLocomotive GASOLINE;
    private:
        std::string name;
        char symbol;
    };
}
#endif // TYPELOCOMOTIVE_H