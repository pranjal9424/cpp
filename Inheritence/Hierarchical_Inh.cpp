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
};
class Car : public Vehicle
{
};
int main()
{
    Car ob;
    Wheeler ob1;
}


