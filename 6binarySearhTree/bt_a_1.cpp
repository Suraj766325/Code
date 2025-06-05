//Q1) find the minimum and maximum from the binary search tree
#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};
int minn(node* root){
    if(root->left==NULL) return root->val;
    return minn(root->left);
}
int maxx(node* root){
    if(root->right==NULL) return root->val;
    return maxx(root->right);
}
int main(){
    node* root=new node(10);
    root->left=new node(5);
    root->right=new node(15);
    root->left->left=new node(2);
    root->left->right=new node(8);
    root->right->left=new node(15);
    root->right->right=new node(20);
    cout<<minn(root)<<"  "<<maxx(root);
}






// Q2) Kth smallest element in BST(leetcode 230)
class Solution {
    public:
        void inorder(TreeNode* root, int &k,int &temp){
            if(root==NULL || k<0) return;
            inorder(root->left,k,temp); 
            if(--k==0){
                temp=root->val;
                return;
            }
            inorder(root->right,k,temp);
        }
        int kthSmallest(TreeNode* root, int k) {
            int temp;
            inorder(root,k,temp);   
            return temp;
        }
};







// Q3) Given the root of a binary search tree, return a balanced BST with the same node values. [Leetcode 1382]
class Solution {
    public:
        void inorder(TreeNode* root, vector<int>&ans){
            if(root==NULL) return;
            inorder(root->left,ans);        
            ans.push_back(root->val);
            inorder(root->right,ans);
        }
        TreeNode* balance(vector<int>&nums,int start, int end){
            if(start==end){
                TreeNode* root=new TreeNode(nums[start]);
                return root;
            }
            int mid=(start+end)/2;
            TreeNode* root=new TreeNode(nums[mid]);
            if((mid-start)!=0) root->left=balance(nums,start,mid-1);
            if((end-mid)!=0) root->right=balance(nums,mid+1,end);
            return root;
        }
        TreeNode* balanceBST(TreeNode* root) {
            vector<int>ans;
            //return vector 
            inorder(root,ans);
            //divide and conquer
            return balance(ans,0,ans.size()-1);
        }
};






// Q4) Given the root node of a binary search tree and two integers low and high, return the sum of values of all nodes with a value in the inclusive range [low, high]. [Leetcode 938]
class Solution {
    public:
        void helper(TreeNode* root, int low, int high,int& ans){
            if(root==NULL) return;
            helper(root->left,low,high,ans);
            if(root->val>=low && root->val<=high) ans+=root->val;
            helper(root->right,low,high,ans);
        }
        int rangeSumBST(TreeNode* root, int low, int high) {
            int ans=0;
            helper(root,low,high,ans);
            return ans;
        }
};