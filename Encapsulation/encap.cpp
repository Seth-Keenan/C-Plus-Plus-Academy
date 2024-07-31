#include <iostream>
#include <string>
using namespace std;

//All encapsulation really is, is hiding sensitive information from a user
//This is just a basic example of a way you could hide some user information

class Person
{
    private:
        int ssn;
        string dob;

    public:
        int height;
        string name;
        string hairColor;

    //Parameterized Constructor
    Person(int ssn, string dob, int height, string name, string hairColor)
    {
        this->ssn = ssn;
        this->dob = dob;
        this->height = height;
        this->name = name;
        this->hairColor = hairColor;
    };

    //Default Constructor
    Person()
    {
        this->ssn = 0;
        this->dob = "";
        this->height = 0;
        this->name = "";
        this->hairColor = "";
    };

    string getDOB()
    {
        return this->dob;
    };

    void setDOB(string newDOB)
    {
        this->dob = newDOB;
    };
};

int main()
{
    Person seth(123, "1/1/24", 123, "seth", "brown");
    cout << seth.getDOB() << "\n";
    Person unknown;
    cout << unknown.getDOB() << "\n";
    unknown.setDOB("1/2/04");
    cout << unknown.getDOB() << "\n";
    return 0;
};