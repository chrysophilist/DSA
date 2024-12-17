
// // Using Formula
// #include<bits/stdc++.h> 
// using namespace std;
// int main(){
//     int n=10;
//     cout<<"Sum of 10 natural numbers: "<<(n*(n+1))/2<<endl;
//     return 0;
// }



// // using loop:
// #include<bits/stdc++.h> 
// using namespace std;
// int sum(int n)
// {
//     int result=0;   //-------------------1
//     for(int i=0; i<=n; i++)  //----------n+1
//     {
//         result+=i;   //------------------n
//     }
//     return result;   //------------------1
// }
// int main(){
//     cout<<sum(10)<<endl;
//     return 0;
// }
// Time Com: O(n)
// Space Com: 3



// Using Recursion:
#include<bits/stdc++.h> 
using namespace std;

int sum(int n)
{
    if(n==0)
        return 0;
    return sum(n-1)+n; //------------time: O(n), space: O(n)
}
int main(){
    cout<<sum(10)<<endl;
    return 0;
}

