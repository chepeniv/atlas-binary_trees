#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a new leaf node unto the left of the given node
 * @parent: parent node to pass on the new child node to
 * @value: value to initialize node with
 *
 * Return: pointer to the newly created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *hold;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL || parent == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = value;
	new->parent = parent;

	hold = parent->left;
	if (hold != NULL)
	{
		hold->parent = new;
		new->right = hold->right;
	}
	parent->left = new;
	new->left = hold;

	return (new);
}
