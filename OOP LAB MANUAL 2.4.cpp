#include <iostream>

class Medicine {
public:
    std::string name;
    int expiration_year;
};

int main() {
    Medicine obj;
    obj.name = "doggo";
    obj.expiration_year = 2024;
    int current_year = 2023;

    if (current_year <= obj.expiration_year) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}
