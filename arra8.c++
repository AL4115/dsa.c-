// wap to print the minimum number of all element .
# include <iostream>
# include <limits.h>
using namespace std;
int main (){
    int arr[5];
    for(int j=0;j<5;j++){
        cout<<"enter the element no.",j;
        cin>>arr[j];
    }
    int min=INT_MAX;
    for(int i=0;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
}
    cout<<min;
    return 0;
}
