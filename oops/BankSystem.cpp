#include <iostream>
using namespace std;

class AashuBank{
private:
    int balance;

public:
    string name;
    int accno;

    AashuBank(string name,int accno, int balance){
        this -> name = name;
        this -> accno = accno;
        if(balance >= 0){
            this -> balance = balance;
        }else{
            this -> balance = 0;
        }
    }

    void deposit(int amount){
        if(amount > 0){
            balance += amount;
            cout << "Deposited" << endl;
        }else{
            cout << "Invalid amount" << endl;
        }
    }

    void withdraw(int amount){
        if(amount > balance){
            cout << "Insufficient Balance" << endl;
        }else if(amount <= 0){
            cout << "Invalid amount" << endl;
        }else{
            balance -= amount;
            cout << "Withdrawal Successfull" << endl;
        }
    }

    int getBalance(){
        return balance;
    }
};



int main(){
    AashuBank a("Shivam", 1234, 1000);

    a.deposit(10000);
    a.withdraw(500);
    cout << a.getBalance() << endl;
    
}