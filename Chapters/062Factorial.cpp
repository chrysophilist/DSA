// Recursion:
#include<bits/stdc++.h> 
using namespace std;
int fac(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return fac(n-1)*n;
}
int main(){
    cout<<"Factorial of 5: "<<fac(5)<<endl;
    return 0;
}


// // Loop:
// #include<bits/stdc++.h> 
// using namespace std;
// int fac(int n)
// {
//     int result=1;
//     for(int i=1; i<=n; i++){
//         result*=i;
//     }
//     return result;
// }
// int main(){
//     cout<<"Factorial of 5: "<<fac(5)<<endl;
//     return 0;
// }