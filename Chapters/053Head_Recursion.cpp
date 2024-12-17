// Head Recursion:
//         The first statement of the function is recursive call.

// EX:
// #include<bits/stdc++.h>
// using namespace std;
// void fun(int n)
// {
//     if(n>0)
//     {
//         fun(n-1);
//         cout<<" "<<n;
//     }
// }
// int main(){
//     fun(3);
// }
// O/P: 1 2 3

// In loop: it can be but dificult than tail recursion
#include<bits/stdc++.h>
using namespace std;
void fun(int n)
{
    int i=1;
    while(i<=n)
    {
        cout<<" "<<i;
        i++;
    }
}
int main(){
    fun(3);
}
// O/P: 1 2 3

