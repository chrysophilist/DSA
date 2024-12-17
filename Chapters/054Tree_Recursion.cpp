// Linear Recursion:
//         If a function calling itselt for only one time.
//         Tail and Head Recursion can be a Linear Recursion.


// Tree Recursion: 
//         If a fuction calling itself more than one time.

// EX:
#include<bits/stdc++.h>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}
int main()
{
    fun(3);
}
// o/p: 3 2 1 1 2 1 1
// Total calls: 15
// Stack size: 4
// Level: 4
// Size by level: 1, 2, 4, 8
            // => 2^0, 2^1, 2^2, 2^3
            // => 2^3+1-1
            // => O(2^n) //Time Complexity
            // Space complexity: Stack size of the activation record = 4 => O(n)

