#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

typedef struct binary_tree_s {
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function prototype */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

#endif /* BINARY_TREES_H */
