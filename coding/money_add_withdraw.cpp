#include<iostream>
using namespace std;
struct BankAccount
{
    int account_no;
    string name;
    double balance ;

    void setInfo(string name, int account_no, double balance)
    {
        this-> name=name;
        this->account_no=account_no;
        this->balance=balance;
    }
    void Deposite(double amount)
    {
        if (amount>= 100 && amount<=10000)
        {
            balance+=amount;
            cout<<"Deposit "<<amount<<"$ tk into the account."<<endl;
            cout<<"Updated balance "<<balance<<endl;
        }

        else
        {
            cout<<"Sorry,Does not match the requirement for Add money "<<endl;
        }
    }
    void withdrawal(double amount)
{

        if (balance-amount >= 500 && amount <= 2000)
        {
            balance = balance-amount;
            cout<< "Withdrawn " << amount << "tk from the account."<<endl;
            cout << "Updated Balance: " << balance << endl;
        }
        else
        {
            cout <<"Withdrawal failed"<<endl;
        }
}
        void show()
        {
            cout<<"Your name : "<<name<<endl;
            cout<<"Account No. "<<account_no<<endl;
            cout<<"Your current Balance : "<<balance<<endl;
        }
        void updateBalance()
        {
            cout<<"Balannce After Deposit and Withdraw money : "<<balance;
        }


    };

    int main ()
    {
        BankAccount bank;
        string name;
        double balance;
        int accNo;

        cout<< "Enter your name: ";
        getline(cin,name);
        cout<< "Enter balance: ";
        cin>>balance;
        cout<< "Enter account no: ";
        cin>>accNo;

        bank.setInfo(name,accNo,balance);

        cout<< "\nInformation of the object..\n";
        bank.show();

        double deposite ;
        double withdraw;
        cout<<"Enter a amount for deposit - ";
        cin>>deposite;
        bank.Deposite(deposite);
        cout << "\nEnter amount to withdraw from this account: ";
        cin >> withdraw;
        bank.withdrawal(withdraw);
        bank.updateBalance();

    }
