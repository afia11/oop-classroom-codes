#include <iostream>
using namespace std;

int f(int a){
    return a * a;
}
int f(int a, int b){
    return a * b;
}

int main()
{
    cout << f(10, 2) << endl;
    cout << f(10) << endl;
    return 0;
}
