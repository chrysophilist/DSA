//sending structure using Call by value
//
// #include<bits/stdc++.h>
// using namespace std;
//
// struct Rectangle{
//     int length;
//     int breadth;
// };
// int area(struct Rectangle R){
//     return R.length*R.breadth;
// }
//
// int main(){
//     struct Rectangle r={10,2};
//     cout<<area(r)<<endl;
//     return 0;
// }


// //sending structure using CALL by Reference:
//
// #include<bits/stdc++.h>
// using namespace std;
//
// struct Rectangle{
//     int length;
//     int breadth;
// };
// int area(struct Rectangle &R){  //Now this can modify the actual parameter values
//     return R.length*R.breadth;
// }
//
// int main(){
//     struct Rectangle r={10,2};
//     cout<<area(r)<<endl;
//     return 0;
// }



// //sending structure using CALL BY ADDRESS
//
// #include<bits/stdc++.h>
// using namespace std;
// struct Rectangle{
//     int length;
//     int breadth;
// };
// void changelength(struct Rectangle *p, int l){
//     p->length=l;
// }
// int main(){
//     struct Rectangle r={10,2};
//     changelength(&r,15);
//     cout<<r.length<<endl;
//     return 0;
// }



// //if a data member of the structure is array, CAN be pass the structure having an array as its data member by call by value??? YES.
// //SINCE we know that we can't pass an array using call by value , array can only be send/pass by call by address only.
// //WE can pass structure by call by value even it is having array inside.
// #include<bits/stdc++.h>
// using namespace std;
// struct Test{
//     int A[5];
//     int n;
// };
// void fun(struct Test t1){
//     t1.A[0]=10;  //we can modify the actual array parameter's element
//     t1.A[1]=9;
// }
// int main(){
//     struct Test t={{2,4,6,8,10},5};
//     fun(t);
//     return 0;
// }