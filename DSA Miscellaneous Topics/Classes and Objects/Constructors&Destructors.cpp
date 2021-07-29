#include<iostream>
#include<string>    //for using string class
using namespace std;

class Cars
{
  private:
  //member variables or data members
  string companyName;
  string modelName;
  string fuelType;
  float mileage;
  double price;
  
  public:
  
  //Default constructor
  Cars()
  {
    //cout << "Default constructor called" << endl;   //get called by default and with every object
    companyName = "Toyota";
    //modelName = "Altis";
    //fuelType = "Petrol";
    //mileage = 35.5;
    //price = 150000;
  }
  
  //Parameterized constructor
  Cars(string cName, string mName, string fType, float m, double p)
  {
    //cout << "Parameterized constructor called" << endl;   
    companyName = cName;
    modelName = mName;
    fuelType = fType;
    mileage = m;
    price = p;
  }
  
  //Copy constructor
  Cars(Cars &obj)
  {
    //cout << "Copy constructor called" << endl;   
    companyName = obj.companyName;
    modelName = obj.modelName;
    fuelType = obj.fuelType;
    mileage = obj.mileage;
    price = obj.price;
  }
  
  //member functions
  void setData(string cName, string mName, string fType, float m, double p)
  {
    companyName = cName;
    modelName = mName;
    fuelType = fType;
    mileage = m;
    price = p;
  }
  
  void displayData()
  {
    cout << "Car Details" << endl;
    cout << "Name of the company: " << companyName << endl;
    cout << "Car model name: " << modelName << endl;
    cout << "Type of fuel: " << fuelType << endl;
    cout << "Mileage: " << mileage << endl;
    cout <<"Price of car: " << price << endl << endl;
  }
  
  ~Cars()
  {
    //We do not have pointer or dynamic allocation but this is for understanding, de-allocation will happen here if it is there
    cout << "Destructor is called" << endl;   //Called when program is going to end (3 times: for each car object)
  }
};

int main()
{
  //objects are nothing but variables of type class
  Cars car1, car2("Toyota", "fortuner", "diesel", 10, 350000);    //object of type Car
  //Parameterized constructor is called for car2
 
  car1.setData("toyota", "altis", "petrol", 15.5, 1500000);
  car1.dispalyData();
  car2.displayData();
  
  //you can do the same for another car3
  Cars car3 = car1;   //Copy constructor is called
  car3.displayData();
  return 0;
}
