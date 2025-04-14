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
int binary_tree_is_root(const binary_tree_t *node);

#endif /* BINARY_TREES_H */
