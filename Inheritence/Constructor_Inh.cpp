#include<iostream>
using namespace std;
class Wheeler
{
    public:
    int a;
    public:
        Wheeler(int x)
        {
            a=x;
        }

};
class Car : public Wheeler
{
    int b;
    public:
        Car(int x,int y):Wheeler(x)
        {
            b=y;
        }
        void show()
        {
            cout<<a<<" "<<b;
        }
};
int main()
{
    Car ob(4,5);
    ob.show();
}
