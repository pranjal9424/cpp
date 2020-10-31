#include<iostream>
using namespace std;
class Account
{
    int bal,qan;

    public:
        Account(int b)
        {
            bal=b;
        }
        Account(Account &c)
        {
            qan=c.qan;
        }
        void show()
        {
            cout<<bal<<" "<<qan;
        }
};

int main()
{
    Account a1(45);
    Account a2(a1);//copy constructor
    a2.show();
}


