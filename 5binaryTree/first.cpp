// // Q1) display,sum,product,size,max,min,level,height
// #include<iostream>
// #include<climits>
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
// void display(node* root){
//     if(root==NULL) return;
//     cout<<root->val<<"  ";
//     display(root->left);
//     display(root->right);
// }
// int sum(node* root){
//     if(root==NULL) return 0;
//     return root->val+sum(root->left)+sum(root->right);
// }
// int product(node* root){
//     if(root==NULL) return 1;
//     return root->val*product(root->left)*product(root->right);
// }
// int size(node* root){
//     if(root==NULL) return 0;
//     return 1+size(root->left)+size(root->right);
// }
// int maxx(node* root){
//     if(root==NULL) return INT_MIN;
//     return max(root->val,max(maxx(root->left),maxx(root->right)));
// }
// int minn(node* root){
//     if(root==NULL) return INT_MAX;
//     return min(root->val,min(minn(root->left),minn(root->right)));
// }
// int level(node* root){
//     if(root==NULL) return 0;
//     return 1+max(level(root->left),level(root->right));
// }
// int height(node* root){
//     if(root==NULL) return 0;
//     return 1+max(height(root->left),height(root->right));
// }
// int main(){
//     node* a=new node(5);
//     node* b=new node(4);
//     node* c=new node(3);
//     node* d=new node(6);
//     node* e=new node(2);
//     node* f=new node(1);
//     a->left=b;
//     a->right=c;
//     b->left=d;
//     b->right=e;
//     c->right=f;
//     display(a); cout<<endl;
//     cout<<sum(a)<<endl;
//     cout<<product(a)<<endl;
//     cout<<size(a)<<endl;
//     cout<<maxx(a)<<endl;
//     cout<<minn(a)<<endl;
//     cout<<level(a)<<endl;
//     cout<<height(a)-1<<endl;
// }



// Q2) leetcode 543(method1->display+level, method2->both at same function)
// Q3) leetcode 100(mine ans, sir ans)
// Q4) leetcode 226
// Q5) leetcode 257
// Q6) leetcode 236
// Q7) leetcode 110
// Q8) leetcdde 101












// // Q9) preorder recursion
// // inorder recursion
// // postorder recursion
// // preorder itterative
// // inorder itterative
// // postorder itterative
// #include<iostream>
// #include<vector>
// #include<stack>
// #include<algorithm>
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
// void preorder1(node* root, vector<int>&ans){
//     if(root==NULL) return;
//     ans.push_back(root->val);
//     preorder1(root->left,ans);
//     preorder1(root->right,ans);
// }
// void inorder1(node* root, vector<int>&ans){
//     if(root==NULL) return;
//     inorder1(root->left,ans);
//     ans.push_back(root->val);
//     inorder1(root->right,ans);
// }
// void postorder1(node* root,vector<int>&ans){
//     if(root==NULL) return;
//     postorder1(root->left,ans);
//     postorder1(root->right,ans);
//     ans.push_back(root->val);
// }
// void preorder2(node* root,vector<int>&ans){
//     if(root==NULL) return;
//     stack<node*>st;
//     st.push(root);
//     while(st.size()>0){
//         node* temp=st.top();
//         st.pop();
//         ans.push_back(temp->val);
//         if(temp->right!=NULL) st.push(temp->right);
//         if(temp->left!=NULL) st.push(temp->left);
//     }
// }
// void inorder2(node* root, vector<int>&ans){
//     if(root==NULL) return;
//     stack<node*>st;
//     node* temp=root;
//     while(st.size()>0 || temp!=NULL){
//         if(temp!=NULL){
//             st.push(temp);
//             temp=temp->left;
//         }
//         else{
//             temp=st.top();
//             st.pop();
//             ans.push_back(temp->val);
//             temp=temp->right;
//         }
//     }
// }
// void postorder2(node* root,vector<int>&ans){
//     if(root==NULL) return;
//     stack<node*>st;
//     st.push(root);
//     while(st.size()>0){
//         node* temp=st.top();
//         st.pop();
//         ans.push_back(temp->val);
//         if(temp->left!=NULL) st.push(temp->left);
//         if(temp->right!=NULL) st.push(temp->right);
//     }
// }
// int main(){
//     node* root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     vector<int>ans1;       //preorder recursion
//     preorder1(root,ans1);
//     for(int ele: ans1) cout<<ele<<"  ";
//     cout<<endl;
//     vector<int>ans2;     //inorder recursion
//     inorder1(root,ans2);
//     for(int ele: ans2) cout<<ele<<"  ";
//     cout<<endl;
//     vector<int>ans3;    //postorder recursion
//     postorder1(root,ans3);
//     for(int ele: ans3) cout<<ele<<"  ";
//     cout<<endl;
//     vector<int>ans4;     //preorder itterative
//     preorder2(root,ans4);
//     for(int ele:ans4) cout<<ele<<"  ";
//     cout<<endl;
//     vector<int>ans5;     //inorder itterative
//     inorder2(root,ans5);
//     for(int ele:ans5) cout<<ele<<"  ";
//     cout<<endl;
//     vector<int>ans6;     //postorder itterative
//     postorder2(root,ans6);
//     reverse(ans6.begin(),ans6.end());
//     for(int ele: ans6) cout<<ele<<"  ";
//     cout<<endl;
// }












