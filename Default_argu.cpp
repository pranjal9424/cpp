#include<iostream>
using namespace std;
int add(int,int,int=2);
int main()
{
    cout<<add(1,2);
    return 0;
}
int add(int x,int y,int z)
{
    return (x+y+z);
}

