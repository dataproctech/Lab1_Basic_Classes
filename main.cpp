#include <iostream>
using namespace std;

class Car{
  public:
    string make;
    string model;
    int year;
    int currentYear = 2025;
    Car(string ma, string mo, int ye): make(ma), model(mo), year(ye){}
  void displayInfo(){
    cout << "Marka: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Rocznik: "  << year << endl;
  }
  int getCarAge(){
    int age;
    age = currentYear - year;
    cout << "Wiek samochodu: " << age << endl;
    return age;
  }
  bool isSameCar(Car othercar){
    if (make == othercar.make && model == othercar.model && year == othercar.year) {
        cout << "Te dwa samochody sa takie same. ";
        return true;
    }
    cout << "Te dwa samochody sa rozne. ";
    return false;
  }
};

int main(){
  Car mycar1("Volkswagen", "Passat", 2005);
  Car mycar2("Porsche", "911", 2020);
  mycar1.displayInfo();
  mycar1.getCarAge();
  mycar2.displayInfo();
  mycar2.getCarAge();
  mycar1.isSameCar(mycar2);
  return 0;
}
