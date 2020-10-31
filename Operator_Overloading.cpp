#include<iostream>
using namespace std;
class Complex
{
    int a,b;

    public:
        void setdata(int x,int y)
        {
            a=x;
            b=y;
        }
        void show()
        {
            cout<<a<<" "<<b;
        }
        Complex operator+(Complex c)
        {
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
};

int main()
{
    Complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(4,6);
    c3=c1+c2;
    c3.show();
}


