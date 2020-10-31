#include<iostream>
using namespace std;
class Account
{
    int bal,qan;

    public:
        Account()
        {
            cout<<"Constructor called\n";
        }
        ~Account()
        {
            cout<<"Destructor called";
        }
};

int main()
{
    Account a;
}
