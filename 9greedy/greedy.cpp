// // Q1) leetcode 1005 (maximize sum of array after k negotitation)
// int largestSumAfterKNegations(vector<int>& nums, int k) {
//     priority_queue<int,vector<int>,greater<int>>pq;
//     for(int ele:nums) pq.push(ele);
//     int temp;
//     while(k>0){
//         temp=pq.top(),pq.pop();
//         if(temp<0) pq.push(temp*(-1)),k--;
//         else if(temp==0)   k=0;
//         else if(k%2==0) pq.push(temp),k=0;
//         else            pq.push(temp*(-1)),k=0; 
//     }
//     int sum=0;
//     while(pq.size()>0) sum+=pq.top(),pq.pop();
//     return sum;
// }




// // Q2) Fractional Knapsack -> you are given max knapsack capacity(k), an array weigths of item and an profits of item, calculate the maxium profit
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int k=50;
//     vector<int>weight={10,30,20};
//     vector<int>profit={60,120,100};
//     vector<vector<int>>v;
//     for(int i=0;i<weight.size();i++){
//         v.push_back({weight[i],profit[i]/weight[i]});
//     }
//     sort(v.begin(),v.end(),[](auto&a,auto&b){
//         return a[1]>b[1];
//     });
//     int count=0;
//    for(int i=0;i<v.size();i++){
//     if(k>v[i][0]) count+=v[i][0]*v[i][1],k-=v[i][0];
//     else{
//         count+=k*v[i][1];
//         break;
//     }
//    }
//    cout<<count;
// }




// // Q3) leetcode 1710 (maximum unit in a truck)
// int maximumUnits(vector<vector<int>>& v, int k) {
//     sort(v.begin(),v.end(),[](auto&a, auto&b){
//         return a[1]>b[1];
//     });
//     int count=0;
//     for(int i=0;i<v.size();i++){
//         if(k>v[i][0]) count+=v[i][0]*v[i][1],k-=v[i][0];
//         else{
//             count+=k*v[i][1];
//             break;
//         }
//     }
//     return count;
// }




// // Q4) leetcode 2279 (maximum bag with full capacity of load)
// int maximumBags(vector<int>& capacity, vector<int>& rocks, int k) {
//     vector<vector<int>>v;
//     for(int i=0;i<capacity.size();i++){
//         v.push_back({capacity[i],rocks[i]});
//     }
//     sort(v.begin(),v.end(),[](auto&a, auto&b){
//         return a[0]-a[1]<b[0]-b[1];
//     });
//     int count=0;
//     for(int i=0;i<v.size();i++){
//         if(k>=(v[i][0]-v[i][1])) count++,k-=(v[i][0]-v[i][1]);
//         else            break;
//     }
//     return count;
// }




// // Q5) leetcode 881 (boats to save people)
// int numRescueBoats(vector<int>& people, int limit) {
//     sort(people.begin(),people.end());
//     reverse(people.begin(),people.end());
//     int i=0,j=people.size()-1,count=0;
//     while(i<=j){
//         if(i==j) count++,i++,j--;
//         else{
//             if(people[i]+people[j]<=limit) count++,i++,j--;
//             else                 count++,i++;
//         }
//     }
//     return count;
// }




// // Q6) minimum product subset
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v={-1,-1,-2,0,4,3};
//     int l=0,m=1;
//     for(int i=0;i<v.size();i++){
//         if(v[i]<0) m*=v[i],l=v[i];
//         else if(v[i]==0 && l==0) {
//             m=0;
//             break;
//         }
//         else if(v[i]==0) continue;
//         else            m*=v[i];
//     }
//     if(m>0) m/=l;
//     cout<<m;
// }




// // Q7) Minimum cost to cut a board into squares, A board of legth m and widht n is given, the task is to break this board into m*n square such the cost of each edge will be given for the board in two arrays x[] and y[], in hsort you need to choose such a sequence of cutting such that cost is minimized , Return the minimized cost
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>x={2,1,3,1,4};
//     vector<int>y={4,1,2};
//     sort(x.begin(),x.end());
//     reverse(x.begin(),x.end());
//     sort(y.begin(),y.end());
//     reverse(y.begin(),y.end());
//     int i=0,j=0,count=0;
//     while(i<x.size() || j<y.size()){
//         if(i==x.size())   count+=y[j]*(i+1),j++;
//         else if(j==y.size()) count+=x[i]*(j+1),i++;
//         else if(x[i]>=y[j]) count+=x[i]*(j+1),i++;
//         else                count+=y[j]*(i+1),j++;
//     }
//     cout<<count;
// }




// // Q8) leetcode 2182 (construct string with repeat limit)
// string repeatLimitedString(string s, int limit) {
//     map<char,int>m;
//     for(char ele:s) m[ele]++;
//     string ans;
//     priority_queue<pair<char,int>>pq;
//     for(pair<char,int>ele:m) pq.push(ele);
//     pair<char,int>p;
//     pair<char,int>q;
//     while(pq.size()>0){
//         p=pq.top(),pq.pop();
//         if(p.second<=limit){
//             while(p.second>0){
//                 ans.push_back(p.first);
//                 p.second--;
//             }
//         }
//         else{
//             int n=limit;
//             while(n>0){
//                 ans.push_back(p.first);
//                 n--,p.second--;
//             }
//             if(pq.size()==0) break;
//             else{
//                 q=pq.top(),pq.pop();
//                 pq.push(p);
//                 ans.push_back(q.first);
//                 q.second--;
//                 if(q.second!=0) pq.push(q);
//             }
//         }
//     }
//     return ans;
// }




