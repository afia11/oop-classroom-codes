#include <iostream>

class Calculator{
    public:
    int a;
    int b;

    void addition(){
        std::cout << a + b << std::endl;
    }

    void subtraction(){
        std::cout << a - b << std::endl;
    }

    void multiplication(){
        std::cout << a * b << std::endl;
    }
};

int main() {
    Calculator obj;
    std::cin >> obj.a >> obj.b;
    obj.addition();
    obj.subtraction();
    obj.multiplication();

    return 0;
}
