#include<bits/stdc++.h>
using namespace std;
// class is like a bluprint and object is real model and memory is allocated when object form by a class
class myclass{
    public:
    int mynum;
    string mystr;
};
int main(){
    myclass obj;
    obj.mynum=5;
    obj.mystr="abcd";
    cout<<obj.mynum<<" "<<obj.mystr;
}