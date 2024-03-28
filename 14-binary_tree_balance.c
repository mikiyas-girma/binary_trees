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
	int leftheight = 1;
	int rightheight = 1;

	if (tree->left)
		leftheight += binary_tree_height(tree->left);
	if (tree->right)
		rightheight += binary_tree_height(tree->right);

	return (leftheight > rightheight ? leftheight : rightheight);
	}
	else
		return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

