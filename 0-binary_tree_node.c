#include "binary_trees.h"

/**
 * binary_tree_node - creates a new leaf node for given parent
 * @parent: parent node to pass on new child node
 * @value: value to initialize node with
 *
 * Return: pointer to the newly created node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	/*
	 * if (parent->n >= value)
	 *		parent->left = new;
	 * else
	 *		parent->right = new;
	 */

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
