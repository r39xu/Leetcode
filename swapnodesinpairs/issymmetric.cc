bool isSymmetric(TreeNode* root) {
	if (root == NULL){
		return true;
	}
	return dfs(root->left, root->right);
}

bool dfs(TreeNode *t1, TreeNode *t2) {
	if (!t1 && !t2) {
		return true;
	}
	if ((t1==NULL && t2!=NULL) || (t2==NULL && t1!=NULL)) {
		return false;
	}
	return t1->val==t2->val && dfs(t1->left, t2->right) && dfs(t1->right, t2->left);
}