// // Example1: Printing numbers from n to 1.
// #include<bits/stdc++.h> 
// using namespace std;
// void countDown(int n)
// {
//     if(n==0)
//         return;
//     countDown(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     countDown(5);
//     return 0;
// }


// // Example2: Printing array elements.
// #include<bits/stdc++.h> 
// using namespace std;
// void printArray(int arr[], int n, int index=0)
// {
//     if(index==n)
//         return;
//     printArray(arr, n, index+1);
//     cout<<arr[index]<<" ";
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     printArray(arr, 5);
//     return 0;
// }


// // Example3: Calculating power of a number.
// #include<bits/stdc++.h> 
// using namespace std;
// int power(int base, int exp)
// {
//     if(exp==0)
//         return 1;
//     int result=power(base, exp-1);
//     return base*result;
// }
// int main(){
//     cout<<"2^3 = "<<power(2,3)<<endl;
//     return 0;
// }


// // Example4: Print elements of a linked list.
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;
//     Node* next;
//     Node(int val) : data(val), next(nullptr) {}
// };
// void headPrintList(Node* head) {
//     if (head == nullptr)
//         return;
//     headPrintList(head->next);
//     cout << head->data << " ";
// }
// int main() {
//     Node* head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     headPrintList(head);
//     return 0;
// }


// Example5: Reverse print a string.
#include <iostream>
#include <string>
using namespace std;
void headReversePrint(string str, int index) {
    if (index == str.length())
        return;
    headReversePrint(str, index + 1);
    cout << str[index];
}
int main() {
    headReversePrint("hello", 0);
    return 0;
}