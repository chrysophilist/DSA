// // Loop:
// #include<bits/stdc++.h> 
// using namespace std;
// int power(int b, int p)
// {
//     int result=1;
//     if(p==0)
//         return 1;
//     else
//     for(int i=0; i<=p; i++){
//         result*=b;
//     }
//     return result;
// }
// int main(){
//     cout<<"5^2 = "<<pow(5, 2)<<endl;
//     return 0;
// }


// // Recursion:
// #include<bits/stdc++.h> 
// using namespace std;
// int pow(int b, int p)
// {
//     if(p==0)
//         return 1;
//     else
//         return pow(b,p-1)*b;
// }
// int main(){
//     cout<<pow(3,4)<<endl;
//     return 0;
// }



// Recursion: faster version
#include<bits/stdc++.h> 
using namespace std;
int pow(int b, int p)
{
    if(p==0)
        return 1;
    if(p%2==0)
        return pow(b*b,p/2);
    else
        return b*pow(b*b,(p-1)/2);
}
int main(){
    cout<<pow(3,4)<<endl;
    return 0;
}
