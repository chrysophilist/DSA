// //MONOLITHIC PROGRAM
// #include<bits/stdc++.h> 
// using namespace std;
// int main(){
//     int length,breadth;
//     cout<<"Enter the length and breadth: ";
//     cin>>length>>breadth;
//     int area=length*breadth;
//     int perimeter=2*(length+breadth);
//     cout<<"Area: "<<area<<" Perimeter: "<<perimeter<<endl;
//     return 0;
// }



// //MODULAR PROGRAM
// #include<bits/stdc++.h> 
// using namespace std;
//
// int area(int length, int breadth){
//     return length*breadth;
// }
// int perimeter(int length, int breadth){
//     return 2*(length+breadth);
// }
// int main(){
//     int length,breadth;
//     cout<<"Enter the length and breadth: ";
//     cin>>length>>breadth;
//
//     cout<<"Area: "<<area(length,breadth)<<" Perimeter: "<<perimeter(length,breadth)<<endl;
//     return 0;
// }



// //STRUCTURE AND FUNCTION
// #include<bits/stdc++.h> 
// using namespace std;
//
// struct Rectangle{
//     int length;
//     int breadth;
// };
// void initialize(Rectangle *r, int l, int b){    //*r because modifying the length and breadth from 0,0 to l,b
//     r->length=l;
//     r->breadth=b;
// }
// int area(struct Rectangle r){     //C code
//     return r.length*r.breadth;
// }
// int perimeter(Rectangle r){      //C++ code, no need to write struct
//     return 2*(r.length+r.breadth);
// }
// int main(){
//     Rectangle r={0,0};  //Initilization
//    
//     int l,b;
//     cout<<"Enter the length and breadth: ";
//     cin>>l>>b;
//
//     initialize(&r, l, b);       //Formal parameter: *r  and Actual parameter: &r
//
//     cout<<"Area: "<<area(r)<<" Perimeter: "<<perimeter(r)<<endl;
//     return 0;
// }
