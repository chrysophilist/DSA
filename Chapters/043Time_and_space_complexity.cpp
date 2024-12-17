// Time Complexity: 

// O(n): it is the degree of the polynomial n.


// O(n):
// for(int i=0;i<n;i++){
//     //code...
// }


// O(n^2):
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         //code...
//     }
// }


// for an array having n number of element, if we do operation from 1 to n for every elements:
// 1+2+3+.....+n-2+n-1 = n(n-1)/2 => O(n^2)


// when something is succesively devided untill it reach 1, we use log
// if devided by 2 of evey half, we use log2 n: 
//          for(i=n;i>1;i=i/2){
//                  ///code
//          }
                // OR
// i=n
// while(i>1){
//     //code...
//     i=i/2;
// }


// for a matrix of the order nxn, we need O(n^2) of time
// for only row/cols: we need O(n)

