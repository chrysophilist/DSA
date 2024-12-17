// // we assume that every statement of the code in a program takes 1 unit of time for execution

// //CODE:
// #include<bits/stdc++.h>
// using namespace std;
// void fun(int n){
//     if(n>0){
//         cout<<" "<<n;
//         fun(n-1);
//     }
// }
// int main(){
//     int x=3;
//     fun(x);
//     cout<<endl;
// }


// t(n)=
// {1             n=0
//  T(n-1)+1      n>0
// }

// T(n)=T(n-1)+1        -(1)
//                     since T(n)=T(n-1)+1
//                     hence T(n-1)=T(n-2)+1
// T(n)=T(n-2)+1+1
// T(n)=T(n-2)+2        -(2)

// T(n)=T(n-3)+1+2
// T(n)=T(n-3)+3        -(3)
//         .
//         .
//         .
//         .
// T(n)=T(n-k)+k        -(4)



// Let us assume, n-k=0 => n=k
// then
// T(n)=T(n-n)+n
// T(n)=T(0)+n 
// T(n)=1+n 
//     => O(n)         //Time complexity of given code is Order of n
