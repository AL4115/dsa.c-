// wap to return the subsequence of a given array whose sum is equal to k(2) by using recursion.
/*# include <iostream>
using namespace std;
int subseq(int arr[],int k,int i,int j,int sum){
    if(i==j) return sum;
    if(arr[i]+arr[j]==k){
        int sum=arr[i]+arr[j];
        cout<<"("<<arr[i]<<" , "<<arr[j]<<")"<<endl;
         return sum;
    }
    for(i=0;i<j;i++){
        if(arr[i]+arr[j]==k){
            int sum=arr[i]+arr[j];
        cout<<"("<<arr[i]<<" , "<<arr[j]<<")"<<endl;
         return sum;
        }
    }
subseq(arr, k,i+1,j-1,sum);
}
int main(){
    int arr[]={1,2,1,3};
    int k;
    cout<<subseq(arr,5,0,3,0);
    return 0;
}*/
// wap to return the count of subsequence of a given array whose sum is equal to k(2) by using recursion.
# include <iostream>
using namespace std;
int subseq(int arr[],int k,int i,int j,int sum,int count){
    if(i==j) return count;
    if(arr[i]+arr[j]==k){
        count+=1;
        return count;
    }
    for(i=0;i<j;i++){
        if(arr[i]+arr[j]==k){
            count+=1;
            return count;
        }
    }
subseq(arr, k,i+1,j-1,sum,count);
}
int main(){
     int arr[]={1,2,1,3};
    int k;
    cout<<subseq(arr,5,0,3,0,0);
    return 0;
}