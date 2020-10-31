#include<iostream>
using namespace std;
class Account
{
    int bal;
    static float roi;
    public:
        void setdata(int b)
        {
            bal=b;
        }
        void show()
        {
            cout<<bal*roi;
        }
};
float Account :: roi=3.55;

int main()
{
    Account a;
    a.setdata(2);
    a.show();
    return 0;
}

