//unordered set -> stores unique element. STL-> insert,erase,size,find,end
//ordered set->    stored unique element in ascending order. STL-> insert,erase,size,find,end
//unordered map-> stores unique key and value(pairs). STL-> insert,erase,size,find,end
//ordered map-> stores unique key and value(pairs) in ascending order. STL->insert,erase,size,find,end




// // Q1) Basic STL unordered map
// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     unordered_map<int,int>m;
//     pair<int,int>p;
//     p.first=1;
//     p.second=10;
//     m.insert(p);
//     m[3]=30;
//     m[2]=20;
//     m[4]=40;
//     m.erase(4);
//     if(m.find(2)!=m.end()) cout<<"found"<<endl;
//     else                   cout<<"not found"<<endl;
//     cout<<m.size()<<endl;
//     for(pair<int,int>ele: m) cout<<ele.first<<"  "<<ele.second<<endl;
// }




// // Q2) Basic STL ordered map
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int,int>m;
//     m[1]=10;
//     m[2]=20;
//     m[3]=30;
//     m[4]=40;
//     m.erase(4);
//     if(m.find(2)!=m.end()) cout<<"found"<<endl;
//     else                    cout<<"not found"<<endl;
//     cout<<m.size()<<endl;
//     for(pair<int,int>ele: m) cout<<ele.first<<"  "<<ele.second<<endl;
// }




// // Q3) Basic STL unordeed set
// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int main(){
//     unordered_set<int>s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.erase(4);
//     if(s.find(2)!=s.end()) cout<<"found"<<endl;
//     else                   cout<<"not found"<<endl;
//     cout<<s.size()<<endl;
//     for(int ele: s) cout<<ele<<endl;
// }




// // Q4) Basic STL ordered set
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int>s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.erase(4);
//     cout<<s.size()<<endl;
//     if(s.find(2)!=s.end()) cout<<"found"<<endl;
//     else                   cout<<"not found"<<endl;
//     for(int ele: s) cout<<ele<<endl;
// }




// // Q5) leetcode 2442( count number of distinct integer after reverse operation)
// #include<iostream>
// #include<unordered_set>
// #include<vector>
// using namespace std;
// int rev(int n){
//     int x=0;
//     while(n>0){
//         x=10*x+n%10;
//         n/=10;
//     }
//     return x;
// }
// int main(){
//     vector<int>v={1,10,12,13,31};
//     unordered_set<int>s;
//     for(int ele: v){
//         s.insert(ele);
//         s.insert(rev(ele));
//     }
//     cout<<s.size()<<endl;
// }




// // Q6) leetcode 2744( find maximum number of string pairs)
// #include<iostream>
// #include<string>
// #include<vector>
// #include<unordered_set>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<string>words = {"cd","ac","dc","ca","zz"};
//     unordered_set<string>s;
//     for(string ele: words){
//         sort(ele.begin(),ele.end());
//         s.insert(ele);
//     }
//     cout<<words.size()-s.size();
// }




// // Q7) Top view of binary tree
// #include<iostream>
// #include<map>
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
// void preorder(int idx, node* root, map<int,node*>&m){
//     if(root==NULL) return;
//     if(m.find(idx)==m.end()) m[idx]=root;
//     preorder(idx-1,root->left,m);
//     preorder(idx+1,root->right,m);
// }
// int main(){
//     node* root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->right=new node(6);
//     root->left->right->left=new node(7);
//     root->right->right->left=new node(8);
//     map<int,node*>m;
//     preorder(0,root,m);
//     for(pair<int,node*>ele: m) cout<<ele.second->val<<endl;
// }




// // Q8) Bottom view of binary tree
// #include<iostream>
// #include<queue>
// #include<map>
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
// int main(){
//     node* root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->right=new node(6);
//     root->left->right->left=new node(7);
//     root->right->right->left=new node(8);
//     queue<pair<int,node*>>q;
//     pair<int,node*>p;
//     map<int,node*>m;
//     p.first=0;
//     p.second=root;
//     q.push(p);
//     while(q.size()>0){
//         p=q.front();
//         int idx=p.first;
//         node* r=p.second;
//         q.pop();
//         m[idx]=r;
//         if(r->left!=NULL) p.first=idx-1,p.second=r->left,q.push(p);
//         if(r->right!=NULL) p.first=idx+1,p.second=r->right,q.push(p);
//     }
//     for(pair<int,node*>ele: m) cout<<ele.second->val<<"  ";
// }




