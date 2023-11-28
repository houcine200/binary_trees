size_t binary_tree_depth(const binary_tree_t *tree)
{
    int depht_count;
    
    if (tree == NULL)
        return (0);
    
    if (tree->parent == NULL)
        return (0);
    
    depht_count = binary_tree_depth(tree->parent) + 1;
    return depht_count;
}
