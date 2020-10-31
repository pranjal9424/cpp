#include<iostream>
using namespace std;
class Parent
{
    public:
    int pa;
};
class Child : public Parent
{
    public:
    int ch;
};
int main()
{
    Child ob;
    ob.pa=71;
    ob.ch=81;
    cout<<ob.pa<<" "<<ob.ch;
}

