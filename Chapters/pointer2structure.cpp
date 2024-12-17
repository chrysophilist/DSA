//POINTER TO A STRUCTURE

#include<bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    // Rectangle r={10, 5};
    // cout<<"Length: "<<r.length<<endl<<"Breadth: "<<r.breadth<<endl;

    // Rectangle *p=&r;      //Declared and initialized
    // r.length=15; //can be modified like this
    // //p.length=25;  cannot be moified like this
    // //*p.length=25;  cannot be modified like this either
    // (*p).length=25;  //right way because .>*


    //DYNAMIC
    Rectangle *p;
    p=new Rectangle;

    p->length=15;
    p->breadth=2;

    cout<<p->length<<endl;
    cout<<p->breadth<<endl; 



    return 0;
}