//Q10) leetcode 144
//Q11) leetcode 94
//Q12) leetcode 145




// //Q13) print element of nth level(using recursion, using queue)
// #include<iostream>
// #include<queue>
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
// void display1(node* root, int level, int curr){
//     if(root==NULL) return ;
//     if(level==curr){
//         cout<<root->val<<"  ";
//         return;
//     }
//     display1(root->left,level,curr+1);
//     display1(root->right,level,curr+1);
// }
// void display2(node* root, int level, int curr){
//     if(root==NULL) return ;
//     queue<node*>q;
//     q.push(root);
//     while(curr<=level){
//         int n=q.size();
//         while(n>0){
//             node* temp=q.front();
//             q.pop();
//             if(level==curr) cout<<temp->val<<"  ";
//             else{
//                 if(temp->left!=NULL) q.push(temp->left);
//                 if(temp->right!=NULL) q.push(temp->right);
//             }
//             n--;
//         }
//         curr++;
//     }
// }
// int main(){
//     node* root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     display1(root,3,1); cout<<endl;  //Recursion
//     display2(root,3,1);              // Iterative
// }













// // Q14) level order traversal using recursion(left to right)
// // level order traversal from bottom using recursion(left to right)
// // reverse level order using recursion(right to left)
// // reverse level order traversal from bottom using recursion(right to left)
// // level order traversal using queue(left to right)
// // level order traversal from bottom using queue(left to right)
// // reverse level order traversal using queue(right to left)
// // reverse level order travesal from bottom using queue(right to left)
// #include<iostream>
// #include<vector>
// #include<queue>
// #include<algorithm>
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
// void display1(node* root, vector<vector<int>>&ans1, int curr){
//     if(root==NULL) return ;
//     if(ans1.size()<curr) ans1.push_back({});
//     ans1[curr-1].push_back(root->val);
//     display1(root->left,ans1,curr+1);
//     display1(root->right,ans1,curr+1);
// }
// void display2(node* root, vector<vector<int>>&ans2, int curr){
//     if(root==NULL) return;
//     if(ans2.size()<curr) ans2.push_back({});
//     ans2[curr-1].push_back(root->val);
//     display2(root->left,ans2,curr+1);
//     display2(root->right,ans2,curr+1);
// }
// void display3(node* root,vector<vector<int>>&ans3,int curr){
//     if(root==NULL) return;
//     if(ans3.size()<curr) ans3.push_back({});
//     ans3[curr-1].push_back(root->val);
//     display3(root->right,ans3,curr+1);
//     display3(root->left,ans3,curr+1);
// }
// void display4(node* root, vector<vector<int>>&ans4, int curr){
//     if(root==NULL) return;
//     if(ans4.size()<curr) ans4.push_back({});
//     ans4[curr-1].push_back(root->val);
//     display4(root->right,ans4,curr+1);
//     display4(root->left,ans4,curr+1);
// }
// void display5(node* root, vector<vector<int>>&ans5){
//     if(root==NULL) return;
//     queue<node*>q;
//     q.push(root);
//     int curr=1;
//     while(q.size()>0){
//         int n=q.size();
//         ans5.push_back({});
//         while(n>0){
//             node* temp=q.front();
//             q.pop();
//             ans5[curr-1].push_back(temp->val);
//             if(temp->left!=NULL) q.push(temp->left);
//             if(temp->right!=NULL) q.push(temp->right);
//             n--;
//         }
//         curr++;
//     }
// }
// void display6(node* root, vector<vector<int>>&ans6){
//     if(root==NULL) return;
//     queue<node*>q;
//     q.push(root);
//     int curr=1;
//     while(q.size()>0){
//         ans6.push_back({});
//         int n=q.size();
//         while(n>0){
//             node* temp=q.front();
//             q.pop();
//             ans6[curr-1].push_back(temp->val);
//             if(temp->left!=NULL) q.push(temp->left);
//             if(temp->right!=NULL) q.push(temp->right);
//             n--;
//         }
//         curr++;
//     }
// }
// void display7(node* root, vector<vector<int>>&ans7){
//     if(root==NULL) return;
//     queue<node*>q;
//     q.push(root);
//     int curr=1;
//     while(q.size()>0){
//         int n=q.size();
//         ans7.push_back({});
//         while(n>0){
//             node* temp=q.front();
//             q.pop();
//             ans7[curr-1].push_back(temp->val);
//             if(temp->right!=NULL) q.push(temp->right);
//             if(temp->left!=NULL) q.push(temp->left);
//             n--;
//         }
//         curr++;
//     }
// }
// void display8(node* root,vector<vector<int>>&ans8){
//     if(root==NULL) return;
//     queue<node*>q;
//     q.push(root);
//     int curr=1;
//     while(q.size()>0){
//         ans8.push_back({});
//         int n=q.size();
//         while(n>0){
//             node* temp=q.front();
//             q.pop();
//             ans8[curr-1].push_back(temp->val);
//             if(temp->right!=NULL) q.push(temp->right);
//             if(temp->left!=NULL) q.push(temp->left);
//             n--;
//         }
//         curr++;
//     }
// }
// int main(){
//     node* root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     vector<vector<int>>ans1; // level order traversal (left to right)
//     display1(root,ans1,1); 
//     for(vector<int> ele:ans1){
//         for(int ele: ele) cout<<ele<<"  ";
//         cout<<endl;
//     }
//     cout<<endl<<endl;
//     vector<vector<int>>ans2; // level order traversal from bottom( left to right)
//     display2(root,ans2,1);
//     reverse(ans2.begin(),ans2.end());
//     for(vector<int>ele: ans2){
//         for(int ele: ele) cout<<ele<<"  ";
//         cout<<endl;
//     }
//     cout<<endl<<endl;
//     vector<vector<int>>ans3; // reverse level order traversal (right to left)
//     display3(root,ans3,1);
//     for(vector<int>ele:ans3){
//         for(int ele:ele) cout<<ele<<"  ";
//         cout<<endl;
//     }
//     cout<<endl<<endl;
//     vector<vector<int>>ans4; // reverse level order traversal from bottom(right to left)
//     display4(root,ans4,1);
//     reverse(ans4.begin(),ans4.end());
//     for(vector<int>ele: ans4){
//         for(int ele:ele) cout<<ele<<"  ";
//         cout<<endl;
//     }
//     cout<<endl<<endl;
//     vector<vector<int>>ans5; //level order traversal using queue(left->right)
//     display5(root,ans5);
//     for(vector<int>ele:ans5){
//         for(int ele: ele) cout<<ele<<"  ";
//         cout<<endl;
//     }
//     cout<<endl<<endl;
//     vector<vector<int>>ans6; //level order traversal using from bottom using queue
//     display6(root,ans6);
//     reverse(ans6.begin(),ans6.end());
//     for(vector<int>ele: ans6){
//         for(int ele:ele) cout<<ele<<"  ";
//         cout<<endl;
//     }
//     cout<<endl<<endl;
//     vector<vector<int>>ans7; //reverse level order traversal using queue
//     display7(root,ans7);
//     for(vector<int>ele:ans7){
//         for(int ele: ele) cout<<ele<<"  ";
//         cout<<endl;
//     }
//     cout<<endl<<endl;
//     vector<vector<int>>ans8; // reverse level order traversal from bottom using queue
//     display8(root,ans8);
//     reverse(ans8.begin(),ans8.end());
//     for(vector<int>ele:ans8){
//         for(int ele: ele) cout<<ele<<"  ";
//         cout<<endl;
//     }
//     cout<<endl<<endl;
// }











