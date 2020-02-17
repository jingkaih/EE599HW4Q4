#include <iostream>
#include "src/lib/solution.h"

int main()
{   
    std::vector<int> input = {8,10,3,1,14,6,13,4,7}, result;
    BST mytree(input);
    result = mytree.BFS();
    for(auto x : result)
    std::cout << x << ' ';

    return EXIT_SUCCESS;
}