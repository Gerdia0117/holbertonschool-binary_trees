#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: Recursively frees memory for all nodes in the tree.
 *              If tree is NULL, does nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
