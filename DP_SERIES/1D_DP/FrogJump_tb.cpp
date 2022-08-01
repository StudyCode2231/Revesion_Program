#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> height{30,10,60,10,60,50};
    int n=height.size();
    vector<int> dp(n-1,-1);
    dp[0]=0;
    for(int ind=1;ind<n;ind++){
        int jumpsTwo=INT_MAX;
        int jumpsOne=dp[ind-1]+abs(height[ind]+height[ind-1]);
        if(ind>1){
            int jumpsTwo=dp[ind-2]+abs(height[ind]+height[ind-2]);
        }
        dp[ind]=min(jumpsOne,jumpsTwo);

    }
    cout<<dp[n-1];
    return 0;


}