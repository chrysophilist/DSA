// 1. Tail Recursion: if the recursive call is the last thing executed by the function.
//          use case: It can be optimized by the compiler to iterative loops, which can help in saving stack space.
         
//          Example1: Calculating the factorial of a number.

            // #include<bits/stdc++.h>
            // using namespace std;
            // int tailfactorial(int n, int accumulator=1)
            // {
            //     if(n==0)
            //     {
            //         return accumulator;
            //     }
            //     else
            //     {
            //         return tailfactorial(n-1, n*accumulator);
            //     }
            // }
            // int main()
            // {
            //     cout<<"Factorial of 5 is: "<<tailfactorial(5)<<endl;
            //     return 0;
            // }

            
            
            // // Example2: Sum of first n natural numbers.

            // #include<bits/stdc++.h> 
            // using namespace std;
            // int tailSum(int n, int accumulator=0)
            // {
            //     if(n==0)
            //     {
            //         return accumulator;
            //     }
            //     else
            //     {
            //         return tailSum(n-1, accumulator+n);
            //     }
            // }            
            // int main()
            // {
            //     cout<<"Sum of first 10 natural numbers are: "<<tailSum(10)<<endl;
            //     return 0;
            // }


            // // Example3: GCD of two numbers.
            // #include<bits/stdc++.h> 
            // using namespace std;
            // int gcd(int a, int b)
            // {
            //     if(b==0){
            //         return a;
            //     }
            //     return gcd(b, a%b);
            // }            
            // int main(){              
            //     cout<<"GCD of 48 and 18: "<<gcd(48, 18)<<endl;
            //     return 0;
            // }


            // // Example4: Reverse a string.
            // #include<bits/stdc++.h> 
            // using namespace std;
            // string tailReverse(string str, int index=0)
            // {
            //     int n = str.length();
            //     if(index==n/2)
            //         return str;
            //     swap(str[index],str[n-index-1]);
            //     return tailReverse(str, index+1);
            // }
            // int main(){
            //     cout<<"Reversed string: "<<tailReverse("Hello")<<endl;
            //     return 0;
            // }


            // // Example5: COunting down from n.
            // #include<bits/stdc++.h> 
            // using namespace std;
            // void tailCountdown(int n)
            // {
            //     if(n<0)
            //         return;
            //     cout<<n<<" ";
            //     tailCountdown(n-1);
            // }
            // int main(){
            //     tailCountdown(5);
            //     return 0;
            // }


            // Example6: Sum of digits.
            #include<bits/stdc++.h> 
            using namespace std;
            int digiSum(int n, int sum=0)
            {
                if(n==0)
                    return sum;
                return digiSum(n/10, sum+(n%10));
            }
            int main(){
                cout<<"Sum of digits of 123: "<<digiSum(123)<<endl;
                return 0;
            }