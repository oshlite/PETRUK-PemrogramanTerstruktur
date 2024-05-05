#include <iostream>
using namespace std;

template <class Type>
class Trapezoid {
private:
    Type base1, base2, height;
public:
    Trapezoid(Type base1, Type base2, Type height): base1(base1), base2(base2), height(height) {}
    void setBase1(Type base1) {
        this->base1 = base1;
    }
    void setBase2(Type base2) {
        this->base2 = base2;
    }
    void setHeight(Type height) {
        this->height = height;
    }
    Type getBase1() const {
        return base1;
    }
    Type getBase2() const {
        return base2;
    }
    Type getHeight() const {
        return height;
    }
};
template<class Type>
Trapezoid<Type>::Trapezoid(Type base1, Type base2, Type height) : base1(base1), base2(base2), height(height) {}