#include <iostream>

class Vector {
private:
    double* x;
    double* y;

public:
    Vector(double x_val = 0, double y_val = 0) {
        x = new double(x_val);
        y = new double(y_val);
    }

    ~Vector() {
        delete x;
        delete y;
    }

    void display() const {
        std::cout << "(" << *x << ", " << *y << ")\n";
    }
};

int main() {

    Vector v1(3.0, 4.0);
    std::cout << "Original vector v1: ";
    v1.display();

    Vector v2 = v1;
    std::cout << "Copied vector v2: ";
    v2.display();

    return 0;
}
