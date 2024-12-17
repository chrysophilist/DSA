//Reference:  It is another name oa we can say a nickname given to a variable
            //It's like two name for the same value inside the memory
    //The decleration and initialization both are run together not indipendently.

//&r: Reference to a variable
//r:  variable which can store value
//*r: pointer variable which can store address of variable


#include<bits/stdc++.h>
using namespace std;

int main(){

    int a=10;
    int &r=a; //Decleration(&r) and Initialization (&r=a)
    cout<<"Value of a: "<<a<<". Value of r: "<<r<<" are same. because r is reference of a."<<endl;
    r++;
    cout<<a<<endl;
    r=25;
    cout<<"when r=25: "<<a<<" "<<r<<endl;
    a=35;
    cout<<"when a =35: "<<a<<" "<<r<<endl;

    //We can't change the reference of a variable, because it does not consume merory
    int b=100;
    r=b;  //it will change the value stored in a, because reference don't have its own memory.
    cout<<"when r=b and b=100: "<<"a="<<a<<" b="<<b<<" r="<<r<<endl;


    return 0;
}
