// find the maximum value of all elements in the array.
# include <iostream>
# include <limits.h>
using namespace std;
int main(){
    int arr[5];
    for(int j=0;j<5;j++){
        cout<<"enter the element no.",j;
        cin>>arr[j];
    }
    int max=INT_MIN;
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
}
    cout<<max;
    return 0;
}