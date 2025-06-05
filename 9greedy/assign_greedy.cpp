// // Q1) There is a bag that consists of items, each item has a number 1, 0, or -1 written on it.
// // Input: numOnes = 3, numZeros = 2, numNegOnes = 0, k = 4
// // Output: 3
// // Explanation: We have a bag of items with numbers written on them {1, 1, 1, 0, 0}. We take 2
// // items with 1 written on them and get a sum in a total of 2.
// // It can be proven that 2 is the maximum possible sum.
// #include<iostream>
// using namespace std;
// int helper(int numOnes, int numZeros, int numNegones, int k){
//     int count=0;
//     if(k<=numOnes)return count+=k;
//     else count+=numOnes, k-=numOnes;
//     if(k<=numZeros) return count;
//     else k-=numZeros;
//     return count-=k;
// }
// int main(){
//     int numOnes=2, numZeros=1, numNegOnes=1,k=4;
//     cout<<helper(numOnes, numZeros, numNegOnes,k);
// }





// // Q2) Given an integer k, return the minimum number of Fibonacci numbers whose sum isequal to k. The same Fibonacci number can be used multiple times.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int k=7;
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(1);
//     int a=1,b=1;
//     while(a+b<=k){
//         v.push_back(a+b);
//         a=b;
//         b=v[v.size()-1];
//     }
//     //two pointer method to find sum=k;
//     int i=0,j=v.size()-1,count=0;
//     while(i<=j){
//         if(v[i]+v[j]==k) count++,i++,j--;
//         else if(v[i]+v[j]>k) j--;
//         else                 i++;
//     }
//     cout<<count;    
// }




// // Q3)  You are given a non-negative integer array nums. In one operation, you must:Choose a positive integer x such that x is less than or equal to the smallest non-zero elementin nums.Subtract x from every positive element in nums.Return the minimum number of operations to make every element in nums equal to 0.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v={1,5,0,3,5};
//     sort(v.begin(),v.end());
//     int count=0,temp;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0) continue;
//         else{
//             temp=v[i];
//             for(int j=i;j<v.size();j++){
//                 v[j]-=temp;
//             } 
//             count++;
//         }
//     }
//     cout<<count;
// }

// //METHOD->2(count no of unique elemetns)
// #include<iostream>
// #include<vector>
// #include<unordered_set>
// using namespace std;
// int main(){
//     vector<int>v={1,5,0,3,5};
//     unordered_set<int>s;
//     for(int ele: v){
//         if(ele!=0) s.insert(ele);
//     }
//     cout<<s.size();
// }






// Q4) Given two arrays a[] and b[] of the same size. Task is to find the minimum sum of two  elements such that they belong to different arrays and are not at the same index in their arrays.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>a={5, 4, 13, 2, 1};
    vector<int>b={2, 3, 4, 6, 5};
    vector<vector<int>>v;
    for(int i=0;i<a.size();i++){
        v.push_back({a[i],b[i]});
    }
    sort(v.begin(),v.end());
    int m=INT_MAX;
    for(int i=1;i<v.size();i++)
}
