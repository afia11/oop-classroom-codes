#include<iostream>

class test
{
    int code;
    static int count;
public:
    void setcode(void)
    {
        code = ++count;
    }
    void showcode(void){

       std::cout << "object member : " << code << std::endl;
    }
    static void showcount(void)
    {
        std::cout << "count = " << count << std::endl;
    }
};

int test::count;

int main()
{
    test t1, t2;
    t1.setcode();
    t2.setcode();
    test::showcount();
    test t3;
    t3.setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}
