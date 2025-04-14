#ifndef BINARY_TREES_H
#define BINARY_TREES_H

typedef struct binary_tree_s {
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function prototype */
void binary_tree_delete(binary_tree_t *tree);

#endif /* BINARY_TREES_H */
