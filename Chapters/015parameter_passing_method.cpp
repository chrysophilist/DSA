//FUNCTION(FORMAL PARAMETER) CAN'T ACCESS ACTUAL PARAMETER TO MODIFY DIRECTLY. we use reference for it(indirectly)


//1. PASS BY VALUE:  we use it when we dont want to modify the actual parameter (to modify only formal parameter)
//example: it can be use for 'int add' function but not for 'void swap'

// #include<bits/stdc++.h>
// using namespace std;
//
// void swap(int x, int y){
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
// }
//
// int main(){
//     int a,b;
//     a=10;
//     b=20;
//     swap(a,b);
//     cout<<"a: "<<a<<endl<<"b: "<<b<<endl;  
//     return 0;
// }



// //2. CALL BY ADDRESS: to modify actual parameters and the formal parameter must be pointers
// //Ex: can be used for 'void swap'
//
// #include<bits/stdc++.h>
// using namespace std;
// void swap(int *x, int *y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }
//
// int main(){
//     int a,b;
//     a=10;
//     b=20;
//     swap(&a, &b);
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }


// //3. CALL BY REFERENCE: just like 'call by value' but using the ampersand(&) with formal parameters. Actual parameters are modified but not formal(because formal parameter(reference) do not take memory
// //Ex:
//
// #include<bits/stdc++.h>
// using namespace std;
//
// void swap(int &x, int &y){
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
// }
// int main(){
//     int a,b;
//     a=10;
//     b=20;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }