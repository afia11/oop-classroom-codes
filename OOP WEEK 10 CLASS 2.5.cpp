#include <iostream>
using namespace std;

void space(int count)
{
    for (; count--;)
    {
        cout << ' ';
    }
}

void space(int count, char ch)
{
    for (; count--;)
    {
        cout << ch;
    }
}

int main()
{
    void (*fp1)(int);

    void (*fp2)(int, char);

    fp1 = space;
    fp2 = space;
    fp1(22);
    cout << "\n";

    fp2(30, '1');
    cout << "\n";

    return 0;
}
