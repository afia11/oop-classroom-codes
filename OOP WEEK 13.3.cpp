#include <iostream>
using namespace std;

class Shape {
protected:
    double area;
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
        area = l * w;
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
