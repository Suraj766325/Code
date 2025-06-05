// // Q1) Basic STL max heap (push pop top size)
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     priority_queue<int>q;
//     q.push(3);
//     q.push(1);
//     q.push(2);
//     q.pop();
//     cout<<q.top()<<endl;
//     cout<<q.size()<<endl;
// }




// // Q2) Basic STL min heap (push pop top size)
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     priority_queue<int,vector<int>,greater<int>>pq;
//     pq.push(3);
//     pq.push(2);
//     pq.push(1);
//     pq.push(4);
//     pq.pop();
//     cout<<pq.top()<<endl;
//     cout<<pq.size()<<endl;
// }




// // Q3) find the kth smallest element in the array
// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;
// int main(){
//     priority_queue<int>pq;
//     vector<int>v={10,20,-4,6,18,24,105,118};
//     int k=3;
//     for(int ele: v){
//         pq.push(ele);
//         if(pq.size()>k) pq.pop();
//     }
//     cout<<pq.top();
// }




// // Q4) find the kth largest element in the array
// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v={10,20,-4,6,18,24,105,118};
//     priority_queue<int,vector<int>,greater<int>>pq;
//     int k=3;
//     for(int ele: v){
//         pq.push(ele);
//         if(pq.size()>k) pq.pop();
//     }
//     cout<<pq.top();
// }




// // Q5) sort k sorted array / sort the nearly sorted array
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// int main(){
//     vector<int>v={10,9,8,7,4,70,60,50};
//     vector<int>ans;
//     int k=4;
//     priority_queue<int,vector<int>,greater<int>>pq;
//     for(int ele:v){
//         pq.push(ele);
//         if(pq.size()==k) ans.push_back(pq.top()),pq.pop();
//     }
//     while(pq.size()>0) ans.push_back(pq.top()),pq.pop();
//     for(int ele: ans) cout<<ele<<"  ";
// }




// // Q6) leetcode 378 (kth smallest element in sorted matrix)
// int kthSmallest(vector<vector<int>>& matrix, int k) {
//     priority_queue<int>pq;
//     for(vector<int>a:matrix){
//         for(int ele: a){
//             pq.push(ele);
//             if(pq.size()>k) pq.pop();
//         }
//     }
//     return pq.top();
// }




// // Q7) leetcode 347 (top k frequent elements)
// typedef pair<int,int>p;
// vector<int> topKFrequent(vector<int>& nums, int k) {
//     unordered_map<int,int>m;
//     for(int ele: nums) m[ele]++;
//     priority_queue<p,vector<p>,greater<p>>pq;
//     for(pair<int,int>ele: m){
//         pq.push({ele.second,ele.first});
//         if(pq.size()>k) pq.pop();
//     }
//     vector<int>ans;
//     while(pq.size()>0) ans.push_back(pq.top().second),pq.pop();
//     return ans;
// }




// // Q8) leetcode 1636 (sort array by increasing frequency)
// typedef pair<int,int>p;
// vector<int> frequencySort(vector<int>& nums) {
//     vector<int>ans;
//     unordered_map<int,int>m;
//     for(int ele: nums) m[ele]++;
//     priority_queue<p,vector<p>,greater<p>>pq;
//     for(pair<int,int>ele:m){
//         pq.push({ele.second,ele.first*(-1)});
//     }
//     while(pq.size()>0){
//         int n=pq.top().first;
//         while(n>0){
//             ans.push_back(pq.top().second*(-1));
//             n--;
//         }
//         pq.pop();
//     }
//     return ans;
// }




// // Q9) leetcode 658 (find k closest element)
// vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//     vector<int>ans;
//     priority_queue<pair<int,int>>pq;
//     for(int ele: arr){
//         pq.push({abs(ele-x),ele});
//         if(pq.size()>k) pq.pop();
//     }
//     while(pq.size()>0){
//         ans.push_back(pq.top().second);
//         pq.pop();
//     }
//     sort(ans.begin(),ans.end());
//     return ans;
// }




