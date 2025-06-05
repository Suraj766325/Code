// // Q1) Orint good morning n number of times
// #include<iostream>
// using namespace std;
// void helper(int n){
//     if(n==0) return;
//     cout<<"good morning"<<endl;
//     helper(n-1);
// }
// int main(){
//     int n=5;
//     helper(n);
// }




// // Q2) print n to 1 using recursion
// #include<iostream>
// using namespace std;
// void helper(int n){
//     if(n==0) return ;
//     cout<<n<<endl;
//     helper(n-1);
// }
// int main(){
//     helper(5);
// }




// // Q3) print 1 to n using recursion
// #include<iostream>
// using namespace std;
// void helper(int n){
//     if(n==0) return ;
//     helper(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     helper(5);
// }




// // Q5) Factorial 
// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==1) return 1;
//     return n*fact(n-1);
// }
// int main(){
//     cout<<fact(5);
// }




// // Q6) sum 1 to n
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==1) return 1;
//     return n+sum(n-1);
// }
// int main(){
//     cout<<sum(10);
// }




// // Q7) function a to power b
// #include<iostream>
// using namespace std;
// int fun(int a, int b){
//     if(b==0) return 1;
//     return a*fun(a,b-1);
// }
// int main(){
//     cout<<fun(2,10);
// }




// // Q8) function a to power b in TC(logn)
// #include<iostream>
// using namespace std;
// int fun(int a, int b){
//     if(b==0) return 1;
//     if(b==1) return a;
//     if(b%2==0) return fun(a,b/2)*fun(a,b/2);
//     else       return a*fun(a,b/2)*fun(a,b/2);
// }
// int main(){
//     cout<<fun(2,17);
// }




// // Q9) check power of 2
// #include<iostream>
// using namespace std;
// bool helper(int n){
//     if(n==1) return true;
//     if(n==0 || n%2!=0) return false;
//     return helper(n/2);
// }
// int main(){
//     cout<<helper(36);
// }




// // Q10) check power of 3
// #include<iostream>
// using namespace std;
// bool helper(int n){
//     if(n==1) return true;
//     if(n==0 || n%3!=0) return false;
//     return helper(n/3);
// }
// int main(){
//     cout<<helper(729);
// }




// // Q11) check power of 4
// #include<iostream>
// using namespace std;
// bool helper(int n){
//     if(n==1) return true;
//     if(n==0 || n%4!=0) return false;
//     return helper(n/4);
// }
// int main(){
//     cout<<helper(1024);
// }




// // Q12) print decreasing and increasing sequence
// #include<iostream>
// using namespace std;
// void helper(int n){
//     if(n==1){
//         cout<<n<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     helper(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     helper(5);
// }




// // Q13) print increasing and decreasing sequence
// #include<iostream>
// using namespace std;
// void helper(int i,int n){
//     if(i==n){
//         cout<<i<<endl;
//         return;
//     }
//     cout<<i<<endl;
//     helper(i+1,n);
//     cout<<i<<endl;
// }
// int main(){
//     helper(1,5);
// }




// // Q14) sum of odd between a and b
// #include<iostream>
// using namespace std;
// int sum(int a, int b){
//     if(a>=b) return 0;
//     return a+sum(a+2,b);
// }
// int main(){
//     int a=30,b=40;
//     a=a/2*2+1;
//     cout<<sum(a,b);
// }




// // Q15) sum of even between a and b
// #include<iostream>
// using namespace std;
// int sum(int a, int b){
//     if(a>=b) return 0;
//     return a+sum(a+2,b);
// }
// int main(){
//     int a=30,b=40;
//     a=a/2*2+2;
//     cout<<sum(a,b);
// }




// // Q16) fabonacci
// #include<iostream>
// using namespace std;
// int fun(int n){
//     if(n<=1) return n;
//     return fun(n-1)+fun(n-2);
// }
// int main(){
//     cout<<fun(5);
// }




