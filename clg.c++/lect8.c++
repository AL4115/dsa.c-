//wap to print the no. of ways that we can arrange the value of n
# include <iostream>
using namespace std;
int pairways(int n,int arr[]){
    if(n<=2) return n;
    if(arr[n]!=-1) return arr[n];
    arr[n] = pairways(n-1,arr)+(n-1)* pairways(n-2,arr);
    return arr[n];
    }
int main(){
    int n=4;
    int arr[n+1];
    for(int i=0;i<n+1;i++){
        arr[i]=-1;
    }
    cout<<pairways(n,arr);
    return 0;
}