// // Q9) leetcode 2385 ( amount of time for binary tree to be infected)
// #include<iostream>
// #include<queue>
// #include<unordered_map>
// #include<unordered_set>
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
// void preorder(node* root, int x, node* &head, unordered_map<node*,node*>&m){
//     if(root==NULL) return;
//     if(root->val==x) head=root;
//     if(root->left!=NULL){
//         m[root->left]=root;
//         preorder(root->left,x,head,m);
//     }
//     if(root->right!=NULL){
//         m[root->right]=root;
//         preorder(root->right,x,head,m);
//     }
// }
// int main(){
//   node* root=new node(1);
//   root->left=new node(5);
//   root->right=new node(3);
//   root->left->right=new node(4);
//   root->right->left=new node(10);
//   root->right->right=new node(6);
//   root->left->right->left=new node(9);
//   root->left->right->right=new node(2);
//   node* head;
//   int x=3;
//   unordered_map<node*,node*>m;
//   preorder(root,x,head,m);
//   int count=0;
//   queue<node*>q;
//   unordered_set<node*>s;
//   s.insert(head);
//   q.push(head);
//   while(q.size()>0){
//     int n=q.size();
//     while(n>0){
//         node* temp=q.front();
//         q.pop();
//         if(temp->left!=NULL && s.find(temp->left)==s.end()) q.push(temp->left),s.insert(temp->left);
//         if(temp->right!=NULL && s.find(temp->right)==s.end()) q.push(temp->right),s.insert(temp->right);
//         if(m.find(temp)!=m.end() && s.find(m[temp])==s.end())   q.push(m[temp]),s.insert(m[temp]);
//         n--;
//     }
//     count++;
//   }
//   cout<<count-1;
// }




// // Q10) leetcode 138 ( copy list with reandom pointer)
// Node* copyRandomList(Node* head) {
//     map<Node*,Node*>m;
//     Node* start=new Node(1);
//     Node* temp=head;
//     Node* s=start;
//     while(temp!=NULL){
//         s->next=new Node(temp->val);
//         m[temp]=s->next;
//         s=s->next;
//         temp=temp->next;
//     }
//     start=start->next;
//     temp=head;
//     s=start;
//     while(temp!=NULL){
//         if(temp->random!=NULL) s->random=m[temp->random];
//         s=s->next;
//         temp=temp->next;
//     }
//     return start;
// }




// // Q11) leetcode 242 (valid anagram)
// #include<iostream>
// #include<unordered_map>
// #include<string>
// using namespace std;
// int main(){
//     string s="anagram";
//     string t="agmarna";
//     unordered_map<char,int>m1;
//     unordered_map<char,int>m2;
//     for(int i=0;i<s.size();i++){
//         m1[s[i]]++;
//         m2[t[i]]++;
//     }
//     if(m1==m2) cout<<true;
//     else       cout<<false;
// }




// // Q12) leetcode49 ( group anagram )
// #include<iostream>
// #include<unordered_map>
// #include<string>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
//     unordered_map<string,vector<string>>m;
//     for(int i=0;i<strs.size();i++){
//         string temp=strs[i];
//         sort(temp.begin(),temp.end());
//         m[temp].push_back(strs[i]);
//     }
//     for(pair<string,vector<string>>ele:m){
//         for(string s: ele.second) cout<<s<<"  ";
//         cout<<endl;
//     }
// }




// // Q13) leetocde 1 (Two sum)
// #include<iostream>
// #include<unordered_map>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>nums={2,7,11,15};
//     int target=9;
//     unordered_map<int,int>m;
//     int i;
//     for(i=0;i<nums.size();i++){
//         m[nums[i]]=i;
//         if(m.find(target-nums[i])!=m.end()) break;
//     }
//     cout<<i<<"  "<<m[target-nums[i]];
// }




// // 14) leetcode 1207 ( unique number of occurence )
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<unordered_set>
// using namespace std;
// int main(){
//     vector<int>nums={1,2,2,1,1,3};
//     unordered_map<int,int>m;
//     unordered_set<int>s;
//     for(int ele: nums){
//         m[ele]++;
//     }
//     for(pair<int,int>ele:m){
//         s.insert(ele.second);
//     }
//     if(m.size()==s.size()) cout<<true;
//     else                   cout<<false;
// }




// // Q15) leetcode 2094 ( finding 3 digit even number )
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// int main(){
//     vector<int>nums={2,1,3,0};
//     vector<int>ans;
//     unordered_map<int,int>m;
//     unordered_map<int,int>m1;
//     for(int ele: nums) m[ele]++;
//     for(int i=100;i<=998;i+=2){
//         int temp=i;
//         bool flag=true;
//         m1=m;
//         while(temp>0){
//             m1[temp%10]--;
//             if(m1[temp%10]<0){
//                 flag=false;
//                 break;
//             }
//             temp=temp/10;
//         }
//         if(flag==true) ans.push_back(i);
//     }
//     for(int ele: ans) cout<<ele<<"  ";
// }




