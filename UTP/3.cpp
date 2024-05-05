#include <iostream>
#include <cmath>
using namespace std;

template <class Type>
class Trapezoid {
private:
    Type base1, base2, height;
public:
    Trapezoid(): base1(10), base2(10), height(10) {}
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
    Type calculateArea() const {
        return (base1 + base2) * height / 2;
    }
    Type calculatePerimeter() const {
        Type sisi = sqrt(pow((base2 - base1) / 12, 2) + pow(height, 2));
        return 2 * sisi + base1 + base2;
    }
};