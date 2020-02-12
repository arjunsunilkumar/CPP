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
main()
{
    char ch;
    char c='y';
    bank b;
    do
    {
        cout<<"\nEnter i to increment and d to decrement:";
        cin>>ch;
        if(ch=='i')
           b++;
        else if(ch=='d')
           b--;
        else
            cout<<"Invalid Input\n";
        cout<<"Do you want to continue?";
        cin>>c;
        b.display();
    }while(c=='y');
}
