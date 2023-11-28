#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    
    int height_left = binary_tree_height(tree->left) + 1;
    int height_right = binary_tree_height(tree->right) + 1;
    
    if (height_left > height_right)
        return height_left;
    return height_right;
}
