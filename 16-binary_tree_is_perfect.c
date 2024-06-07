#include "binary_trees.h"

int is_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
    if (!tree)
        return 1;

    if (!tree->left && !tree->right)
        return depth == level + 1;

    if (!tree->left || !tree->right)
        return 0;

    return is_perfect(tree->left, depth, level + 1) && is_perfect(tree->right, depth, level + 1);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t depth = 0;
    const binary_tree_t *node = tree;

    if (!tree)
        return 0;

    while (node)
    {
        depth++;
        node = node->left;
    }

    return is_perfect(tree, depth, 0);
}
