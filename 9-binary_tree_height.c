#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
	int leftheight = 0;
	int rightheight = 0;

	if (tree->left)
		leftheight = 1 + binary_tree_height(tree->left);
	if (tree->right)
		rightheight = 1 + binary_tree_height(tree->right);

	return (leftheight > rightheight ? leftheight : rightheight);
	}
	else
		return (0);
}
