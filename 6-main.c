#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/* Your print_num function */
void print_num(int n)
{
    printf("%d\n", n);
}

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    /* ... build tree ... */
    binary_tree_preorder(root, &print_num);
    return (0);
}
