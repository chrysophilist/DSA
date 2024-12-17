// Nested Recursion:
//         Recursion inside the recursion function

// //EX:
// void fun(int n)
// {
//     if()
//     {
//         -----
//         fun(fun(n-1));
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n>100)
        return n-10;
    else
        return fun(fun(n+11));
}
int main()
{
    fun(95);
}