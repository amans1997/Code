//Left Rotation of the array by 1

#include<bits/stdc++.h>
using namespace std;
void leftrotate(vector<int>&x,int n, int r)
{
reverse(x.begin(),x.begin()+r);
reverse(x.begin()+r, x.end());
reverse(x.begin(),x.end());
for(auto i :x){
    cout<<i<<" ";
}
}

int main()
{
vector<int>s;
s={ 1, 2, 3, 4, 5 };
int r=2;
int n=5;
leftrotate(s,n,r);




}