// Q15) leetcode 102 (mehtod1 finding level , method-2 dynamic)  BOTH METHOD VERY IMPORTANR
// Q16) leetcode 107 (mehtod1 finding level , method-2 dynamic)  BOTH METHOD VERY IMPORTANT
// Q17) leetcode 104
// Q18) leetcode 111




// // Q19) construct the tree form level order traversal array
// #include<iostream>
// #include<vector>
// #include<queue>
// #include<climits>
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
// void helper(node* root){
//     queue<node*>q;
//     q.push(root);
//     while(q.size()>0){
//         int n=q.size();
//         while(n>0){
//             node* temp=q.front();
//             q.pop();
//             cout<<temp->val<<"  ";
//             if(temp->left!=NULL) q.push(temp->left);
//             if(temp->right!=NULL) q.push(temp->right);
//             n--;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     vector<int>v={1,2,3,4,INT_MIN,INT_MIN,5,6,INT_MIN,7};
//     //construct tree
//     queue<node*>q;
//     node* root=new node(v[0]);
//     q.push(root);
//     for(int i=1;i<v.size();i++){
//         node* temp=q.front();
//         q.pop();
//         if(v[i]!=INT_MIN) temp->left=new node(v[i]),q.push(temp->left);
//         if(++i==v.size()) break;
//         if(v[i]!=INT_MIN) temp->right=new node(v[i]),q.push(temp->right);
//     }
//     //print
//     helper(root);
// }





