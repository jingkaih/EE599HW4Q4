#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <queue>
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BST {
  public:
    BST();


    BST(std::vector<int> initial_values);

    void push(TreeNode * &node_ptr,int key); 

    std::vector<int> BFS();

    TreeNode *root_ = nullptr;
};
#endif