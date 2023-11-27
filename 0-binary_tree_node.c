#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node.
 *
 * @parent: A pointer to the parent of the node.
 * @value: The value to be put on the new node.
 *
 * Return: Return: pointer to the new node or NULL if it fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *created_node;

	created_node = malloc(sizeof(binary_tree_t));

	if (created_node == NULL)
		return (NULL);
	created_node->n = value;
	created_node->parent = parent;
	created_node->left = NULL;
	created_node->right = NULL;

	return (created_node);
}
