#include "binary_trees.h"
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t left_size;
	size_t right_size;

    if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	    return (1);
	
	left_size = binary_tree_leaves(tree->left);
	right_size = binary_tree_leaves(tree->right);

    return (left_size + right_size);
}