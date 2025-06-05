// //Q1) Basic stack (push , pop, size, top)
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     cout<<st.top()<<endl;
//     st.pop();
//     st.pop();
//     cout<<st.top()<<endl;
//     cout<<st.size()<<endl;
// }





// // Q2) display , dispalyrec, displayrev, displayrevrec, pushatbottom, pushatbottomrec, pushatidx, pushatidxrec, reverse, reverserec
// #include<iostream>
// #include<stack>
// using namespace std;
// void display(stack<int>&st){
//     stack<int>helper;
//     while(st.size()>0){
//         helper.push(st.top());
//         st.pop();
//     }
//     while(helper.size()>0){
//         cout<<helper.top()<<"  ";
//         st.push(helper.top());
//         helper.pop();
//     }
//     cout<<endl;
// }
// void displayrec(stack<int>&st){
//     if(st.size()==0) return;
//     int temp=st.top();
//     st.pop();
//     displayrec(st);
//     cout<<temp<<"  ";
//     st.push(temp);
// }
// void displayrev(stack<int>&st){
//     stack<int>helper;
//     while(st.size()>0){
//         cout<<st.top()<<"  ";
//         helper.push(st.top());
//         st.pop();
//     }
//     while(helper.size()>0){
//         st.push(helper.top());
//         helper.pop();
//     }
//     cout<<endl;
// }
// void displayrevrec(stack<int>&st){
//     if(st.size()==0) return;
//     int temp=st.top();
//     st.pop();
//     cout<<temp<<"  ";
//     displayrevrec(st);
//     st.push(temp);
// }
// void pushatbottom(stack<int>&st,int val){
//     stack<int>helper;
//     while(st.size()>0){
//         helper.push(st.top());
//         st.pop();
//     }
//     st.push(val);
//     while(helper.size()>0){
//         st.push(helper.top());
//         helper.pop();
//     }
// }
// void pushatbottomrec(stack<int>&st, int val){
//     if(st.size()==0){
//         st.push(val);
//         return;
//     }
//     int temp=st.top();
//     st.pop();
//     pushatbottomrec(st,val);
//     st.push(temp);
// }
// void pushatidx(stack<int>&st, int idx, int val){
//     stack<int>helper;
//     while(st.size()>idx){
//         helper.push(st.top());
//         st.pop();
//     }
//     helper.push(val);
//     while(helper.size()>0){
//         st.push(helper.top());
//         helper.pop();
//     }
// }
// void pushatidxrec(stack<int>&st, int idx, int val){
//     if(st.size()==idx){
//         st.push(val);
//         return;
//     }
//     int temp=st.top();
//     st.pop();
//     pushatidxrec(st,idx,val);
//     st.push(temp);
// }
// void reverse(stack<int>&st){
//     stack<int>a;
//     stack<int>b;
//     while(st.size()>0){
//         a.push(st.top());
//         st.pop();
//     }
//     while(a.size()>0){
//         b.push(a.top());
//         a.pop();
//     }
//     while(b.size()>0){
//         st.push(b.top());
//         b.pop();
//     }
// }
// void reverserec(stack<int>&st){
//     if(st.size()==1) return;
//     int temp=st.top();
//     st.pop();
//     reverserec(st);
//     pushatbottom(st,temp);
// }
// int main(){
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     display(st);
//     displayrec(st); cout<<endl;
//     displayrev(st);
//     displayrevrec(st); cout<<endl;
//     pushatbottom(st,5); display(st);
//     pushatbottomrec(st,2); display(st);
//     pushatidx(st,3,12); display(st);
//     pushatidxrec(st,4,15); display(st);
//     reverse(st); display(st);
//     reverserec(st); display(st);    
// }





// // Q3) implement stack using vector
// #include<iostream>
// #include<vector>
// using namespace std;
// class stack{
//     public:
//     vector<int>v;
//     int size;
//     stack(){
//         size=0;
//     }
//     void push(int val){
//         v.push_back(val);
//         size++;
//     }
//     void pop(){
//         v.pop_back();
//         size--;
//     }
//     void top(){
//         cout<<v[size-1]<<endl;
//     }
//     void siz(){
//         cout<<size<<endl;
//     }
//     void display(){
//         for(int ele: v) cout<<ele<<"  ";
//         cout<<endl;
//     }
// };
// int main(){
//     stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.display();
//     st.pop();
//     st.pop();
//     st.display();
//     st.top();
//     st.siz();
// }




