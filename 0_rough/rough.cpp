#include <iostream>
using namespace std;

class Complex{

private:
    int real;
    int img;

public:

    Complex(int r, int i){
        real=r;
        img=i;
    }

    void add(Complex &c){
        Complex temp=c;
        real+=temp.real;
        img+=temp.img;
        cout<<real<<"+"<<img<<"i"<<endl;   
    }

};

class BankAccount{

private:
    string name;
    int accountNo ;
    float balance;

public:

    BankAccount(){}

    // setter
    void setName(string name){
        this->name=name;
    }

    void setAcc(int acc){
        accountNo=acc;
    }

    void setBalance(int b){
        balance=b;
    }

    void deposit(int amount){
        balance+=amount;
    }

    int withdrawl(int amount){
        if(balance==0) return -1;
        else{
            balance-=amount;
            return 0;
        }
    }

    // getter

    string getName(){
        return name;
    }

    int getBalance(){
        return balance;
    }

    int getAcc(){
        return accountNo;
    }

};

int main() {
    
    // Complex c1(20,13);
    // Complex c2(45,78);
    // c1.add(c2);

    BankAccount axis;
    axis.setName("Nipun");
    axis.setAcc(54354546);
    axis.setBalance(10000);

    axis.deposit(5000);
    axis.withdrawl(3000);

    cout<<axis.getName()<<endl;
    cout<<axis.getAcc()<<endl;
    cout<<axis.getBalance()<<endl;

    return 0;
}