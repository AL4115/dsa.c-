# include <iostream>
using namespace std;
int minsteps(int dp[],int n){
    if(n==0) return 1;
    if(n<0) return 0;
    for(int i=0;i<n;i++){
        dp[n]=dp[i];
    }
    if(dp[n]!=0) {
    return dp[n];
    }
     dp[n] =minsteps(dp,n-1)+minsteps(dp,n-2);
     return dp[n];
}
int main(){
    int n=4;
    int dp[]={};
    cout<<minsteps(dp,4);
    return 0;
}