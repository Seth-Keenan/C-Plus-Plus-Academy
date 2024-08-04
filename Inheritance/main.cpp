#include "Account.cpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Account emma(12345,12345);
    emma.toString();
    emma.setBalance(0);
    emma.toString();
    bool test = emma.deposit(34);
    cout << test << "\n";
    emma.toString();


    Account seth;
    seth.toString();
    seth.setBalance(12345);
    seth.toString();
}