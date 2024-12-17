//ARRAYs can only passed by ADDRESS
//Array can't be pass by value
//We can moify the array(actual parameters) because it is call by address


#include<bits/stdc++.h>
using namespace std;
void fun(int A[], int n)  //here A[] is pointer to array and n is call by value. WE CAN WRITE *A also but it wil point any variable or array, if we use A[] then it will point only array
{
    int i;
    for(i=0; i<n; i++){
        cout<<A[i]<<endl;
    }
}
int main()
{
    int A[5]={2,4,6,8,10};
    fun(A,5);   //here A is call by address and n is call by value
    return 0;
}