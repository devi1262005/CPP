#include <iostream>
using namespace std;

class bank{
    private:
        char name[20];
        int acc_no;
        char acc_type[20];
        float balance=0;
        int choice;
        int amount;
        char yesorno;

    public:
        bank(){
            cout<<"Enter your name: ";
            cin>>name;
            cout<<"\nEnter your account number: ";
            cin>>acc_no;
            cout<<"\nEnter your account type: ";
            cin>>acc_type;

            do{
            cout<<"\nEnter the operaton to be done. \n1.Deposit an amount. \n2.Withdraw an amount after checking the balance. \n3.Display name and balance.\n";
            cin>>choice;
            switch(choice){
        case 1:
            cout<<"\nEnter the amount to be deposited: ";
            cin>>amount;
            balance+=amount;
            cout<<"\nThe amount is deposited.";
            break;
        case 2:
            cout<<"\nYour balance is: "<<balance;
            cout<<"\nEnter the amount to be withdrawn: ";
            cin>>amount;
            if(balance<amount)
                cout<<"\nInsufficient balance.";
            else{
            balance-=amount;
            cout<<"\nThe amount is withdrawn.";
            }
            break;
        case 3:
            cout<<"\nName: "<<name;
            cout<<"\nAccount balance: "<<balance;
            break;

        default:
            cout<<"\nEnter a valid choice";
            break;
        }
        cout<<"\nDo you want to continue?(y/n)";
        cin>>yesorno;
        }while(yesorno=='y'||yesorno=='Y');
    }
};
int main(){
bank b;
return 0;
}
