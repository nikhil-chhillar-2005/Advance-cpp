#include<bits/stdc++.h>
using namespace std;
class Car {        
  public:          
    string brand; 
    string model; 
    int year; 
    int eno=0;     
    Car(string x, string y, int z) { 
      brand = x;
      model = y;
      year = z;
    }
    Car(string x,string y,int z,int e){
        brand = x;
      model = y;
      year = z;
      eno=e;
    }
};

int main() {
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969,5);
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year <<" "<<carObj2.eno<< "\n";
  return 0;
}