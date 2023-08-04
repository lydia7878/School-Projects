#include <iostream>
#include <string>
using namespace std;

// Write a class Battery that models a rechargeable battery. A battery has a constructor
//Battery(double capacity)
//where capacity is a value measured in milliampere hours. A typical AA battery has a capacity of 2000 to 3000 mAh. The member function
//void drain(double amount)
//drains the capacity of the battery by the given amount. The member function
//void charge()
//charges the battery to its original capacity.
//The member function
//double get_remaining_capacity()
//gets the remaining capacity of the battery

class Battery{
public:
  Battery();
  void drain(double icapacity, double iamount);
  void charge(double icapacity);
  double get_remaining_capacity() const;
private:
  double capacity;
};
//Defines the Battery class, with it's member functions and data member as instructed

Battery::Battery(){
  double capacity = 0;
}
//Defines the Battery constructor by initializing the variable

void Battery::drain(double icapacity, double iamount){
  capacity = icapacity - iamount;
}
void Battery::charge(double icapacity){
  capacity = icapacity;
}
double Battery::get_remaining_capacity() const{
  return capacity;
}
//Definition of member functions

int main(){
  double icapacity;
  cout << "Enter the capacity of the Battery (milliampere hours): " << endl;
  cin >> icapacity;
  
  Battery ibattery;
  double batteryamount = icapacity;
  cout << "Capacity of battery: " << batteryamount << endl;
  //Requests a user input battery capacity to start with and displays it to the screen
  
  string iaction;
  while(iaction != "0"){
    cout << "Enter 'drain' to drain the Battery, 'charge' to charge the Battery ('0' to stop): " << endl;
    cin >> iaction;
    //Prompts user for drain or charge input

    double iamount;
    if(iaction == "drain"){
      cout << "Enter the amount to drain the Battery: " << endl;
      cin >> iamount;
      ibattery.drain(icapacity, iamount);
      double batteryamount = ibattery.get_remaining_capacity();
      cout << "Capacity of battery: " << batteryamount << endl;
    }
    //Executes drain member function and returns new Capacity
    
    else if(iaction == "charge"){
      ibattery.charge(icapacity);
      double batteryamount = ibattery.get_remaining_capacity();
      cout << "Capacity of battery: " << batteryamount << endl;
    }
    //Executes charge member function and returns new Capacity
  }
  return 0;
}