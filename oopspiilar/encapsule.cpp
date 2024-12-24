#include<iostream>
using namespace std;
class Bank{
    private:
        string Bankaccount;
        double Balance;
    public:
    Bank(string account,double initalBalance){
        Bankaccount=account;
        Balance=initalBalance;
    }
    double getBalance() const {
        return Balance;
    }
    void deposit(double amount){
        if(amount>0){
            Balance+=amount;
            cout<<Balance;
        }else{
            cout<<"Invalid Balance";
        }
    }
    void withdraw(double amount){
        if(Balance>=amount && amount>0){
            cout<<"Withdraw Succeesfully";
        }
        else{
            cout<<"Invalid Withdraw";
        }
    }

};
int main(){
    Bank myAccount("12345",1000);
    myAccount.deposit(200);


}