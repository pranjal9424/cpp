
#include<iostream>
using namespace std;
class Vehicle
{
    public:
    Vehicle()
    {
        cout<<"This is Vehicle\n";
    }

};
class Wheeler
{
    public:
    Wheeler()
    {
        cout<<"This is 4 wheeler\n";
    }

};
class Car :  public Vehicle , public Wheeler
{

};
int main()
{
    Car ob;
}

