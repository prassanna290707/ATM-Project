#include <iostream>
using namespace std;

void showmenu(){
    cout<<endl;
    cout<<"\nATM Menu:"<<endl;
    cout<<"\n1.Check Balance \n2.Deposit \n3.Withdraw \n4.Exit"<<endl;
}

double withdraw(double balance){
    double amount;
    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    if(amount>balance){
        cout<<"Not enough money."<<endl;
        return balance;
    }
    else{
        balance-=amount;
        cout << "Succefully withdrawn,New balance: "<< balance << endl;
        return balance;
    }
}

double deposit(double balance){
    double amount;
    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    balance+=amount;
    cout << "Succefully deposited,New balance: " << balance << endl;
    return balance;
}

void showbalance(double balance){
    cout << "\nCurrent Balance: " << balance << endl;

}
double operation(double balance){

    while(true){
        short int choice;
        showmenu();
        cout << "\nEnter your choice :";
        cin >> choice;

        if(choice==4){
            cout << "Thank You...";
            break;
        }
        
        switch(choice){
            case 1:
                showbalance(balance);
                break;
            case 2:
                balance=deposit(balance);
                break;
            case 3:
                balance=withdraw(balance);
                break;
            default:
                cout << "\nInvalid choice"<<endl;
                break;
                
        }
    }

}

int main(){
    double balance=1000;
    balance=operation(balance);
    return 0;
}