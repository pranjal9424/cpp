#include<iostream>
#include<cstring>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
int main()
{
    book b2;
    b2.bookid=101;
    strcpy(b2.title,"mayank");
    b2.price=300.67;

    cout<<b2.title;
    return 0;
}



