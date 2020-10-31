

#include<iostream>
using namespace std;
class A
{
    int l,b,h;
    public:
       virtual void show()=0;
};
class B:public A
{
    public:
        void show()
        {
            cout<<"hi class B";
        }
};
int main()
{
    A *p;
    B ob;
    p=&ob;
    p->show();
}

