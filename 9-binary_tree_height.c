#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs in-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: Traverses tree in in-order (left-root-right),
 * calling func for each node's value. Does nothing if tree or func is NULL.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);
}
