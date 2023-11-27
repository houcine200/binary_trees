#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to put in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *created_node;

	if (parent == NULL)
		return (NULL);

	created_node = malloc(sizeof(binary_tree_t));

	if (created_node == NULL)
		return (NULL);

	if (parent->left == NULL)
		parent->left = created_node;
	else
	{
		created_node->left = parent->left;
		created_node->left->parent = created_node;
		parent->left = created_node;
	}

	created_node->n = value;
	created_node->parent = parent;
	created_node->right = NULL;

	return (created_node);
}
