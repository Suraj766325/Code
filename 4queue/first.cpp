// // Q1) Basic queue
// #include<iostream>
// #include<queue>
// using namespace std;
// void display(queue<int>&q){
//     for(int i=0;i<q.size();i++){
//         cout<<q.front()<<"  ";
//         q.push(q.front());
//         q.pop();
//     }
//     cout<<endl;
// }
// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     display(q);
//     q.pop();
//     q.pop();
//     display(q);
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     cout<<q.size()<<endl;
// }





// // Q2) reverse, reverserec
// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;
// void display(queue<int>&q){
//     for(int i=0;i<q.size();i++){
//         cout<<q.front()<<"  ";
//         q.push(q.front());
//         q.pop();
//     }
//     cout<<endl;
// }
// void reverse(queue<int>&q){
//     stack<int>st;
//     while(q.size()>0){
//         st.push(q.front());
//         q.pop();
//     }
//     while(st.size()>0){
//         q.push(st.top());
//         st.pop();
//     }
// }
// void reverserec(queue<int>&q){
//     if(q.size()==0) return;
//     int temp=q.front();
//     q.pop();
//     reverserec(q);
//     q.push(temp);
// }
// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     display(q);
//     reverse(q); display(q);
//     reverserec(q); display(q);
// }




// // Q3) remove all element from even position/odd position (considring 0 based indexing)
// #include<iostream>
// #include<queue>
// using namespace std;
// void display(queue<int>q){
//     for(int i=0;i<q.size();i++){
//         cout<<q.front()<<"  ";
//         q.push(q.front());
//         q.pop();
//     }
//     cout<<endl;
// }
// void removeateven(queue<int>q){
//     int n=q.size();
//     for(int i=0;i<n;i++){
//         if(i%2==0) q.pop();
//         else{
//             q.push(q.front());
//             q.pop();
//         }
//     }
//     display(q);
// }
// void removeatodd(queue<int>q){
//     int n=q.size();
//     for(int i=0;i<n;i++){
//     if(i%2==0){
//         q.push(q.front());
//         q.pop();
//     }
//     else   q.pop();
//     }
//     display(q);
// }
// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     int n=q.size();
//    removeateven(q);
//    removeatodd(q);
// }





// // Q4) implement queue using vector
// #include<iostream>
// #include<vector>
// using namespace std;
// class queue{
//     public:
//     int front ;
//     int back;
//     int size;
//     vector<int>v;
//     queue(){
//         front=-1;
//         back=-1;
//         size=0;
//     }
//     void push(int val){
//         v.push_back(val);
//         if(front==-1) front++,back++;
//         else          back++;
//         size++;
//     }
//     void pop(){
//         front++;
//         size--;
//     }
//     void frontt(){
//         cout<<v[front]<<endl;
//     }
//     void backk(){
//         cout<<v[back]<<endl;
//     }
//     void sizee(){
//         cout<<size<<endl;
//     }
//     void display(){
//         for(int i=front;i<=back;i++)    cout<<v[i]<<"  ";
//         cout<<endl;
//     }
// };
// int main(){
//     queue q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.display();
//     q.pop();
//     q.pop();
//     q.display();
//     q.frontt();
//     q.backk();
//     q.sizee();
// }





// // Q5) implement queue using linked list
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
// class queue{
//     public:
//     node* front;
//     node* back;
//     int size;
//     queue(){
//         front=NULL;
//         back=NULL;
//         size=0;
//     }
//     void push(int val){
//         node* temp=new node(val);
//         if(size==0) front=temp, back=temp;
//         else{
//             back->next=temp;
//             back=temp;
//         }
//         size++;
//     }
//     void pop(){
//         node* temp=front;
//         if(size==1) front=NULL, back=NULL;
//         else        front =front->next;
//         delete(temp);     // essential if you dont want to waste space of acquiring unwanted values
//         size--;
//     }
//     void frontt(){
//         cout<<front->val<<endl;
//     }
//     void backk(){
//         cout<<back->val<<endl;
//     }
//     void sizee(){
//         cout<<size<<endl;
//     }
//     void display(){
//         node* temp=front;
//         while(temp!=NULL){
//             cout<<temp->val<<"  ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// };
// int main(){
//     queue q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.display();
//     q.pop();
//     q.pop();
//     q.display();
//     q.frontt();
//     q.backk();
//     q.sizee();
// }






// // Q6) implement deque( pushfront, pushback, popfront, popback, getfront, getback, size) 0(1)->use doubly Linked List
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int val;
//     node* prev;
//     node* next;
//     node(int val){
//         this->val=val;
//         prev=NULL;
//         next=NULL;
//     }
// };
// class deque{
//     public:
//     node* front;
//     node* back;
//     int size;
//     deque(){
//         front=NULL;
//         back=NULL;
//         size=0;
//     }
//     void pushback(int val){
//         node* temp=new node(val);
//         if(size==0) front=temp,back=temp;
//         else{
//             back->next=temp;
//             temp->prev=back;
//             back=temp;
//         }
//         size++;
//     }
//     void pushfront(int val){
//         node* temp=new node(val);
//         if(size==0) front=temp,back=temp;
//         else{
//             temp->next=front;
//             front->prev=temp;
//             front=temp;
//         }
//         size++;
//     }
//     void popfront(){
//         if(size==1) front=NULL,back=NULL;
//         else{
//             front=front->next;
//             front->prev=NULL;
//         }
//         size--;
//     }
//     void popback(){
//         if(size==1) front=NULL,back=NULL;
//         else{
//             back=back->prev;
//             back->next=NULL;
//         }
//         size--;
//     }
//     void getfront(){
//         cout<<front->val<<endl;
//     }
//     void getback(){
//         cout<<back->val<<endl;
//     }
//     void sizee(){
//         cout<<size<<endl;
//     }
//     void display(){
//         node* temp=front;
//         while(temp!=NULL){
//             cout<<temp->val<<"  ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// };
// int main(){
//     deque dq;
//     dq.pushback(10);
//     dq.pushback(20);
//     dq.pushback(30);
//     dq.pushback(40);
//     dq.pushback(50);
//     dq.display();
//     dq.pushfront(9);
//     dq.pushfront(8);
//     dq.pushfront(7);
//     dq.pushfront(6);
//     dq.pushfront(5);
//     dq.display();
//     dq.popfront();
//     dq.popfront();
//     dq.display();
//     dq.popback();
//     dq.popback();
//     dq.display();
//     dq.getfront();
//     dq.getback();
//     dq.sizee();
// }