// Q20) leetcode 103 ZIG-ZAG TRAVERSAL (method1->reverse vector, method2->queue)




// // Q21) Boundary order traversal
// #include<iostream>
// #include<queue>
// #include<climits>
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
// void display(node* root){
//     queue<node*>q;
//     q.push(root);
//     while(q.size()>0){
//         int n=q.size();
//         while(n>0){
//             node* temp=q.front();
//             q.pop();
//             cout<<temp->val<<"  ";
//             if(temp->left!=NULL) q.push(temp->left);
//             if(temp->right!=NULL) q.push(temp->right);
//             n--;
//         }
//         cout<<endl;
//     }
// }
// void traversalleft(node* root, vector<int>&ans){
//     if(root==NULL) return;
//     if(root->left==NULL && root->right==NULL) return;
//     else if(root->left==NULL) ans.push_back(root->val),traversalleft(root->right,ans);
//     else                     ans.push_back(root->val),traversalleft(root->left,ans);
// }
// void leafnode(node* root, vector<int>&ans){
//     if(root==NULL) return;
//     if(root->left==NULL && root->right==NULL){
//         ans.push_back(root->val); 
//         return;
//     }
//     leafnode(root->left,ans);
//     leafnode(root->right,ans); 
// }
// void traversalright(node* root, vector<int>&ans){
//     if(root==NULL) return;
//     if(root->left==NULL && root->right==NULL) return;
//     else if(root->right==NULL) traversalright(root->left,ans),ans.push_back(root->val);
//     else                       traversalright(root->right,ans),ans.push_back(root->val);
// }
// int main(){
//     vector<int>v={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
//     //construct tree
//     queue<node*>q;
//     node* root=new node(v[0]);
//     q.push(root);
//     for(int i=1;i<v.size();i++){
//         node* temp=q.front();
//         q.pop();
//         if(v[i]!=INT_MIN) temp->left=new node(v[i]),q.push(temp->left);
//         i++;
//         if(i==v.size()) break;
//         if(v[i]!=INT_MIN) temp->right=new node(v[i]),q.push(temp->right);
//     }
//     //boundary traversal(traversal left, traversal leaf,traversal right)
//     vector<int>ans;
//     //traversal left
//     traversalleft(root,ans);
//     //leafnode
//     leafnode(root,ans);
//     //traversal right
//     traversalright(root,ans);
//     //delete repeated
//     ans.pop_back();
//     //print
//     for(int ele: ans) cout<<ele<<"  ";
// }






// Q22) Binary tree right side view (leetcode -199)
// Q23) Binary tree left side view 
// Q24) Binary tree bottom left side value (leetcode -513)
// Q25) path sum (leetcode -112)
// Q26) sum path II (leetcode -113)
// Q27) sum path III (leetcode -437)
// Q28) leetcode -129
// Q29) construct tree from preorder and inorder (leetcode -105) 
// Q30) construct tree from postorder and inorder (leetcode -106)
// Q31) construct tree from preorder and postorder (leetcode -889)