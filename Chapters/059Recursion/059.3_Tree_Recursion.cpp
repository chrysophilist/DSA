// // Example1: Generating all subsets of a set.
// #include <iostream>
// #include <vector>
// using namespace std;
// void treeSubsets(vector<int>& subset, int index, vector<int>& nums) {
//     if (index == nums.size()) {
//         for (int num : subset)
//             cout << num << " ";
//         cout << endl;
//         return;
//     }
//     treeSubsets(subset, index + 1, nums);
//     subset.push_back(nums[index]);
//     treeSubsets(subset, index + 1, nums);
//     subset.pop_back();
// }
// int main() {
//     vector<int> nums = {1, 2, 3};
//     vector<int> subset;
//     treeSubsets(subset, 0, nums);
//     return 0;
// }


// // Example2: Binary Tree traversal(in-order)
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val) : data(val), left(nullptr), right(nullptr) {}
// };
// void inOrder(Node* root) {
//     if (root == nullptr)
//         return;
//     inOrder(root->left);
//     cout << root->data << " ";
//     inOrder(root->right);
// }
// int main() {
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     inOrder(root);
//     return 0;
// }


// // Example3: Counting nodes in a binary tree.
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val) : data(val), left(nullptr), right(nullptr) {}
// };
// int countNodes(Node* root) {
//     if (root == nullptr)
//         return 0;
//     return 1 + countNodes(root->left) + countNodes(root->right);
// }
// int main() {
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     cout << "Number of nodes: " << countNodes(root) << endl;
//     return 0;
// }


// // Example4: Sum of all nodes in a binary tree.
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val) : data(val), left(nullptr), right(nullptr) {}
// };
// int sumNodes(Node* root) {
//     if (root == nullptr)
//         return 0;
//     return root->data + sumNodes(root->left) + sumNodes(root->right);
// }
// int main() {
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     cout << "Sum of all nodes: " << sumNodes(root) << endl;
//     return 0;
// }


// Example5: Generating the nth Catalan number.
#include <iostream>
using namespace std;
int catalan(int n) {
    if (n <= 1)
        return 1;
    int result = 0;
    for (int i = 0; i < n; i++)
        result += catalan(i) * catalan(n - i - 1);
    return result;
}
int main() {
    cout << "Catalan number for 4: " << catalan(4) << endl;
    return 0;
}