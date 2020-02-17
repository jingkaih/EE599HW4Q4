#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(BFSShould, DoLevelOrderTraversal) {
  std::vector<int> input = {8,10,3,1,14,6,13,4,7}, actual;
  BST mytree(input);
  actual = mytree.BFS();
  std::vector<int> expected = {8,3,10,1,6,14,4,7,13};
  EXPECT_EQ(expected, actual);
}