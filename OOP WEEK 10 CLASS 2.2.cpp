#include <iostream>
using namespace std;

double rect_area(double length, double width = 0)
{
    if(!width)
    {
        width = length;
    }
    return length * width;
}

int main()
{
    cout << "10 x 5.8 rectangle has area: ";
    cout << rect_area(10.0, 5.8) << '\n';

    cout << "10 x 10 square has area: ";
    cout << rect_area(10.0) << '\n';

    return 0;
}
