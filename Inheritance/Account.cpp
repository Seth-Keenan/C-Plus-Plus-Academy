#include <iostream>
using namespace std;

class Account
{
    public:
        int balance;
        int acctnum;

    //Default
    Account()
    {
        this->balance = 0;
        this->acctnum = 0;
    };

    //Parametrized
    Account(int balance, int acctnum)
    {
        this->balance = balance;
        this->acctnum = acctnum;
    };

    void toString()
    {
        cout << this->balance << ", " << this->acctnum << "\n";
    };

    int getBalance()
    {
        return this->balance;
    };

    void setBalance(int balance)
    {
        this->balance = balance;
    };

    int getAcctnum()
    {
        return this->acctnum;
    };

    void setAcctnum(int acctnum)
    {
        this->acctnum = acctnum;
    };

    bool deposit(int amount)
    {
        if (amount > 0)
        {
            this->balance += amount;
            return true;
        }
        return false;
    };

};