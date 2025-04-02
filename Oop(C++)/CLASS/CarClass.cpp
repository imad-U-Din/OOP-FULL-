#include <iostream>
using namespace std;
class Car
{
public:
    string name;
    int price;
    int seats;
    string type; 

    Car(string n,int p,int s,string t){   //This must be in same order.
        name=n;
        price=p;
        seats=s;
        type=t;
        
    } 
};
void print(Car c)
{
    cout << c.name <<" "<< c.price << " " << c.seats << " " << c.type << " " << endl;
}

void change(Car& c){      //WRITE (Car& c) IF YOU WANT TO CHANGE NAME BY PASS BY REFERENCE
    c.name="BMW";

}
int main()
{
 
    Car c1("Honda City",150000,5,"Sedan");
    // c1.name = "Honda City";
    // c1.price = 1500000;
    // c1.seats = 5;
    // c1.type = "Sedan";

    print(c1);
    change(c1);   //PASS BY VALUE
    print(c1);

    // Car c2;
    // c2.name = "Swift";
    // c2.price = 700000;
    // c2.seats = 5;
    // c2.type = "Hatchback"; 
    
    // Car c3;
    // c3.name = "Kia Sonet";
    // c3.price = 1200000;
    // c3.seats = 8;
    // c3.type = "SUV";

    // print(c1);
    // print(c2);
    // print(c3);
}