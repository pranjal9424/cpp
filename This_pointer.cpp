
#include<iostream>
using namespace std;
class Wheeler
{
    int l,b,h;
    public:
        void setdata(int l,int b,int h)
        {
            this->l=l;
            this->b=b;
            this->h=h;
        }
        void show()
        {
            cout<<l<<" "<<b<<" "<<h;
        }
};
int main()
{
    Wheeler wh;
    wh.setdata(3,6,5);
    wh.show();
}
