#include <iostream>
using namespace std;

class Shape {
protected:
    double area;
public:
    Shape(double a) {
        area = a;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : Shape(l * w) {
        length = l;
        width = w;
    }

    void displayArea() {
        cout << "Rectangle Area: " << area << endl;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    rect.displayArea();
    return 0;
}
