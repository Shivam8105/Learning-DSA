#include <iostream>
using namespace std;

class BankSystem{
private:
    int accountno;
    string name;
    double balance;
    void logTransaction(string type, double amount){
        cout << "Transaction " << type << " of " << amount << endl;
    }
public:
    BankSystem(int accno,string name,double balance){
        this -> accountno = accno;
        this -> name = name;
        this -> balance = balance;
    }

    void deposit(int amount){
        if(amount < 0){
            cout << "invalid amount" << endl;
            return;
        }else{
            balance += amount;
            logTransaction("deposit",amount);
        }
    }

    void withdraw(int amount){
        if(amount > 0 || amount <= balance){
           balance -= amount;
           logTransaction("Withdraw",amount);
        }else{
            cout << "Insufficient Balance" << endl;
        }
    }

    double getBalance(){
        return balance;
    }


};

int main(){
    BankSystem acc(1,"Shivam Kumar",1000);
    acc.deposit(5000);
    acc.withdraw(500);
    cout << acc.getBalance() << endl;
}