class Solution {
public:

    bool SameOrNot(TreeNode* p, TreeNode* q){

        if(p == NULL && q == NULL)
            return true;

        if(p == NULL || q == NULL)
            return false;

        if(p->val != q->val)
            return false;

        return SameOrNot(p->left, q->left) &&
               SameOrNot(p->right, q->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {

        return SameOrNot(p, q);
    }
};