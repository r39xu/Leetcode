/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


 vector<vector<int>> levelOrder(TreeNode* root) {
	queue<TreeNode *> q;
	vector<vector<int>> levels;
	if (root == NULL) {
		return levels;
	}
	q.push(root);
	int numsInLevel = 1;
	while(!q.empty()) {
		vector<int> level;
		for (int i = 0; i < numsInLevel; i++) {
			TreeNode *aNode = q.front();
			q.pop();
			level.push_back(aNode->val);
			if (aNode->left) {
				q.push(aNode->left);
			}
			if (aNode->right) {
				q.push(aNode->right);
			}
		}
		levels.push_back(level);
		numsInLevel = q.size();
	}
	return levels;
 }