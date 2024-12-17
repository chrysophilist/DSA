// //CLASS
// class Arithmetic{
//     private:
//         int x;
//         int y;
//     public:
//         Arithmetic(int a, int b);  //Constructor
//         int add();
//         int sub();
// };
// Arithmetic::Arithmetic(int a, int b){
//     this->x=a;
//     this->y=b;
// }
// int Arithmetic::add(){
//     int c;
//     c=x+y;
//     return c;
// }
// int Arithmetic::sub(){
//     int c;
//     c=x-y;
//     return c;
// }


//CONVERTING EXSISTING CLASS INTO GENERIC CLASS
#include<bits/stdc++.h>
using namespace std;
template<class T>
class Arithmetic{
    private:
        T x;
        T y;   //here T for any data type
    public:
        Arithmetic(T a, T b);  //Constructor
        T add();
        T sub();
};
template<class T>
Arithmetic<T>::Arithmetic(T a, T b){
    this->x=a;
    this->y=b;
}
template<class T>
T Arithmetic<T>::add(){
    T c;
    c=x+y;
    return c;
}
template<class T>
T Arithmetic<T>::sub(){
    T c;
    c=x-y;
    return c;
}
int main(){
    Arithmetic<int> ar(10,5);    //OBJECT
    cout<<"Add: "<<ar.add()<<endl;
    Arithmetic<float> ar1(1.5, 1.2);
    cout<<"Sub: "<<ar1.sub()<<endl;

    return 0;
}