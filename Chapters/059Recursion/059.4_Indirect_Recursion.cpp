// // Example1: Alternating increment and decrement.
// #include <iostream>
// using namespace std;
// int catalan(int n) {
//     if (n <= 1)
//         return 1;
//     int result = 0;
//     for (int i = 0; i < n; i++)
//         result += catalan(i) * catalan(n - i - 1);
//     return result;
// }
// int main() {
//     cout << "Catalan number for 4: " << catalan(4) << endl;
//     return 0;
// }


// // Example2: Check if a number is even or odd.
// #include <iostream>
// using namespace std;
// bool isEven(int n);
// bool isOdd(int n);
// bool isEven(int n) {
//     if (n == 0)
//         return true;
//     return isOdd(n - 1);
// }
// bool isOdd(int n) {
//     if (n == 0)
//         return false;
//     return isEven(n - 1);
// }
// int main() {
//     int num = 5;
//     if (isEven(num))
//         cout << num << " is even" << endl;
//     else
//         cout << num << " is odd" << endl;
//     return 0;
// }


// // Example3: Indirect summation.
// #include <iostream>
// using namespace std;
// int sumA(int n);
// int sumB(int n, int partialSum);
// int sumA(int n) {
//     if (n == 0)
//         return 0;
//     return sumB(n - 1, n);
// }
// int sumB(int n, int partialSum) {
//     if (n == 0)
//         return partialSum;
//     return sumB(n - 1, partialSum + n);
// }
// int main() {
//     cout << "Sum of first 5 natural numbers: " << sumA(5) << endl;
//     return 0;
// }


// // Example4: Alternating between positive and negative numbers.
// #include <iostream>
// using namespace std;
// void positive(int n);
// void negative(int n);
// void positive(int n) {
//     if (n <= 0)
//         return;
//     cout << n << " ";
//     negative(n - 1);
// }
// void negative(int n) {
//     if (n <= 0)
//         return;
//     cout << -n << " ";
//     positive(n - 1);
// }
// int main() {
//     positive(5);
//     return 0;
// }


// Example5: Checking if a numbers is a power of 2.
#include <iostream>
using namespace std;
bool isPowerOfTwo(int n);
bool isNotPowerOfTwo(int n);
bool isPowerOfTwo(int n) {
    if (n == 1)
        return true;
    if (n == 0 || n % 2 != 0)
        return false;
    return isNotPowerOfTwo(n / 2);
}
bool isNotPowerOfTwo(int n) {
    return isPowerOfTwo(n);
}
int main() {
    int num = 16;
    if (isPowerOfTwo(num))
        cout << num << " is a power of 2" << endl;
    else
        cout << num << " is not a power of 2" << endl;
    return 0;
}