// // Q10) leetcode 973 (k closest point to origin)
// int distance(int x, int y){
//     return x*x+y*y;
// }
// vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
//     vector<vector<int>>ans;
//     priority_queue<pair<int,vector<int>>>pq;
//     for(vector<int>ele:points){
//         pq.push({distance(ele[0],ele[1]),ele});
//         if(pq.size()>k) pq.pop();
//     }
//     while(pq.size()>0) ans.push_back(pq.top().second),pq.pop();
//     return ans;
// }




// // Q11) leetcode 1046 (last stone weight)
// int lastStoneWeight(vector<int>& stones) {
//     priority_queue<int>pq;
//     for(int ele: stones) pq.push(ele);
//     int a,b;
//     while(pq.size()>1){
//         a=pq.top(),pq.pop();
//         b=pq.top(),pq.pop();
//         if(abs(a-b)!=0) pq.push(abs(a-b));
//     }
//     if(pq.size()==0) return 0;
//     else             return pq.top();
// }




// // Q12) given an array arr[] of ropes length , connect all ropes into a single rope with minimum total cose. The cose to conncect two ropes is the some of their length
// int minCost(vector<int>& arr) {
//     int count=0;
//     priority_queue<int,vector<int>,greater<int>>pq;
//     for(int ele: arr) pq.push(ele);
//     int a, b;
//     while(pq.size()>1){
//         a=pq.top(),pq.pop();
//         b=pq.top(),pq.pop();
//         count+=a+b;
//         pq.push(a+b);
//     }
//     return count;
// }




// // Q13) Implementation of min heap using array
// #include<iostream>
// #include<vector>
// using namespace std;
// class minheap{
//     public:
//     vector<int>v;
//     int n;
//     minheap(){
//         n=-1;
//     }
//     void push(int x){
//         v.push_back(x),n++;
//         int i=n;
//         int p=(i-1)/2;
//         int temp;
//         while(i!=0){
//             if(v[i]<v[p]) temp=v[i],v[i]=v[p],v[p]=temp,i=p,p=(i-1)/2;
//             else break;
//         }
//     }
//     void pop(){
//         v[0]=v[n],v.pop_back(),n--;
//         int i=0,l=2*i+1,r=2*i+2,temp;
//         while(l<=n){
//             if(r<=n){
//                 if(v[i]<=min(v[l],v[r])) break;
//                 else if(v[l]<v[r]){
//                     temp=v[i],v[i]=v[l],v[l]=temp,i=l,l=2*i+1,r=2*i+2;
//                 }
//                 else{
//                     temp=v[i],v[i]=v[r],v[r]=temp,i=r,l=2*i+1,r=2*i+2;
//                 }
//             }
//             else{
//                 if(v[i]<v[l]) break;
//                 else          temp=v[i],v[i]=v[l],v[l]=temp,i=l,l=2*i+1,r=2*i+2; 
//             }
//         }
//     }
//     void top(){
//         cout<<v[0]<<endl;
//     }
//     void size(){
//         cout<<n+1<<endl;
//     }
//     void print(){
//         for(int ele:v) cout<<ele<<"  ";
//         cout<<endl;
//     }
// };
// int main(){
//     minheap pq;
//     pq.push(10);
//     pq.push(20);
//     pq.push(11);
//     pq.push(30);
//     pq.push(40);
//     pq.push(12);
//     pq.push(4);
//     pq.push(7);
//     pq.pop();
//     pq.pop();
//     pq.print();
//     pq.top();
//     pq.size();
// }




