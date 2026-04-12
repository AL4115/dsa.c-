// taking input from user 
# include <iostream>
using namespace std;
int main (){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"enter the element:";
        cin>>arr[i];
    }
    cout<<"your array is:"<<endl;
    for(int j=0;j<5;j++){  
        cout<<arr[j]<<" ";
    }
    return 0;
}