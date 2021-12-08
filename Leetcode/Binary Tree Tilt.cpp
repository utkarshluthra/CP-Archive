int t = 0;
int po(TreeNode* node) {
    if (!node) return 0;
    int left = po(node->left);
    int right = po(node->right);
    t += abs(left - right);
    return node->val + left + right;
}
int findTilt(TreeNode* root) {
    po(root);
    return t;
}