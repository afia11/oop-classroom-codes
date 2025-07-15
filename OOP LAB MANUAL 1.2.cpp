#include <iostream>
using namespace std;
class Student {
private:
    int age;
public:
    void setAge(int a) {
        age = a;
    }
int getAge() {
    return age;
    }
};

int main() {
    Student s;
    s.setAge(10);
    cout << "Age: "<<  s.getAge() << endl;
    return 0;
}