// // Q9) leetcode 781 (rabbit in forest)
// int numRabbits(vector<int>& answers) {
//     unordered_map<int,int>m;
//     for(int ele: answers) m[ele]++;
//     int count=0;
//     for(pair<int,int>ele:m){
//         if(ele.first==0) count+=ele.second;
//         else if(ele.second%(ele.first+1)==0) count+=ele.second;
//         else{
//             int n=ele.second%(ele.first+1);
//             ele.second+=(ele.first+1-n);
//             count+=ele.second;
//         }
//     }
//     return count;
// }




// // Q10) leetcode 1282 (group the people given the group size they began to)
// vector<vector<int>> groupThePeople(vector<int>& v) {
//     map<int,vector<int>>m;
//     for(int i=0;i<v.size();i++) m[v[i]].push_back(i);
//     vector<vector<int>>ans;
//     for(pair<int,vector<int>>p:m){
//         int n=p.second.size();
//         int j=0;
//         while(j<n){
//             vector<int>temp;
//             for(int i=0;i<p.first;i++) temp.push_back(p.second[j++]);
//             ans.push_back(temp);
//         }
//     }
//     return ans;        
// }




// // Q11) leetcode 253 (Meeting room 2) Given an array of meeting time intervals where intervals [i]=start,end, return number of rooms required
// int minMeetingRooms(vector<int> &start, vector<int> &end) {
//     sort(start.begin(),start.end());
//     sort(end.begin(),end.end());
//     int r=0,m=-1;
//     int i=0,j=0;
//     while(i<start.size()){
//         if(start[i]<end[j]) r++,m=max(m,r),i++;
//         else                r--,j++;
//     }
//     return m;
// }




// // Q12) leetcode 252 (Meeting room 1) Same meeting room problem, you have to check can a person can attend all meetings 
// bool canAttend(vector<vector<int>> &arr) {
//     vector<int>start;
//     vector<int>end;
//     for(int i=0;i<arr.size();i++){
//         start.push_back(arr[i][0]);
//         end.push_back(arr[i][1]);
//     }
//     sort(start.begin(),start.end());
//     sort(end.begin(),end.end());
//     int i=0,j=0,count=0;
//     while(i<start.size()){
//         if(start[i]<end[j]) count++,i++;
//         else                count--,j++;
//         if(count>1) return false;
//     }
//     return true;    
// }




// // Q13) leetcode 56 (Merge Intervals)
// vector<vector<int>> merge(vector<vector<int>>& intervals) {
//     sort(intervals.begin(),intervals.end());
//     int start=intervals[0][0];
//     int end=intervals[0][1];
//     vector<vector<int>>ans;
//     for(int i=1;i<intervals.size();i++){
//         if(intervals[i][0]<=end) end=max(end,intervals[i][1]);
//         else{
//             ans.push_back({start,end});
//             start=intervals[i][0],end=intervals[i][1];
//         }
//     }
//     ans.push_back({start,max(end,intervals[intervals.size()-1][1])});
//     return ans;
// }




// // Q14) leetcode 435 (Non overlapping intervals)
// int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//     sort(intervals.begin(),intervals.end());
//     int count=0;
//     int i=1;
//     int end=intervals[0][1];
//     while(i<intervals.size()){
//         if(intervals[i][0]<end) count++,end=min(end,intervals[i][1]);
//         else                    end=intervals[i][1];
//         i++;
//     }
//     return count++;
// }




// // Q15) leetcode 452 (Minimum number of arrows to burst ballons)
// int findMinArrowShots(vector<vector<int>>& points) {
//     sort(points.begin(),points.end());
//     int count=1;
//     int i=1;
//     int end=points[0][1];
//     while(i<points.size()){
//         if(points[i][0]<=end) end=min(end,points[i][1]);
//         else                  count++,end=points[i][1];
//         i++;
//     }
//     return count;
// }




// // Q16) Given n activities with start time is start[i] and finish time is finish[i], find the maximum number of activites a single person can perform  without overlap. A person can only do one activity at a time
// int activitySelection(vector<int> &start, vector<int> &finish) {
//     vector<vector<int>>v;
//     for(int i=0;i<start.size();i++) v.push_back({start[i],finish[i]});
//     sort(v.begin(),v.end());
//     int count=1;
//     int i=1;
//     int end=v[0][1];
//     while(i<v.size()){
//         if(v[i][0]<=end) end=min(end,v[i][1]);
//         else            count++,end=v[i][1];
//         i++;
//     }
//     return count;    
// }




// // Q17) leetcode 75 (Inset Interval)
// vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
//     intervals.push_back(newInterval);
//     sort(intervals.begin(),intervals.end());
//     vector<vector<int>>ans;
//     int i=0;
//     int start=intervals[0][0];
//     int end=intervals[0][1];
//     while(i<intervals.size()){
//         if(intervals[i][0]<=end) end=max(end,intervals[i][1]);
//         else              ans.push_back({start,end}),start=intervals[i][0],end=intervals[i][1];
//         i++;
//     }
//     ans.push_back({start,max(end,intervals[intervals.size()-1][1])});
//     return ans;
// }




// // Q18) leetcode 986 (Interval List Intersection)
// vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
//     vector<vector<int>>ans;
//     int i=0,j=0;
//     int start,end;
//     while(i<firstList.size() && j<secondList.size()){
//         start=max(firstList[i][0],secondList[j][0]);
//         end =min(firstList[i][1],secondList[j][1]);
//         if(start<=end) ans.push_back({start,end});
//         if(firstList[i][1]<secondList[j][1]) i++;
//         else                                 j++; 
//     }
//     return ans;
// }




