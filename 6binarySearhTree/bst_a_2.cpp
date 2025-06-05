// Q1) Given a BST, count subtrees in it whose nodes lie within a given range.











// Given a BST and two keys in it. Find the distance between two nodes with given two keys. It may be assumed that both keys exist in BST.
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
void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->val<<"  ";
    inorder(root->right);
}
int helper(node* root, int low, int high){
    if(low<root->val && high<root->val) return helper(root->left,low,high);
    else if(low>root->val && high>root->val) return helper(root->right,low,high);
    else{
        node* temp=root;
        int leftcount=0;
        int rightcount=0;
        if(root->val==low){
            while(temp->val!=low){
                if(temp->val>low) temp=temp->left;
                else              temp=temp->right;
                leftcount++;
            } 
            return leftcount+1;
        }
        else if(root->val==high){
            temp=root;
            while(temp->val!=high){
                if(temp->val>high) temp=temp->left;
                else               temp=temp->right;
                rightcount++;
            }
        }
        else{

        }
    }
}
int main(){
    node* root=new node(5);
    root->left=new node(2);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right=new node(12);
    root->right->left=new node(9);
    root->right->right=new node(21);
    root->right->right->left=new node(19);
    root->right->right->right=new node(25);
    cout<<helper(root,3,9);
}