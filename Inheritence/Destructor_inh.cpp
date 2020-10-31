#include<iostream>
using namespace std;
class Wheeler
{
    public:
        ~Wheeler()
        {
            cout<<"Wheeler";
        }

};
class Car : public Wheeler
{
    public:
        ~Car()
        {
            cout<<"Car\n";
        }
};
int main()
{
    Car ob;
}
