// wap of linear search 
// by using for loop in main():
/*# include <iostream>
using namespace std;
int main(){
    int target=8;
    int ans=0;
    int arr[]={1,5,8,4,9,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=len-1;i++){
        if(arr[i]==target) {
            ans=i;
            cout<<ans;
            break;
        }
    }
    if (ans<=0) {
            cout<<-1;
        }
    return 0;
}*/
//  by using function:
/*# include <iostream>
using namespace std;
int ls(int arr[],int target,int len){
    for(int i=0;i<=len-1;i++){
        if(arr[i]==target) return i;
    }
         return -1;
}
int main(){
    int arr[]={1,5,8,4,9,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<ls(arr,8,len);
    return 0;
}*/
// ,.by using recursion.
/*# include <iostream>
using namespace std;
int ls(int arr[],int i,int ans,int target,int len){
    if(len<0) return -1;
    if(arr[i]==target) return ans+=i;
     ls( arr,i+1,ans,target, len-1);
}


int main(){
    int arr[]={1,5,8,4,9,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<ls(arr,0,0,6,len);
    return 0;
}
*/
//wap of swapping / or reverse an array.
// by using two pointer technique
/*# include <iostream>
using namespace std;
int main(){
int temp;
    int arr[]={1,5,8,4,9,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0,j=len-1;i<=j;i++,j--){
        swap(arr[i],arr[j]);
    }
    for(int k=0;k<len;k++){
        cout<<arr[k];
    }
    return 0;
}*/
// by using functions.
/*# include <iostream>
using namespace std;
int swap(int arr[],int len,int start,int end){
    for(int start=0,end=len-1;start<=end;start++,end--){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    }
    for(int k=0;k<len;k++){
        cout<<arr[k];
    }
}
    int main(){
    int arr[]={1,5,8,4,9,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<swap(arr,len,0,len-1)<<endl;
    return 0;
}*/

// by using recursion
# include <iostream>
using namespace std;
int swap(int arr[],int len,int start,int end){
    if(start==end) {
        for(int k=0;k<len;k++){
        cout<<arr[k];
    }
    return 0;
    }
    int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    return  swap(arr,len, start+1, end-1);
}
int main(){
    int arr[]={1,5,8,4,9,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<swap(arr,len,0,len-1)<<endl;
    return 0;
}