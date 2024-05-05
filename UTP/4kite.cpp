#include <iostream>
#include <cmath>
using namespace std;

template<class Type>
class Kite{
private:
    Type diagonal1, diagonal2;
public:
    Kite(): diagonal1(10), diagonal2(10) {}
    Kite(Type diagonal1, Type diagonal2): diagonal1(diagonal1), diagonal2(diagonal2) {}
    void setDiagonal1(Type diagonal1) {
        this->diagonal1 = diagonal1;
    }
    void setDiagonal2(Type diagonal2) {
        this->diagonal2 = diagonal2;
    }
    Type getDiagonal1() const {
        return diagonal1;
    }
    Type getDiagonal2() const {
        return diagonal2;
    }
    Type calculateArea() const {
        return diagonal1 * diagonal2 / 2;
    }
    Type calculatePerimeter() const {
        Type sisi_miring = sqrt(pow((diagonal1 / 2), 2) + pow((diagonal2 / 2), 2));
        return 2 * (sisi_miring + sisi_miring);
    }
};