#include<bits/stdc++.h> 
using namespace std;



int main(){

    char ch;
    cout<<"Enter an alphabetical character: ";
    cin>>ch;
    if('a'=> ch <='z'){
        cout<<"You Entered a lowercase character. ">>ch>>endl;
    }
    else if ('A'=> ch <='Z'){
        cout<<"You Entered a uppercase character. ">>ch>>endl;
    }
    else{
        cout<<"Invalid input!"<<endl;
    }
    
    return 0;
}