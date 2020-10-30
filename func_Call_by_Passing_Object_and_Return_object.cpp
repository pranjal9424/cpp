#include<iostream>
#include<cstring>
using namespace std;
class book
{
    int a,b;

    public:
    void input(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"data : ";
        cout<<a<<" "<<b;
    }
    book add(book c){
        book temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};
int main()
{
    book b1,b2,b3;
    b1.input(3,4);
    b2.input(5,8);
    b3=b1.add(b2);
    b3.show();
    return 0;
}
