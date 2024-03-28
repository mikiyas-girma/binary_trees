#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the tree, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int lsize = 0;
	int rsize = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		if (tree->left)
		{
			lsize = binary_tree_size(tree->left);
		}
		if (tree->right)
		{
			rsize = binary_tree_size(tree->right);
		}
	}
	return (lsize + rsize + 1);
}
