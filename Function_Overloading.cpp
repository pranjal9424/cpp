#include<iostream>
using namespace std;
int add(int,int);
float add(float,float);
int main()
{
    int a=5,b=6,s;
    s=add(a,b);
    cout<<"int sum:"<<s<<"\n";
    float c=5.6,d=6.3,f;
    f=add(c,d);
    cout<<"int sum:"<<f;
    return 0;
}
int add(int x,int y)
{
    return (x+y);
}
float add(float x,float y)
{
    return (x+y);
}


