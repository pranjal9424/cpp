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
class Wheeler : public Vehicle
{
    public:
    Wheeler()
    {
        cout<<"This is 4 wheeler\n";
    }

};
class Car : public Wheeler
{
    public:
     Car()
    {
        cout<<"This is Car\n";
    }
};
int main()
{
    Car ob;
}

