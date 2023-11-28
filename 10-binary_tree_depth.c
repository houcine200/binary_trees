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
