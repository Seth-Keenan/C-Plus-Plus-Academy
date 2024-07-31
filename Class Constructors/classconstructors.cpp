#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:
        string brand;
        string model;
        int year;
        
        //Constructor
        Car()
        {
            this->brand = "";
            this->model = "";
            this->year = 0;
        };

        Car(string brand, string model, int year)
        {
            this->brand = brand;
            this->model = model;
            this->year = year;
        };

        void toString()
        {
            cout << this->brand << ", " << this->model << ", " << this->year << "\n";
        };
};

int main()
{
    //Constructor with constraints
    Car car("Mazda", "Miata", 2010);
    car.toString();

    //Empty Constructor
    Car car2;
    car2.toString();
    return 0;
};