// // Q17) stair case 1 or 2 step at a time
// #include<iostream>
// using namespace std;
// int stair(int n){
//     if(n==1) return 1;
//     if(n==2) return 2;
//     return stair(n-1)+stair(n-2);
// }
// int main(){
//     cout<<stair(5);
// }




// // Q18) stair case 1 or 2 or 3 step at a time
// #include<iostream>
// using namespace std;
// int stair(int n){
//     if(n==1) return 1;
//     if(n==2) return 2;
//     if(n==3) return 3;
//     return stair(n-1)+stair(n-2)+stair(n-3);
// }
// int main(){
//     cout<<stair(5);
// }




// // Q19) no of ways maze path
// #include<iostream>
// using namespace std;
// int helper(int r,int c, int m, int n){
//     if(r>m || c>n) return 0;
//     if(r==m && c==n) return 1;
//     return helper(r+1,c,m,n)+helper(r,c+1,m,n);
// }
// int main(){
//     int m=3,n=7;
//     cout<<helper(0,0,m-1,n-1);
// }




// // Q19b) print maze path
// #include<iostream>
// using namespace std;
// void helper(int r,int c, int m, int n, string s){
//     if(r>m || c>n) return;
//     if(r==m && c==n){
//         cout<<s<<endl;
//         return;
//     }
//     helper(r,c+1,m,n,s+"R");
//     helper(r+1,c,m,n,s+"L");
// }
// int main(){
//     int m=3,n=7;
//     helper(0,0,m-1,n-1,"");
// }




// // Q20) pre in post
// #include<iostream>
// using namespace std;
// void pip(int n){
//     if(n==0) return;
//     cout<<"pre"<<n<<endl;
//     pip(n-1);
//     cout<<"in"<<n<<endl;
//     pip(n-1);
//     cout<<"post"<<n<<endl;
// }
// int main(){
//     pip(3);
// } 




// // Q21) print zig-zag(321112111232111232111211123)
// #include<iostream>
// using namespace std;
// void pip(int n){
//     if(n==0) return ;
//     cout<<n<<endl;
//     pip(n-1);
//     cout<<n<<endl;
//     pip(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     pip(3);
// }




// // Q22) tower of hanoi
// #include<iostream>
// using namespace std;
// void hanoi(int n,char source, char helper, char destination){
//     if(n==0) return;
//     hanoi(n-1,source,destination,helper);
//     cout<<source<<"->"<<destination<<endl;
//     hanoi(n-1,helper,source,destination);
// }
// int main(){
//     hanoi(4,'a','b','c');
// }




// // Q23) print all element of array
// #include<iostream>
// using namespace std;
// void helper(int arr[],int n){
//     if(n==-1) return ;
//     helper(arr,n-1);
//     cout<<arr[n]<<" ";
// }
// int main(){
//     int arr[5]={10,20,30,40,50};
//     helper(arr,4);
// }




// // Q24) print all elelment of array in reverse order
// #include<iostream>
// using namespace std;
// void helper(int arr[],int n){
//     if(n==-1 ) return ;
//     cout<<arr[n]<<" ";
//     helper(arr,n-1); 
// }
// int main(){
//     int arr[]={10,20,30,40,50};
//     helper(arr,4);
// }




// // Q25) print index target, if not present print -1;
// #include<iostream>
// #include<vector>
// using namespace std;
// void helper(vector<int>&v,int idx,int target){
//     if(idx==-1){
//         cout<<-1;
//         return;
//     }
//     if(v[idx]==target){
//         cout<<idx;
//         return;
//     }
//     helper(v,idx-1,target);
// }
// int main(){
//     vector<int>v={10,20,30,40,50};
//     helper(v,4,35);
// }




