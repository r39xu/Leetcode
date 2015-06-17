bool isValidBST(TreeNode* root) {
	if (root == NULL) {
		return true;
	}
	return dfs(root->left, root->val, INT_MIN) && dfs(root->right, INT_MAX, root->val);
}

bool dfs(TreeNode *t, int upper, int lower) {
	if (t == NULL) {
		return true;
	}
	return (t->val <= upper) && (t->val >= lower) && dfs(t->left, t->val, lower) && dfs(t->right, upper, t->val);
}