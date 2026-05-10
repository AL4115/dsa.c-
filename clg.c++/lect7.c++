// wap to calculate the no. of ways that we can decode a string in the form of a to z i.e(1->a,2->b,3->c etc).
# include <bits/stdc++.h>
using namespace std;
int ways(string &str,int i,vector<int> &dp){
    if(i == str.length()) return 1;
    if(str[i]=='0') return 0;
    if(dp[i]!=-1) return dp[i];
    int one = ways(str,i+1,dp);
    int two=0;
    if(i+1<str.length()){
        int num=(str[i]-'0')*10+(str[i+1]-'0');
        if(num<=26){
            two=ways(str,i+2,dp);
        }
    }
    return  dp[i] =one+two;
}

int main(){
    string str="12";
    vector<int> dp(str.length(),-1);
    cout<<ways(str,0,dp);
    return 0;
}