#include <iostream>
class Outer {
public:
    class Inner {
    public:
        void display() {
            std::cout << "Inner class method" << std::endl;
        }
    };

    void outerDisplay() {
        std::cout << "Outer class method" << std::endl;
    }
};

int main() {
    Outer::Inner innerObj;
    innerObj.display();

    Outer outerObj;
    outerObj.outerDisplay();

    return 0;
}
