#include <string>
#include <iostream>
using namespace std;

class inClass
{
    public: 
        void helloWorld()
        {
            cout << "Hello World, in the class" << "\n";
        };

        void outHelloWorld();
};

void inClass::outHelloWorld()
{
    cout << "Hello World, out of class" << "\n";
};

int main()
{
    inClass command;
    command.helloWorld();
    command.outHelloWorld();
    return 0;
}