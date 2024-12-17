#include<bits/stdc++.h>
using namespace std;
int main(){
    //An Array
    int arr[6]={2, 4, 6, 8, 10};
    

    //TRAVERSAL
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    //INSERTION: worst case is when we have to insert at index 0 and best case when we have to insert at end
    arr[5]=arr[4];
    arr[4]=arr[3];
    arr[3]=arr[2];
    arr[2]=3;
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    //DELETION: worst case is when we have to insert at index 0 and best case when we have to insert at end
    arr[2]=arr[3];
    arr[3]=arr[4];
    arr[4]=arr[5];
    arr[5]=0;
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    //SEARCHING: worst case is when we have to insert at end and best case when we have to insert 1.
    //finding 8, if key =8
    for(int i=0; i<6; i++){
        if(arr[i]==8){
            cout<<"key Found at index: "<<i<<endl;
        }
        else{
            // cout<<"Not found!"<<endl;
        }
    }

    return 0;
}