// // Q7) implement circular queue using array
// #include<iostream>
// using namespace std;
// class queue{
//     public:
//     int arr[5];
//     int size;
//     int front;
//     int back;
//     queue(){
//         size=0;
//         front=-1;
//         back=-1;
//     }
//     void push(int val){
//         if(size==5) cout<<"overflow"<<endl;
//         else if(size==0){
//             arr[0]=val;
//             front=0,back=0,size++;
//         }
//         else if(back==4){
//             arr[0]=val;
//             back=0;
//             size++;
//         }
//         else{
//             arr[back+1]=val;
//             back++;
//             size++;
//         }
//     }
//     void pop(){
//         if(size==0) cout<<"underflow"<<endl;
//         else if(size==1) front =-1, back=-1, size=-1;
//         else if(front==4) front=0,size--;
//         else front++,size--;
//     }
//     void frontt(){
//         if(size==0) cout<<"underflow"<<endl;
//         else        cout<<arr[front]<<endl;
//     }
//     void backk(){
//         if(size==0) cout<<"underflow"<<endl;
//         else        cout<<arr[back]<<endl;
//     }
//     void sizee(){
//         cout<<size<<"  "<<endl;
//     }
//     void display(){
//         if(size==0){
//             cout<<"queue is empty";
//         }
//         else if(front<=back){
//             for(int i=front;i<=back;i++) cout<<arr[i]<<"  ";
//         }
//         else{
//             for(int i=front;i<5;i++) cout<<arr[i]<<"  ";
//             for(int i=0;i<=back;i++) cout<<arr[i]<<"  ";
//         }
//         cout<<endl;
//     }
// };
// int main(){
//     queue q;
//     q.display();
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50); q.display();
//     q.push(60);
//     q.pop();
//     q.pop(); q.display();
//     q.push(60);
//     q.push(70); q.display();
//     q.pop();
//     q.pop();
//     q.pop(); q.display();
//     q.push(80);
//     q.push(90); q.display();
//     q.frontt();
//     q.backk();
//     q.sizee();
// }





// Q8) leetcode 622 
// Q9) leetcode 641




// // Q10) Reverse first k element of queue
// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;
// int main(){
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     //reverse first 2 elemet
//     int k=2;
//     stack<int>st;
//     for(int i=0;i<q.size();i++){
//         if(i<k) st.push(q.front()),q.pop();
//         else if(i==k){
//             while(st.size()>0){
//                 q.push(st.top());
//                 st.pop();
//             }
//             q.push(q.front());
//             q.pop();
//         }
//         else{
//             q.push(q.front());
//             q.pop();
//         }
//     }
//     //display
//     for(int i=0;i<q.size();i++){
//         cout<<q.front()<<"  ";
//         q.push(q.front());
//         q.pop();
//     }
// }




// Q11) leetcode 1700
// Q12) leetcode 2073
// Q13) leetcode 232 (design queue using stack) (method1->push efficient, method2->pop efficient)
// Q14) leetcode 225





// // Q15) first negative in each window of size k (Hint:- fill negative number in a queue)
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// int main(){
//     vector<int>v={0,-1,-2,3,4,-5,6,4,7,-8};
//     int n=v.size(),k=3;
//     queue<int>q;
//     for(int i=0;i<n;i++) if(v[i]<0) q.push(i);
//     vector<int>ans;
//     for(int i=0,j=k-1;j<n;i++,j++){
//         while(q.front()<i) q.pop();
//         if(q.front()<=j) ans.push_back(v[q.front()]);
//         else             ans.push_back(0);
//     }
//     for(int ele: ans) cout<<ele<<"  ";
// }



// Q16) leetcode 239 ( using deque)
// Q17) leetcode 649

// // Q18) reorder queue
// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// int main(){
//     queue<int>q;
//     for(int i=1;i<=8;i++) q.push(i);
//     stack<int>st;
//     // step1-> reverse first half
//     //step2->put second half in stack
//     int n=q.size();
//     for(int i=0;i<n;i++){
//         if(i<n/2) st.push(q.front()),q.pop();
//         else if(i==n/2){
//             while(st.size()>0){
//                 q.push(st.top());
//                 st.pop();
//             }
//             st.push(q.front()),q.pop();
//         }
//         else st.push(q.front()),q.pop();
//     }
    
//     //step3->put stack element than q element
//      n=q.size();
//     for(int i=0;i<n;i++){
//         q.push(st.top());
//         st.pop();
//         q.push(q.front());
//         q.pop();
//     }
//     //step4->reverse
//     while(q.size()>0) st.push(q.front()),q.pop();
//     while(st.size()>0) q.push(st.top()),st.pop();
//     //display
//     for(int i=0;i<q.size();i++){
//         cout<<q.front()<<"  ";
//         q.push(q.front());
//         q.pop();
//     }    
// }



// Q19) leetcode 950





