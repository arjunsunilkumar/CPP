#include<iostream>
using namespace std;
class bank_acc
{
    char name[20];
    int accno,bal,type;
public:
    void initial();
    void deposit();
    void withdraw();
    void display();
}b;
void bank_acc::initial()
{
    cout<<"Enter the account number:";
    cin>>accno;
    cout<<"Enter the name of account holder:";
    cin>>name;
    cout<<"Types of accounts:\n1.Savings\n2.Current\nEnter the account type:";
    cin>>type;
    bal=0;
    cout<<"Enter the balance:";
    cin>>bal;
}
void bank_acc::deposit()
{
    cout<<"\n**** DEPOSIT ***\n";
    int dep;
    cout<<"Enter the amount to deposit:";
    cin>>dep;
    bal=bal+dep;
    cout<<"Amount deposited\n";
}
void bank_acc::withdraw()
{
    cout<<"\n**** WITHDRAWL ***\n";
    if(bal==0)
        cout<<"Balance=0\n!!!Transaction not possible!!!";
    else
    {
        int wdraw;
        cout<<"Enter the amount to withdraw:";
        cin>>wdraw;

        if(bal-wdraw<500)
            cout<<"\n!!!Transaction failed!!!\n\n\tCHECK BALANCE(TRANSACTION GOES BELOW MINIMUM BALANCE";
        else
        {
            bal=bal-wdraw;
            cout<<"\n!!!Transaction successful!!!\nNew balance="<<bal;
        }
    }
}
void bank_acc::display()
{
    cout<<"\n\n**** ACCOOUNT DETAILS ***\nAccount no.:"<<accno<<"\nAccount holder:"<<name;
    cout<<"\nType of account:";
    if(type==1)
        cout<<"Savings"<<endl;
    else
        cout<<"Current"<<endl;
    cout<<"Balance:"<<bal;
}
int main()
{
    int ch,stop=0;
    b.initial();
    do{
        cout<<"\n### MENU ###\n1.Deposit\n2.Withdrawl\n3.Display details\n4.Exit\nEnter an option:";
        cin>>ch;
        switch(ch)
        {
        case 1:
             b.deposit();
             break;
        case 2:
            b.withdraw();
            break;
        case 3:
            b.display();
            break;
        case 4:
            stop=1;
            break;
        default:
            cout<<"\n!!!Invalid option!!!";
        }
        cout<<endl;
        }while(stop==0);
}
