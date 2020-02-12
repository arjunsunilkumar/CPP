#include<iostream>
using namespace std;
class bank
{
    int count;
public:
    bank()
    {
        count=0;
    }
    void operator++(int)
    {
       count++;
    }
    void operator--(int)
    {
        count--;
    }
    void display()
    {
        cout<<"\n\tCOUNT="<<count;
    }
};
int main()
{
    int ch;
    char c='y';
    bank b;
    do
    {
        cout<<"\nEnter 1 to increment and 2 to decrement:";
        cin>>ch;
        if(ch==1)
           b++;
        else if(ch==2)
           b--;
        else
            cout<<"!!! INVLAID INPUT !!!\n";
        cout<<"Do you want to continue(y/n):";
        cin>>c;
        b.display();
    }while(c=='y');
    return 0;
}
