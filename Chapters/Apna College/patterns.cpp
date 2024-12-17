// //Square pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//         cout<<"* ";
//         }
//     cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter the character: ";
//     cin>>ch;
//     for(char i='A';i<=ch;i++){
//         for(char j='A';j<=ch;j++){
//         cout<<j;
//         }
//     cout<<endl;
//     }
// }


// //Triangle Pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }


//Reverse Triangle
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=i+1;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
