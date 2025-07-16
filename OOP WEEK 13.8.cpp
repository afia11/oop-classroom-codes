#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle\n";
    }
};

class FourWheeler : public Vehicle {
public:
    FourWheeler() {
        cout << "Objects with 4 wheels are vehicles\n";
    }
};

class Car : public FourWheeler {
public:
    Car() {
        cout << "Car has 4 Wheels\n";
    }
};

int main() {
    Car obj;
    return 0;
}
