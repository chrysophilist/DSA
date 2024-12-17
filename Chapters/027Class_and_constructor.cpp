// #include<bits/stdc++.h>
// using namespace std;
//
// class Rectangle{
//     private:
//         int length;
//         int breadth;
//     public:
//         void initialize(int l, int b){
//             length=l;
//             breadth=b;
//         }
//         int area(){
//             return length*breadth;
//         }
//         int perimeter(){
//             return 2*(length*breadth);
//         }
// };
// int main(){
//     Rectangle r; //Object
//     int l,b;
//     cout<<"Enter length and breadth: ";
//     cin>>l>>b;
//
//     r.initialize(l,b);
//
//     cout<<"Area: "<<r.area()<<" Perimeter: "<<r.perimeter()<<endl;
//     return 0;
// }



// 
//CLASS & CONSTRUCTOR
#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(){        //DEFAULT Consturctor
            length=0;
            breadth=0;     
        }
        Rectangle(int l, int b);     //OVERLODED Constructor
        int area();     //Facilitators
        int perimeter();   //Facilitators
        int getlength(){     //ACCESSOR
            return length;   
        }
        void setlength(int l){     //MUTATOR
            length=l;
        }
        ~Rectangle();  //DESTRUCTOR
};

//now implimenting functions outside the class using SCOPE RESOLUTION
//return_type class_name scope_resolution fn_name(parameters){instructions}
Rectangle::Rectangle(int l, int b){
    length=l;
    breadth=b;
}
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length+breadth);
}
Rectangle::~Rectangle(){
    //blank because we dont want to destruct
}
int main(){
    Rectangle r(10,5);
    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter()<<endl;
    r.setlength(12);
    cout<<"New length: "<<r.getlength()<<endl;
    return 0;
}