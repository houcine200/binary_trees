#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);
    
    if(tree->left != NULL)
	    height_left = binary_tree_height(tree->left) + 1;
	if(tree->right != NULL)
	    height_right = binary_tree_height(tree->right) + 1;
	
	return (height_left - height_right);
}