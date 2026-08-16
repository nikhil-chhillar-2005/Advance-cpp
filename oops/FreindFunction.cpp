// Freind function is not member of function but it can access the private member of class
#include<bits/stdc++.h>
using namespace std;
class Employee{
    private:
    int salary;
    public:
    Employee(int s=0){
        salary=s;
    }
    friend void showsalry(Employee emp); 
};
void showsalry(Employee e){
    cout<<e.salary;
}
int main(){
    Employee e(5);
    showsalry(e);

}
