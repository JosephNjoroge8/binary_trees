#include "binary_trees.h"

size_t height(const binary_tree_t *tree)
{
    size_t l, r;

    if (!tree)
        return 0;

    l = height(tree->left);
    r = height(tree->right);

    return (l > r ? l : r) + 1;
}

int binary_tree_balance(const binary_tree_t *tree)
{
    if (!tree)
        return 0;

    return height(tree->left) - height(tree->right);
}