// // Q26) print pattern
// // 5 4 3 2 1
// // 9 7 5 3
// // 16 12 8
// // 28 20
// // 48
// #include<iostream>
// #include<vector>
// using namespace std;
// void helper(vector<int>&v, int n){
//     if(n==0){
//         cout<<v[n]<<endl;
//         return;
//     }
//     for(int i=0;i<=n;i++){
//         cout<<v[i]<<"  ";
//         if(i!=0) v[i-1]+=v[i];
//     }
//     cout<<endl;
//     helper(v,n-1);
// }
// int main(){
//     vector<int>v={5,4,3,2,1};
//     helper(v,4);
// }




// // Q27) no of steps required to reduce a number to zero, if number is even divide by 2, if number is odd subtract1
// #include<iostream>
// using namespace std;
// int helper(int n){
//     if(n==0) return 0;
//     if(n%2==0) return 1+helper(n/2);
//     else       return 1+helper(n-1);
// }
// int main(){
//     cout<<helper(7);
// }




// // Q28) sum of digits of number
// #include<iostream>
// using namespace std;
// int helper(int n){
//     if(n==0) return 0;
//     return n%10+helper(n/10);
// }
// int main(){
//     cout<<helper(512);
// }




// // Q29) reverse of number
// #include<iostream>
// using namespace std;
// void helper(int n,int sum){
//     if(n==0){
//         cout<<sum;
//         return;
//     }
//     sum=10*sum+n%10;
//     helper(n/10,sum);
// }
// int main(){
//     helper(512,0);
// }




