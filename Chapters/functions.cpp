//FUNCTION: It is a group of related instructions which perform a specific task. (Grouping instruction)
//STRUCTURE: It is a group of related data members. (Grouping data)

#include<bits/stdc++.h>
using namespace std;

int add(int a, int b)   //Decleration of the fn, where a and b are formal parameters
{                       
    int c;
    c=a+b;
    return c;
}     //Defination of the function

int main(){

    int x,y,z;
    x=10;
    y=20;
    z=30;
    cout<<add(x,y)<<endl;    //Function calling, where x and y are actual parameters

    return 0;
}