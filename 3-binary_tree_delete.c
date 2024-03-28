#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *node;

	if (tree == NULL)
		return (0);
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->left);
	free(tree);
}
