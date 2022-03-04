// Search an element in a sorted and rotated array
// Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
//          key = 3
// Output : Found at index 8

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int rotated(vector<int> arr, int n, int x){
int l=0;
int h=n-1;
while(l<=h){
    int mid=(l+h)/2;
   if(arr[mid]==x){
       return mid;
   }
   if(arr[mid]<=arr[h]){
       if(x>arr[mid] && x<=arr[h]){
           l=mid+1;
       }
       else{
           h=mid-1;
       }
   }
   else{
       if(x>=arr[l] && x<arr[mid]){
           h=mid-1;
       }
       else{
           l=mid+1;
       }
   }

   
}
return -1;
}
int main()
{
vector<int>arr={5, 6, 7, 8, 9, 10, 1, 2, 3};
int n=arr.size();
int k=3;
cout<<rotated(arr,n,k);


}