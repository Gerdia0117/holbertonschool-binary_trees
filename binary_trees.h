#ifndef BINARY_TREES_H
#define BINARY_TREES_H

typedef struct binary_tree_s {
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function prototypes */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree);
void _binary_tree_delete(binary_tree_t *tree);

#endif
