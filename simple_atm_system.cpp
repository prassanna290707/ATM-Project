#include <iostream>
using namespace std;
int main(){
    short int balance = 1000,choice;double amt=0;
    cout<<"ATM Menu"<<endl;
    cout<<"1.Check Balance \n2.Deposit \n3.Withdraw \n4.Exit"<<endl;.

    while(true){
        cout<<"Enter choice: ";
        cin>>choice;
        if(choice==4){
            cout<<"Thank You";
            break;
        }

        switch(choice){
            case 1:
                cout<<"Balance : $"<<balance<<endl;
                break;
            case 2:
                cout<<"Enter amount to deposit : ";
                cin>>amt;
                balance+=amt;
                break;
            case 3:
                cout<<"Enter amount to withdraw : ";
                cin>>amt;

                if (balance<amt){
                    cout<<"Insufficient Funds.";
                }
                else{
                    balance-=amt;
                }
                break;
            default:
                cout<<"Invalid choice...";
                break;
        }
    }
    return 0;
}