// Maximum Subarray Sum

#include<bits/stdc++.h>
using namespace std;


int maxsum(vector<int> arr, int n){
    int max_so_far=INT_MIN, max_ending=0;
    for (int i=0;i<n;i++){
        max_ending+=arr[i];
        if(max_ending>max_so_far){
            max_so_far=max_ending;
        }
        if(max_ending<0){
            max_ending=0;
        }
    }
    return max_so_far;
}

int main()
{
vector<int> arr={-2, -3, 4, -1, -2, 1, 5, -3};
int n=arr.size();
cout<< maxsum(arr,n);
    
}