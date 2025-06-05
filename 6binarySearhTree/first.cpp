// // find predecessor and successor of root
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int val;
//     node* left;
//     node* right;
//     node(int val){
//         this->val=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int predecessor(node* root){
//     if(root->right==NULL) return root->val;
//     return predecessor(root->right);
// }
// int successor(node* root){
//     if(root->left==NULL) return root->val;
//     return successor(root->left);
// }
// int main(){
//     node* root=new node(10);
//     root->left=new node(5);
//     root->left->left=new node(2);
//     root->left->left->right=new node(4);
//     root->left->left->right->left=new node(3);
//     root->left->right=new node(8);
//     root->right=new node(20);
//     root->right->left=new node(15);
//     root->right->left->left=new node(12);
//     root->right->left->left->right=new node(13);
//     root->right->right=new node(25);
//     cout<<predecessor(root->left)<<endl;
//     cout<<successor(root->right);
// }





// Q2) MORRIS TRAVERSAL (TC=>0(n),SC=>0(1)) itterative way no recursion , no iterative stack, iterative farzi right connection
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
int main(){
    node* root=new node(10);
    root->left=new node(5);
    root->left->left=new node(3);
    root->left->right=new node(8);
    root->left->right->left=new node(6);
    root->right=new node(15);
    root->right->right=new node(20);
    root->right->right->left=new node(18);
    // morris traversal 
    node* curr=root;
    while(curr!=NULL){
        if(curr->left!=NULL){
            node* pred=curr->left;
            while(pred->right!=NULL && pred->right!=curr) pred=pred->right;
            if(pred->right==NULL) pred->right=curr,curr=curr->left;
            if(pred->right==curr) pred->right=NULL, cout<<curr->val<<"  ",curr=curr->right;
        }
        else{
            cout<<curr->val<<"  ";
            curr=curr->right;
        }
    }
}