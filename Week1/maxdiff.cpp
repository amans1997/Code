// Given an array arr[] of integers, find out the maximum difference between any two elements such that larger element appears after the smaller number. 
// arr = {2, 3, 10, 6, 4, 8, 1}

#include<bits/stdc++.h>
using namespace std;

int maxdiff(vector<int>s, int n){

    int max_diff=s[1]-s[0];
    int min_element = s[0];
     for(int i = 1; i < n; i++)
     {    
       if (s[i] - min_element > max_diff)                            
       max_diff = s[i] - min_element;
        
       if (s[i] < min_element)
       min_element = s[i];                    
     }
      
     return max_diff;
}


int main(){

    vector<int>s={1, 2, 90, 10, 110};
    int n=s.size();
    cout<<maxdiff(s,n);

}