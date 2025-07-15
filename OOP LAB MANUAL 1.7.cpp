#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int score;
    int age;
    void eligible() {
        if (score > 10  &&  age > 20) {
                cout << "YES" << endl;
        } else {
            cout << "NO" << endl;    }
}
};
int main() {
    Student obj;
    obj.name ="Tom";
    obj.score = 15,
    obj.age = 21,

    obj.eligible();
    return 0;
}
