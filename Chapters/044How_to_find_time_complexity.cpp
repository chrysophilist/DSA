// void swap(x,y){
//     int t;
//     t=x;-------------1
//     x=y;-------------1
//     y=t;-------------1
//                   =3 => 3n^0
//                   f(n)=3n^0
//                   O(n^0)=O(1)
// time complexity=  O(1)  //Ans
// } 


// int sum(int A[], int n){
//     int s,i;
//     s=o;--------------------------1
//     for(i=0; i<n; i++){-----------n+1   (i=0 =>1 times, i<n =>n+1 times, i++ =>n times)
//         s=s+A[i];-----------------n
//     }
//     return s;---------------------1
// }                              =f(n)=2n+3 
//                                =O(n)  [because 2n^1, order is 1 so n^1=n]


// void Add(int n){
//     int i,j;
//     for(i=0;i<n;i++){---------------------n+1 [1,n+1,n]
//         for(j=0; j<n; j++){---------------n(n+1) [1,n+1,n]
//             C[i][j]=A[i][j]+B[i][j];------n(n)
//         }                                =(n+1)+(n^2+1)+(n^2)
//     }                                    =f(n)=2n^2+n+2
// }                                        =O(n^2)