// // Q14)Implementation of max heap using array
// #include<iostream>
// #include<vector>
// using namespace std;
// class maxheap{
//     public:
//     vector<int>v;
//     int n;
//     maxheap(){
//         n=-1;
//     }
//     void push(int x){
//         v.push_back(x),n++;
//         int i=n,p=(n-1)/2,temp;
//         while(i!=0){
//             if(v[i]>v[p]) temp=v[i],v[i]=v[p],v[p]=temp,i=p,p=(i-1)/2;
//             else          break;
//         }
//     }
//     void pop(){
//         v[0]=v[n],v.pop_back(),n--;
//         int i=0,l=2*i+1,r=2*i+2,temp;
//         while(l<=n){
//             if(r<=n){
//                 if(v[i]>=max(v[l],v[r])) break;
//                 else if(v[l]>=v[r]) temp=v[i],v[i]=v[l],v[l]=temp,i=l,l=2*i+1,r=2*i+2;
//                 else                temp=v[i],v[i]=v[r],v[r]=temp,i=r,l=2*i+1,r=2*i+2; 
//             }
//             else{
//                 if(v[i]>v[l]) break;
//                 else           temp=v[i],v[i]=v[l],v[l]=temp,i=l,l=2*i+1,r=2*i+2; 
//             }
//         }
//     }
//     void top(){
//         cout<<v[0]<<endl;
//     }
//     void size(){
//         cout<<n+1<<endl;
//     }
//     void print(){
//         for(int ele:v) cout<<ele<<"  ";
//         cout<<endl;
//     }
// };
// int main(){
//     maxheap pq;
//     pq.push(40);
//     pq.push(30);
//     pq.push(20);
//     pq.push(10);
//     pq.push(8);
//     pq.push(15);
//     pq.push(45);
//     pq.push(35);
//     pq.pop();
//     pq.pop();
//     pq.print();
//     pq.top();
//     pq.size();
// }




// // Q15) Heapify algorithm-> convert the random array in min heap
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v={10,2,14,11,1,4};
//     int n=v.size(),temp,l,r,j;
//     for(int i=n/2-1;i>=0;i--){
//         j=i,l=2*i+1,r=2*i+2;
//         while(l<=n-1){
//             if(r<=n-1){
//                 if(v[j]<=min(v[l],v[r])) break;
//                 else if(v[l]<=v[r]) temp=v[j],v[j]=v[l],v[l]=temp,j=l,l=2*j+1,r=2*j+2;
//                 else                temp=v[j],v[j]=v[r],v[r]=temp,j=r,l=2*j+1,r=2*j+2;
//             }
//             else{
//                 if(v[j]<=v[l]) break;
//                 else           temp=v[j],v[j]=v[l],v[l]=temp,j=l,l=2*j+1,r=2*j+2;     
//             }
//         }
//     }
//     for(int ele: v) cout<<ele<<"  ";
// }




// // Q16) Heapify Algorithm -> convert the random array in max heap
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v={10,2,14,11,1,4};
//     int n=v.size();;
//     for(int i=n/2-1;i>=0;i--){
//         int j=i,l=2*i+1,r=2*i+2,temp;
//         while(l<=n-1){
//             if(r<=n-1){
//                 if(v[i]>=max(v[l],v[r])) break;
//                 else if(v[l]>=v[r]) temp=v[j],v[j]=v[l],v[l]=temp,j=l,l=2*j+1,r=2*j+2;
//                 else                temp=v[j],v[j]=v[r],v[r]=temp,j=1,l=2*j+1,r=2*j+2;
//             }
//             else{
//                 if(v[i]>=v[l]) break;
//                 else           temp=v[j],v[j]=v[l],v[l]=temp,j=l,l=2*j+1,r=2*j+2;
//             }            
//         }
//     }
//     for(int ele: v) cout<<ele<<"  ";
// }




// // Q17) convert BST in min heap 
// #include<iostream>
// #include<vector>
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
// void inorder(node* root, vector<int>&v){
//     if(root==NULL) return;
//     inorder(root->left,v);
//     v.push_back(root->val);
//     inorder(root->right,v);
// }
// int main(){
//     node* root=new node(10);
//     root->left=new node(5);
//     root->right=new node(16);
//     root->left->left=new node(1);
//     root->left->right=new node(8);
//     root->right->left=new node(12);
//     root->right->right=new node(20);
//     vector<int>v;
//     inorder(root,v);
//     queue<node*>q;
//     q.push(root);
//     int i=0;
//     while(q.size()>0){
//         node* temp=q.front();
//         q.pop();
//         temp->val=v[i++];
//         if(temp->left!=NULL) q.push(temp->left);
//         if(temp->right!=NULL) q.push(temp->right);
//     }
//     //print
//     q.push(root);
//     while(q.size()>0){
//         node* temp=q.front();
//         q.pop();
//         cout<<temp->val<<"  ";
//         if(temp->left!=NULL) q.push(temp->left);
//         if(temp->right!=NULL) q.push(temp->right);
//     }
// }




