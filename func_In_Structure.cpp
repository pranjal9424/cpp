#include<iostream>
#include<cstring>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
    void input()
    {
        cout<<"Enter bookid , title & price :";
        cin>>bookid>>title>>price;
    }
    void show()
    {
        cout<<"data : ";
        cout<<bookid<<" "<<title<<" "<<price;
    }
};
int main()
{
    book b2;
    b2.input();
    b2.show();
    return 0;
}




