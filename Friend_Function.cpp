#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
        void show()
        {
            cout<<a<<" "<<b;
        }
        void setdata(int x,int y)
        {
            a=x;
            b=y;
        }
        friend void fun(Complex);
};
void fun(Complex c)
{
    cout<<c.a+c.b;
}
int main()
{
    Complex c1,c2,c3;
    c1.setdata(3,4);
    fun(c1);
}
