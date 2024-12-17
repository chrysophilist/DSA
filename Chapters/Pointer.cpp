//Pointer: It is an address variable that is meant for storing address of data not data itself. Used for Indirecting accessing of the data, to accessing the heap beacause program don't have access.
//it is allocated in stack.
//to access the resources which is outside the program
#include <bits/stdc++.h>
using namespace std;

int main(){
    // int a=10; //data variable
    // int *p;   //Decleration
    // p=&a;     //Initialisation
    // cout<<"Value of a: "<<a<<endl;
    // cout<<"Address of a: "<<p<<" or "<<&a<<endl;  //Dereferencing
    // cout<<"Print the vale at the add P: "<<*p<<endl;  //Dereferencing
    

    // //Pointing to array
    // int A[5]={2,4,6,8,10};
    // int *p, *p2;
    // p=A; //we dont write p=&A for arrays but we write & for individual element pointing.
    // p2=&A[0];
    // cout<<"Array: "<<endl;
    // for(int i=0; i<5; i++){
    //     cout<<A[i]<<endl;
    // }
    // cout<<"Address of array A: "<<p<<endl;
    // cout<<"Address of first element of the array A: "<<p2<<endl;


    // //LOCATING THE MEMORY IN HEAP
    // int *p;
    // p=new int[5];
    // p[0]=10; p[1]=15; p[2]=14; p[3]=21; p[4]=31;
    //
    // for(int i=0; i<5; i++){
    //     cout<<p[i]<<endl;
    // }
    // delete [ ] p;    //we should delete the dunamic merory when its not use



    // //ever the type of pointer is, The size of the pointer is independent of its data type.
    // int *p1;
    // char *p2;
    // float *p3;
    // double *p4;
    // cout<<sizeof(p1)<<endl;
    // cout<<sizeof(p2)<<endl;
    // cout<<sizeof(p3)<<endl;
    // cout<<sizeof(p4)<<endl;
    // //Output will be same for all size, because the size of the pointers is independent of its data type

    return 0;
}