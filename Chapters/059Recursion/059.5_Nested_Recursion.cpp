// // Example1: Nested recursion in calculating the Ackermann function.
// #include <iostream>
// using namespace std;
// int ackermann(int m, int n) {
//     if (m == 0)
//         return n + 1;
//     if (n == 0)
//         return ackermann(m - 1, 1);
//     return ackermann(m - 1, ackermann(m, n - 1));
// }
// int main() {
//     cout << "Ackermann function result for (2, 3): " << ackermann(2, 3) << endl;
//     return 0;
// }


// // Example2: Nested recursive factorial calculation.
// #include <iostream>
// using namespace std;
// int nestedFactorial(int n) {
//     if (n == 0)
//         return 1;
//     return n * nestedFactorial(nestedFactorial(n - 1));
// }
// int main() {
//     cout << "Nested factorial of 3: " << nestedFactorial(3) << endl;
//     return 0;
// }


// // Example3: Evaluating a mathematical expression.
// #include <iostream>
// using namespace std;
// int nestedEval(int n) {
//     if (n > 100)
//         return n - 10;
//     return nestedEval(nestedEval(n + 11));
// }
// int main() {
//     cout << "Result of nested evaluation for 50: " << nestedEval(50) << endl;
//     return 0;
// }


// // Example4: Nested recursion to generate Pascal's triangle values.
// #include <iostream>
// using namespace std;
// int pascal(int row, int col) {
//     if (col == 0 || col == row)
//         return 1;
//     return pascal(row - 1, col - 1) + pascal(row - 1, col);
// }
// int main() {
//     int row = 5;
//     for (int i = 0; i <= row; i++) {
//         cout << pascal(row, i) << " ";
//     }
//     return 0;
// }


// Example5: Complex mathematical function evaluation.
#include <iostream>
using namespace std;
int complexFunc(int n) {
    if (n <= 1)
        return 1;
    return n * complexFunc(complexFunc(n - 1));
}
int main() {
    cout << "Result of complex function for 3: " << complexFunc(3) << endl;
    return 0;
}