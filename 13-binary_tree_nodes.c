#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child
 *
 * @tree: Pointer to the root node of the tree to count nodes
 *
 * Return: Number of nodes with at least one child in the binary tree,
 *         0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (0);
}
