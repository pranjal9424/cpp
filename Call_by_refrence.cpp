#include<iostream>
using namespace std;
int add(int &,int &);
int main()
{
    int a=5,b=6,s;
    s=add(a,b);
    cout<<s;
    return 0;
}
int add(int &x,int &y)
{
    return (x+y);
}

