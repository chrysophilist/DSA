// Types of Recursion:
//     1. Tail Recursion
//     2. Head Recursion
//     3. Tree Recursion
//     4. Indirect Recursion
//     5. Nested Recursion

// // 1. Tail Recursion:
// //             when the calling statement is the last statement of the function then it is called the Tail Recursion.

// // Ex:
// int fun(int n){
//     if(n>0){
//         return fun(n-1);
//     }
//     return 0;
// }

// // Can't be ex of tail resursion:
// int fun(int n){
//     if(n>0){
//         return fun(n-1)+n;  //because +n will be the return type calling
//     }
//     return 0;
// }



// // Tail Recursion v/s LOOP
// //            Tail Recursion can easily be converted into a loop.

// // Ex:
// //LOOP:
// void fun(int n)
// {
//     while(n>0)
//     {
//         cout<<n;
//         n--;
//     }
// }
// fun(3);    //Calling the function in the main function


// // //Ex:
// // //Tail Recursion:
// void fun(int n)
// {
//     if(n>0)
//     {
//         cout<<n;
//         fun(n-1);
//     }
// }
// fun(3);

// //The output will be same.
// //Time Taken will be same in both case(tail Recursion and Loop): O(n)
// //Tail Recursion will be use Stack, Space complexity: O(n)
// //Loop will be only one activation record will be created,space complexity: O(1)
// //Loop is more efficient in terms of space than Tail recursion. (in this case)
