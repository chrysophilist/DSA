// Indirect Recursion:
//         There may be more than one function, and they are calling one another in a circular fashion.
//         A calling B calling C calling A
// EX:
// void A()
// {
//     if()
//     {
//         -----
//         B();
//     }
// }
// void B()
// {
//     if()
//     {
//         ----
//         A();
//     }
// }


#include<bits/stdc++.h>
using namespace std;
void funB(int n);
void funA(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        funB(n-1);
    }
}
void funB(int n)
{
    if(n>1)
    {
        cout<<n<<" ";
        funA(n/2);
    }
}
int main()
{
    funA(20);
}
// o/p: 20 19 9 8 4 3 1