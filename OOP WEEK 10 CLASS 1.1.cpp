#include <iostream>
using namespace std;

int main() {
    int* p;

    p = new int;
    if (!p) {
        cout << "Allocation error\n";
        return 1;
    }

    *p = 100;

    cout << "Here is integer at p: " << *p << "\n";
    delete p;
    p = nullptr;

    return 0;
}
