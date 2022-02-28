// Rain water trapping problem

#include<bits/stdc++.h>
using namespace std;

int watertrap(vector<int> height, int n){
int left=0, right=n-1, water=0;
int maxleft=height[left], maxright=height[right];
while(left<right){
    if(height[left]<=height[right]){
        left++;
        maxleft=max(maxleft,height[left]);
        water+=(maxleft-height[left]);
    }
    else{
        right--;
        maxright=max(maxright,height[right]);
        water+=(maxright-height[right]);
    }

}
return water;
}

int main(void)
{
    vector<int> heights = { 7, 0, 4, 2, 5, 0, 6, 4, 0, 5 };
    int n = heights.size();
 
    cout<<"The maximum amount of water that can be trapped is "<<watertrap(heights, n);
 
    return 0;
}
