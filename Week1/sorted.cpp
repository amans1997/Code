//Check if Sorted
#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int>s;
s={4,5,6,8,9};
int n=s.size();
if(n==0|| n==1){
    return true;
}
for(int i=1;i<n;i++){
    if(s[i-1]>s[i]){
        return false;
    }
}
return true;
}