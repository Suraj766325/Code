// // 6) minimum product subset
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int fun(vector<int>&v){
//     sort(v.begin(),v.end());
//     int product=1;
//     int n;
//     if(v[0]==0) return 0;
//     else if(v[0]>0) return v[0];
//     else{
//         for(int ele: v){
//             if(ele!=0) product*=ele;
//             if(ele<0) n=ele;
//         }
//     }
//     if(product>0) return product/n;
//     else    return product;
// }
// int main(){
//     vector<int>v={-1,-2,-5,2,4,5};
//     cout<<fun(v);
// }




// Q7) Minimum cost to cut a board into sqaures, A board of length M and width N is given the task is to break this board into M*N squares such the cost of breaking is minimum. The cutting cost of each edge will be given for the board in two arrays X[] and Y[] . in short, you need to choose such a sequence of cutting such that cost is minimized . Return the minimized cost
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>x={2,1,3,1,4};
    vector<int>y={4,1,2};
    sort(x.begin(),x.end(),[](int a, int b){
        return a>b;
    });
    sort(y.begin(),y.end(),[](int a, int b){
        return a>b;
    });
    int sum=0;
    int i=0,j=0;
    while(i<x.size() || j<y.size()){
        if(i==x.size()) sum+=(y[j]*(i+1)),j++; 
        else if(j==y.size()) sum+=(x[i]*(j+1)),i++;
        else if(x[i]>=y[j]) sum+=(x[i]*(j+1)),i++;
        else           sum+=(y[j]*(i+1)),j++; 
    }
    cout<<sum;
}