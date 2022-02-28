// Count number of occurrences (or frequency) in a sorted array
#include<bits/stdc++.h>
using namespace std;

int firstoccurence(vector<int>s, int n, int k){
    int low=0;
    int result=-1;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(s[mid]==k){
            result=mid;
            high=mid-1;}
        if(s[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return result;
}

int lastoccurence(vector<int>s, int n,int k){
        int low=0;
    int result=-1;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(s[mid]==k){
            result=mid;
            low=mid+1;}
        if(s[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return result;


}

int main()
{
    vector<int>s={2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
    int n=s.size();
    int first=firstoccurence(s,n,9);
    int last=lastoccurence(s,n,9);
    cout<< last-first+1;
}