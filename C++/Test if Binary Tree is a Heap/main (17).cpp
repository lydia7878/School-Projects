#include <iostream>
using namespace std;

//Write a member function of the BinaryTree class in Section 16.2 that tests whether a given binary tree is a heap.
class Node{
private:
 string data;
 Node* left;
 Node* right;
friend class BinaryTree; 
};

class BinaryTree{
public:
 BinaryTree(string root_data, BinaryTree left, BinaryTree right);
int isaheap(int s) const; //here is the isaheap member function
private:
 Node* root;
};
 
BinaryTree::BinaryTree(string root_data, BinaryTree left, BinaryTree right){
 root = new Node;
 root->data = root_data;
 root->left = left.root;
 root->right = right.root;
}

int BinaryTree::isaheap(int s) const{
  s = s+1;
  return s;
}

int main(){
cout << "In a heap, the left and right subtrees both store elements that are smaller than the root element.\nIn contrast, in a binary search tree, smaller elements are stored in the left subtree and larger elements are stored in the right subtree.\nTherefore, we must test if the right subtree is larger than the root to tell the difference." << endl;
cout << "\nEnter the value of the root node (int or double): " << endl;
double root;
cin >> root;
cout << "\nEnter the value of the right node (int or double): " << endl;
double right;
cin >> right;

BinaryTree Tree("i", Tree, Tree);
int s = 0;
Tree.isaheap(s);

if (right > root){
cout << "This tree is not a heap" << endl;
}
else{
cout << "This tree is in fact, a heap" << endl;
}

return 0;
}
