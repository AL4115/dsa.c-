// wap to print the array in reverse order by taking input from user.
# include <iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"enter the element:";
        cin>>arr[i];
    }
    cout<<"your array is:"<<endl;
    for(int j=0;j<5;j++){  
        cout<<arr[j]<<" ";
    }
    int original=arr[5];
    int rev=0;
    cout<<"the reverse of array is:"<<endl;
    for(int i=4;i>=0;i--){
        rev =rev+arr[i];
        cout<<arr[i]<<" ";
    }
    return 0;
}