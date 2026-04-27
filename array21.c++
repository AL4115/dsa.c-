// wap to print all the unique values in an array.
# include <iostream>
using namespace std;
int main(){
    int arr[9]={1,2,5,8,5,9,6,8};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        bool isduplicate = false;
        for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
            isduplicate = true;
            break;
        }
    }
    if (isduplicate){
        cout<<arr[i]<<" ";
    }
}
    return 0;
}