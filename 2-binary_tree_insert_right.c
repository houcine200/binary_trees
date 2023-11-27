#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to put in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *created_node;

	if (parent == NULL)
		return (NULL);

	created_node = malloc(sizeof(binary_tree_t));

	if (created_node == NULL)
		return (NULL);

	created_node->n = value;
	created_node->parent = parent;
	created_node->left = NULL;

	if (parent->right == NULL)
		parent->right = created_node;

	else
	{
		created_node->right = parent->right;
		created_node->right->parent = created_node;
		parent->right = created_node;
	}
	return (created_node);
}
