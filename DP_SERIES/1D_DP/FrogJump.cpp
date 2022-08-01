#include<bits/stdc++.h>
using namespace std;

int frogJump(int ind,vector<int>& height, vector<int>& dp){
    if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int Second_jump=INT_MAX;
    int One_jump=frogJump(ind-2,height,dp)+abs(height[ind]-height[ind-1]);
    if(ind>1){
        Second_jump=frogJump(ind-1,height,dp)+abs(height[ind]+height[ind-2]);
    }
    return dp[ind]=min(One_jump,Second_jump);
}

int main(){
    vector<int> height{20,30,40,50,60,70,};
    int n=height.size();
    vector<int> dp(n,-1);
    cout<<frogJump(n-1,height,dp);
    return 0;
}