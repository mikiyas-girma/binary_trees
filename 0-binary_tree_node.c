#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node.
 *@parent: is a pointer to the parent of the node
 *@value: is the value of the node
 * Return: returns the created binary tree node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}


