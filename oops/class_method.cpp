// there are two type of method defination for class
#include<bits/stdc++.h>
using namespace std;
class myclass{
    public:
    void insidedefination(){
        cout<<"function defines inside class\n";
    }
    void outside();
};

void myclass::outside(){
    cout<<"this define outside the class\n";
}
int main(){
    myclass obj;
    obj.insidedefination();
    obj.outside();
}
