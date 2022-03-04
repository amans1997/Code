// Find pair in a sorted array which gives sum X
// // Input  : arr[] = {1, 2, 3,5, 6, 7, 8, 9, 10};
//             key=9

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={1, 2, 3,5, 6, 7, 8, 9, 10};
    int n=arr.size();
    int k=9;
    int l=0;
    int h=n-1;
    while(l<h){
        int mid=(l+h)/2;
        if(arr[l]+arr[h]==k){
            cout<<"Found at  "<<l<<h;
          
        }
        else if(arr[l]+arr[h]>k){
            h--;
        }
        else{
            l+=1;
        }
    }

}