// // Q30) maximum value of array
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int helper(vector<int>&v,int n){
//     if(n==-1) return INT_MIN;
//     return max(v[n],helper(v,n-1));
// }
// int main(){
//     vector<int>v={10,20,40,50,30};
//     cout<<helper(v,4);
// }




// // Q31) Remove all occurrence of a from string
// #include<iostream>
// #include<string>
// using namespace std;
// void helper(string s, string ans, int idx){
//     if(idx==s.size()){
//         cout<<ans;
//     }
//     if(s[idx]!='a') ans.push_back(s[idx]);
//     helper(s,ans,idx+1);
// }
// int main(){
//     helper("surajagrawal","",0);
// }




// // Q33) All subset of string =2^n
// #include<iostream>
// #include<string>
// using namespace std;
// void subset(string s, string ans , int idx){
//     if(idx==s.size()){
//         cout<<ans<<endl;
//         return;
//     }
//     subset(s,ans,idx+1);
//     ans.push_back(s[idx]);
//     subset(s,ans,idx+1);
// }
// int main(){
//     string s="abc";
//     subset(s,"",0);
// } 




// // Q34) All subset of vector=2^n
// #include<iostream>
// #include<vector>
// using namespace std;
// void subset(vector<int>v, vector<int>ans, int idx){
//     if(idx==v.size()){
//         for(int ele: ans) cout<<ele<<" ";
//         cout<<endl;
//         return;
//     }
//     subset(v,ans,idx+1);
//     ans.push_back(v[idx]);
//     subset(v,ans,idx+1);
// }
// int main(){
//     vector<int>v={1,2,3};
//     subset(v,{},0);
// }




// // Q35) All subset of repeated string
// #include<iostream>
// #include<string>
// using namespace std;
// void subset(string s, string ans, int idx, bool flag){
//     if(idx==s.size()){
//         cout<<ans<<endl;
//         return;
//     }
//     if(idx==s.size()-1 || s[idx]!=s[idx+1])   subset(s,ans,idx+1,true);
//     else                                      subset(s,ans,idx+1, false);
//     if(flag==true){
//         ans.push_back(s[idx]);
//         subset(s,ans,idx+1,true);
//     }
// }
// int main(){
//     string s="aab";
//     subset(s,"",0,true);
// }




// // Q36) All subset of repeated vector
// #include<iostream>
// #include<vector>
// using namespace std;
// void subset(vector<int>v,vector<int>ans,int idx, bool flag){
//     if(idx==v.size()){
//         for(int ele: ans) cout<<ele<<"  ";
//         cout<<endl;
//         return;
//     }
//     if(idx==v.size()-1 || v[idx]!=v[idx+1]) subset(v,ans,idx+1,true);
//     else                                    subset(v,ans,idx+1,false);
//     ans.push_back(v[idx]);
//     if(flag==true)                          subset(v,ans,idx+1,true);
// }
// int main(){
//     vector<int>v={1,1,2};
//     subset(v,{},0,true);
// }




// // Q37) print all increasing subsequence of length k from n natural number
// #include<iostream>
// #include<vector>
// using namespace std;
// void subset(vector<int>&v,vector<int>ans,int idx, int k){
//     if(ans.size()==k){
//         for(int ele: ans) cout<<ele;
//         cout<<endl;
//         return;
//     }
//     if(v.size()-idx+ans.size()<k) return;
//     ans.push_back(v[idx]);
//     subset(v,ans,idx+1,k);
//     ans.pop_back();
//     subset(v,ans,idx+1,k);
// }
// int main(){
//     vector<int>v={1,2,3,4,5};
//     subset(v,{},0,3);
// }




// // Q38) Permutation of string
// #include<iostream>
// #include<string>
// using namespace std;
// void per(string s,string ans){
//     if(s.size()==0){
//         cout<<ans<<endl;
//     }
//     int n=s.size();
//     for(int i=0;i<n;i++){
//         per(s.substr(0,i)+s.substr(i+1),ans+s[i]);
//     }
// }
// int main(){
//     string s="abc";
//     per(s,"");
// }




// // Q39) all possible subarray
// #include<iostream>
// #include<vector>
// using namespace std;
// void helper(vector<int>&v,vector<int>ans,int idx){
//     if(idx==v.size()){
//         for(int ele: ans) cout<<ele;
//         cout<<endl;
//         return;
//     }
//     helper(v,ans,idx+1);
//     if(ans.size()==0 || v[idx-1]==ans[ans.size()-1]){
//         ans.push_back(v[idx]);
//         helper(v,ans,idx+1);
//     }
// }
// int main(){
//     vector<int>v={1,2,3,4};
//     helper(v,{},0);
// }




// // Q40) check string pelindrome or not
// #include<iostream>
// #include<string>
// using namespace std;
// bool helper(string &s,int i, int n){
//     if(i>=n) return true;
//     if(s[i]!=s[n]) return false;
//     helper(s,i+1,n-1); 
// }
// int main(){
//     string s="naman";
//     cout<<helper(s,0,s.size()-1);
// }




// // Q41) find hcf 
// #include<iostream>
// using namespace std;
// int hcf(int dividend, int divisor){
//     if(dividend%divisor==0) return divisor;
//     else                    return hcf(divisor,dividend%divisor);
// }
// int main(){
//    cout<<hcf(16,6);
// }




// // Q42) binary string of length n , without consecutive 1's
// #include<iostream>
// #include<string>
// using namespace std;
// void helper(string s, int k){
//     if(s.size()==k){
//         cout<<s<<endl;
//         return;
//     }
//     helper(s+"0",k);
//     if(s.size()==0 ||s[s.size()-1]=='0') helper(s+"1",k);
// }
// int main(){
//     helper("",3);
// }




// // Q43) Combination sum 1/Beggar coin
// #include<iostream>
// #include<vector>
// using namespace std;
// void helper(vector<int>&v,vector<int>ans,int target){
//     if(target==0){
//         for(int ele: ans) cout<<ele;
//         cout<<endl;
//         return ;
//     }
//     if(target<0) return ;
//     for(int i=0;i<v.size();i++){
//         ans.push_back(v[i]);
//         helper(v,ans,target-v[i]);
//         ans.pop_back();
//     }
// }
// int main(){
//     vector<int>v={2,3,5};
//     helper(v,{},8);
// }