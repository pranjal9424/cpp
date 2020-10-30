#include<iostream>
using namespace std;
class Complex
{
    int a,b,c;
public:
    Complex(int x,int y){
    a=x;
    b=y;
    }
    Complex(int z){
    c=z;
    }
};
int main()
{
    Complex c1(22,4),c2(89);
}

