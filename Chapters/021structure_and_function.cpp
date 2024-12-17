//STRUCTURE AND FUNCTIONS
//
// #include<bits/stdc++.h>
// using namespace std;
//
// struct Rectangle{
//     int length;
//     int breadth;
// };
// void initialize(struct Rectangle *r, int l, int b){
//     r->length=l;
//     r->breadth=b;
// }
// int area(struct Rectangle r){
//     return r.length*r.breadth;
// }
// void changelength(struct Rectangle *r, int l){
//     r->length=l;
// }
// int main(){
//     struct Rectangle r;
//     initialize(&r, 10, 5);
//     area(r);
//     changelength(&r, 20);
//
//     return 0;
// }



//CLASS AND CONSTRUCTOR: here converting structure and function into class and constructor
//here CLASS contain functions and data means function becomes member of class
// #include<bits/stdc++.h>
// using namespace std;
//
// class Rectangle{    //CLASS
//     private:
//         int length;
//         int breadth;
//     public:
//         Rectangle(int l, int b){  //CONSTRUCTURE
//             length=l;
//             breadth=b;
//         }
//         int area(){
//             return length*breadth;
//         }
//         void changelength(int l){
//             length=l;
//         }
// };
// int main(){
//     Rectangle r;     //OBJECT
//     r.area();
//     r.changelength(20);
//
//     return 0;
// }
