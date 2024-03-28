#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int leftheight = 0;
	int rightheight = 0;

	if (tree->left)
		leftheight = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		rightheight = 1 + binary_tree_balance(tree->right);

	return (leftheight - rightheight);

	return (0);
}

