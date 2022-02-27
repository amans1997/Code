//Leaders in an Array
//Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2
#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>arr, int n){
vector<int>leader;
if(n==1||n==0){
    return leader;
}
int max_right=arr[n-1];
leader.push_back(arr[n-1]);
for(int i=n-2;i>0;i--){
    if(max_right<arr[i]){
        max_right=arr[i];
        leader.push_back(arr[i]);
    }
}

return leader;
}
int main(){
vector<int>s={16, 17, 4, 3, 5, 2};
int n=s.size();
vector<int>res;
res=leaders(s,n);
for(auto i:res){
    cout<<i<<" ";
}

}