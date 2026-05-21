// wap to count  the no. of different subsets whose sum is equal to k.
# include <iostream>
using namespace std;
    int minsteps(int arr[],int len,int i,int k,int dp[][100]){
        if(k==0) return 1;
        if(i==len) return 0;
        if(dp[i][k]!=-1) return dp[i][k];
        int x=0;
        if(arr[i]<=k)
        {
            x=minsteps(arr,len,i+1,k-arr[i],dp);
        }
        int y=minsteps(arr,len,i+1,k,dp);
        dp[i][k]=x+y;
        return dp[i][k];
    }
    int main(){
        int k=3;
        int arr[]={1,2,3};
        int dp[100][100];
        int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        for(int j=0;j<=k;j++){
        dp[i][j]=-1;
    }
}
cout<<minsteps(arr,len,0,k,dp);
    return 0;
}