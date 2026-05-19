// concept of memorization .
# include <iostream>
using namespace std;
int fibo(int dp[],int n){
    if(n==1||n==0) return n;
    if(dp[n]!=-1){
        return dp[n];
    }
    else{
    dp[n]= fibo(dp,n-1)+fibo(dp,n-2);
    return dp[n];
    }
}
int main(){
    int n=5;
    int dp[100];
    for(int i=0;i<100;i++){
        dp[i]=-1;
    }
    cout<<fibo(dp,n);
    return 0;
}
