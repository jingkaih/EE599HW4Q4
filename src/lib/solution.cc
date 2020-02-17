#include "solution.h"

BST::BST(std::vector<int> initial_values)
{
  for(auto x : initial_values)
  push(root_, x);
}

void BST::push(TreeNode* &node_ptr,int key)
{
  if(node_ptr == nullptr)
  node_ptr = new TreeNode(key);
  else if (key > node_ptr->val)
  return push(node_ptr->right, key);
  else if (key < node_ptr->val)
  return push(node_ptr->left, key);
}

std::vector<int> BST::BFS()
{
  std::queue<TreeNode* > node_queue;
  std::vector<int> result;
  node_queue.push(root_);
  TreeNode * node;
  while (!node_queue.empty())
  {
    node = node_queue.front();
    result.push_back(node->val);
    node_queue.pop();
    if(node->left!=nullptr)
    node_queue.push(node->left);
    if(node->right!=nullptr)
    node_queue.push(node->right);
  }
  return result;
}