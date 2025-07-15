#include <iostream>
using namespace std;

class Student {
    public:

    string name;
    int score;
    int age;
    void eligible(){
        if(score>10 && age>20){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
};
int main(){
    Student obj;
    obj.name = "Afia";
    obj.score = 14;
    obj.age = 21;
    obj.eligible();

    return 0;



}

