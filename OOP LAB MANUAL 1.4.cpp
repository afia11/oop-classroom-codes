#include <iostream>
using namespace std;
class User {
private:
    string name = "Alice";
    string password = "Wonderland";
public:
    void set(string name, string password) {
        this->name = name;
        this->password = password;
    }
    void get() {
        cout << name << " " << password << endl;
    }
};
int main() {
    User Obj;
    Obj.get();

    Obj.set("Tom", "Jerry");
    Obj.get();
    return 0;
}
