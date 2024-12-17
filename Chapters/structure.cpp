#include<bits/stdc++.h> 
using namespace std;

//Structure memory allocation in 'Stack'
struct Rectangle{
    int length;
    int breadth;
};
struct Student{
    string name;
    int stad;
    int roll;
    char sec;
};

int main(){

    struct Rectangle r;  //Decleration
    r.length=10;         //Accessing the member1
    r.breadth=2;         //Accessing the member2
    cout<<"Area of rectangle r:  "<<r.breadth*r.length<<endl;

    struct Rectangle r2={30,2};     //Decleration with Initialisation
    cout<<"Area of rectangle r2:  "<<r2.breadth*r2.length<<endl;
    
    struct Student JNV[]={{"Prince", 10, 39,'A'},{"Suman", 10, 17,'B'}};
    cout<<JNV[0].name<<" "<<JNV[0].stad<<" "<<JNV[0].roll<<" "<<JNV[0].sec<<endl;
    return 0;
}