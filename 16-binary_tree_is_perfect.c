#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node in the binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depht_count;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	depht_count = binary_tree_depth(tree->parent) + 1;
	return (depht_count);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    return binary_tree_is_full(tree) && binary_tree_depth(tree->left) == binary_tree_depth(tree->right);
}