#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	height_left = binary_tree_height(tree->left) + 1;
	height_right = binary_tree_height(tree->right) + 1;

	if (height_left > height_right)
		return (height_left);
	return (height_right);
}