// // Q16) leetcode 1814 ( count nice pairs in an array )
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<algorithm>
// using namespace std;
// int rev(int n){
//     int x=0;
//     while(n>0){
//         x=10*x+n%10;
//         n/=10;
//     } 
//     return x;
// }
// int main(){
//     vector<int>nums={13,10,35,24,76};
//     unordered_map<int,int>m;
//     for(int ele: nums){
//         m[abs(ele-rev(ele))]++;
//     }
//     int count=0;
//     for(pair<int,int>ele: m){
//         if(ele.second>1) count+=(ele.second*(ele.second-1))/2;
//     }
//     cout<<count;
// }




// // Q17) leetcode 560 ( subarray sum equal k )
// int subarraySum(vector<int>& nums, int k) {
//         unordered_map<int,int>m;
//         for(int i=1;i<nums.size();i++) nums[i]+=nums[i-1];
//         int rem;
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//             rem=nums[i]-k;
//             if(rem==0) count++;
//             if(m.find(rem)!=m.end()) count+=m[rem];
//             m[nums[i]]++;
//         }
//         return count;
// }




// // Q18) leetcode 1657 ( determine if two strings are close )
//  bool closeStrings(string word1, string word2) {
//        if(word1.size()!=word2.size()) return false;
//        unordered_map<char,int>m1;
//        unordered_map<char,int>m2;
//        unordered_map<int,int>m3;
//        unordered_map<int,int>m4;
//        unordered_set<char>s1;
//        unordered_set<char>s2;
//        for(int i=0;i<word1.size();i++){
//             m1[word1[i]]++,s1.insert(word1[i]);
//             m2[word2[i]]++,s2.insert(word2[i]);
//         } 
//         for(pair<char,int> ele: m1) m3[ele.second]++;
//         for(pair<char,int> ele: m2) m4[ele.second]++;
//         if(m3==m4 && s1==s2) return true;
//         else       return false;
// }




// // Q19) leetcode 1497 ( check array divisible by k )
// bool canArrange(vector<int>& arr, int k) {
//     unordered_map<int,int>m;
//     for(int ele: arr) m[((ele%k)+k)%k]++;
//     int rem;
//     for(pair<int,int>ele:m){
//         if(ele.first==0){
//             if(ele.second%2!=0) return false; 
//         } 
//         else{
//             rem=k-ele.first;
//             if(m.find(rem)!=m.end()){
//                 if(m[rem]!=ele.second) return false;
//             }
//             else return false;
//         }        
//     }
//     return true;
// }




// // Q20) leetcode 1122 ( sort relative array )
// vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//     map<int,int>m;
//     for(int ele: arr1) m[ele]++;
//     int i=0;
//     for(int j=0;j<arr2.size();j++){
//         while(m[arr2[j]]!=0){
//             arr1[i++]=arr2[j];
//             m[arr2[j]]--;
//         }
//         m.erase(arr2[j]);
//     } 
//     for(pair<int,int>ele: m){
//         while(ele.second!=0){
//             arr1[i++]=ele.first;
//             ele.second--; 
//         }
//     }
//     return arr1;
// }




// // Q21) leetcode 1679 ( max no of k sum pair )
//  int maxOperations(vector<int>& nums, int k) {
//     unordered_map<int,int>m;
//     int rem;
//     int count=0;
//     for(int ele: nums){
//         rem=k-ele;
//         if(m.find(rem)!=m.end()){
//             m[rem]--;
//             count++;
//             if(m[rem]==0) m.erase(rem);
//         }
//         else    m[ele]++;
//     }
//     return count;
// }




// // Q22) leetcode 1865 ( find pair with certain sum )
// class FindSumPairs {
// public:
//     vector<int>nums1;
//     vector<int>nums2;
//     unordered_map<int,int>m1;
//     unordered_map<int,int>m2;
//     FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
//         this->nums1=nums1;
//         this->nums2=nums2;
//         for(int ele: nums1) m1[ele]++;
//         for(int ele: nums2) m2[ele]++; 
//     }    
//     void add(int index, int val) {
//         int num=nums2[index];
//         m2[num]--;
//         m2[num+val]++;
//         nums2[index]+=val;
//     }    
//     int count(int tot) {
//         int rem;
//         int count=0;
//         for(pair<int,int>ele:m1){
//             rem=tot-ele.first;
//             if(m2.find(rem)!=m2.end()) count+=ele.second*m2[rem];
//         }
//         return count;
//     }
// };