// // Q18) convert tree into max heap
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
// void preorder(node* root, vector<int>&v){
//     if(root==NULL) return;
//     v.push_back(root->val);
//     preorder(root->left,v);
//     preorder(root->right,v);
// }
// int main(){
//     node* root=new node(5);
//     root->left=new node(1);
//     root->right=new node(8);
//     root->left->left=new node(20);
//     root->left->right=new node(10);
//     root->right->left=new node(12);
//     root->right->right=new node(15);
//     vector<int>v;
//     preorder(root,v);
//     sort(v.begin(),v.end());
//     reverse(v.begin(),v.end());
//     queue<node*>q;
//     q.push(root);
//     int i=0;
//     while(q.size()>0){
//         node* temp=q.front();
//         q.pop();
//         temp->val=v[i++];
//         if(temp->left!=NULL) q.push(temp->left);
//         if(temp->right!=NULL) q.push(temp->right);
//     }
//     //print
//     q.push(root);
//     while(q.size()>0){
//         node* temp=q.front();
//         q.pop();
//         cout<<temp->val<<"  ";
//         if(temp->left!=NULL) q.push(temp->left);
//         if(temp->right!=NULL) q.push(temp->right);
//     }
// }




// // Q19) is min heap
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
// bool helper(node* root){
//     if(root==NULL) return true;
//     if(root->left!=NULL && root->val>root->left->val) return false;
//     if(root->right!=NULL && root->val>root->right->val) return false;
//     return helper(root->left) && helper(root->right);
// }
// bool cbt(node* root){
//     queue<node*>q;
//     q.push(root);
//     bool flag=true;
//     while(q.size()>0){
//         node* temp=q.front();
//         q.pop();
//         if(temp->left==NULL) flag=false;
//         else{
//             if(flag==false) return false;
//             else            q.push(temp->left);
//         }
//         if(temp->right==NULL) flag=false;
//         else{
//             if(flag==false) return false;
//             else            q.push(temp->right);
//         }
//     }
//     return true;
// }
// int main(){
//     node* root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     root->left->left->left=new node(8);
//     if(helper(root) && cbt(root)) cout<<true;
//     else                        cout<<false;
// }




// //Q20) leetcode 295 (find median from data stream)
// class MedianFinder {
// public:
//     priority_queue<int>a;
//     priority_queue<int,vector<int>,greater<int>>b;
//     int temp;
//     MedianFinder() {
        
//     }
    
//     void addNum(int num) {
//         if(a.size()==b.size()){
//             if(b.size()==0) a.push(num);
//             else{
//                 if(num<=b.top()) a.push(num);
//                 else             temp=b.top(),b.pop(),b.push(num),a.push(temp);
//             }
//         }
//         else{
//             if(num>=a.top()) b.push(num);
//             else             temp=a.top(),a.pop(),a.push(num),b.push(temp);
//         }
//     }    
//     double findMedian() {
//         if(a.size()>b.size()) return ((a.top())/1.0);
//         else                   return ((a.top()+b.top())/2.0);
//     }
// };




// // Q21) leetcode 632 (smallest array covering element from k list)
//     typedef pair<int,pair<int,int>>pip;
//     vector<int> smallestRange(vector<vector<int>>& nums) {
//         priority_queue<pip,vector<pip>,greater<pip>>pq;
//         int m=INT_MIN,start=0,end=INT_MAX;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i][0]>m) m=nums[i][0];
//             pq.push({nums[i][0],{i,0}});
//         }
//         while(true){
//             if(m-pq.top().first<end-start) start=pq.top().first,end=m;
//             pair<int,pair<int,int>>p;
//             p=pq.top(),pq.pop();
//             if(p.second.second==nums[p.second.first].size()-1) break;
//             else{
//                 p.second.second++;
//                 p.first=nums[p.second.first][p.second.second];
//                 if(p.first>m) m=p.first;
//                 pq.push(p);
//             }
//         }
//         return {start,end};
//     }