// // Q4) implement stack using linkedlist
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int val;
//     node* next;
//     node(int val){
//         this->val=val;
//         next=NULL;
//     }
// };
// class stack{
//     public:
//     node* head;
//     node* tail;
//     int size;
//     stack(){
//         head=NULL;
//         tail=NULL;
//         size=0;
//     }
//     void push(int val){
//         node* temp= new node(val);
//         if(head==NULL){
//             head=temp, tail=temp;
//         }
//         else{
//             tail->next=temp;
//             tail=temp;
//         }
//         size++;
//     }
//     void pop(){
//         if(size==1){
//             head=NULL;
//             tail=NULL;
//         }
//         else{
//             node* temp=head;
//             while(temp->next!=tail) temp=temp->next;
//             tail=temp;
//             tail->next=NULL;
//         }
//         size--;
//     }
//     void top(){
//         node* temp=head;
//         while(temp->next!=NULL) temp=temp->next;
//         cout<<temp->val<<endl;
//     }
//     void siz(){
//         cout<<size<<endl;
//     }
//     void display(){
//         node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<"  ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// };
// int main(){
//     stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.display();
//     st.pop();
//     st.pop();
//     st.display();
//     st.top();
//     st.siz();
// }




// // Q5) next greatest, previous greatest, next smallest, previous smallest
// #include<iostream>
// #include<stack>
// #include<vector>
// using namespace std;
// void nextgreatest(vector<int>v){
//     vector<int>ans(v.size());
//     stack<int>st;
//     st.push(v[v.size()-1]);
//     ans[v.size()-1]=-1;
//     for(int i=v.size()-2;i>=0;i--){
//         while(st.size()>0){
//             if(v[i]<st.top()) break;
//             else st.pop();
//         }
//         if(st.size()==0) ans[i]=-1;
//         else             ans[i]=st.top();
//         st.push(v[i]);
//     }
//     for(int ele: ans) cout<<ele<<"  ";
//     cout<<endl;
// }
// void previousgreatest(vector<int>v){
//     vector<int>ans(v.size());
//     stack<int>st;
//     st.push(v[0]);
//     ans[0]=-1;
//     for(int i=1;i<v.size();i++){
//         while(st.size()>0){
//             if(v[i]<st.top()) break;
//             else st.pop();
//         }
//         if(st.size()==0) ans[i]=-1;
//         else             ans[i]=st.top();
//         st.push(v[i]);
//     }
//     for(int ele: ans) cout<<ele<<"  ";
//     cout<<endl;
// }
// void nextsmallest(vector<int>v){
//     vector<int>ans(v.size());
//     stack<int>st;
//     st.push(v[v.size()-1]);
//     ans[v.size()-1]=-1;
//     for(int i=v.size()-2;i>=0;i--){
//         while(st.size()>0){
//             if(v[i]>st.top()) break;
//             else             st.pop();
//         }
//         if(st.size()==0) ans[i]=-1;
//         else             ans[i]=st.top();
//         st.push(v[i]);
//     }
//     for(int ele: ans) cout<<ele<<"  ";
//     cout<<endl;
// }
// void previoussmallest(vector<int>v){
//     vector<int>ans(v.size());
//     stack<int>st;
//     st.push(v[0]);
//     ans[0]=-1;
//     for(int i=1;i<v.size();i++){
//         while(st.size()>0){
//             if(v[i]>st.top()) break;
//             else              st.pop();
//         }
//         if(st.size()==0) ans[i]=-1;
//         else             ans[i]=st.top();
//         st.push(v[i]);
//     }
//     for(int ele: ans) cout<<ele<<"  ";
//     cout<<endl;
// }
// int main(){
//     vector<int>v={3,1,2,5,4,6,2,3};
//     nextgreatest(v);
//     previousgreatest(v);
//     nextsmallest(v);
//     previoussmallest(v);
// }
