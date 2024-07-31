#include <string>
#include <iostream>
using namespace std;

class inClass
{
    //Access Specifiers are the same as Java
    //Public allows you to use it from anywhere as long as you have an instance of the object
    //Private only allows access within the class itself
    //Protected only accessed in inherited classes
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