// Recursion: the process in which a function calling itself.
// Caution: there must be a condition by which recursion terminate, otherwise it will execute infinitly

// //Ex:
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


//EX2:
#include<bits/stdc++.h>
using namespace std;
void fun2(int n){
    if(n>0){
        fun2(n-1);
        cout<<" "<<n;
    }
}
int main(){
    int x=3;
    fun2(x);
    cout<<endl;
}