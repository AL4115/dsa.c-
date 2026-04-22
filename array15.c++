// wap to copy the contents of one array into another in the reverse order.
# include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,5,3,4};
    /*int brr[5];
    cout<<"the contents of array brr are:"<<endl;
    for(int i=4;i>=0;i--){
        brr[i]=arr[i];
        cout<<brr[i]<<" ";
    }
    return 0;
}*/
// wap to reverse the array without using any extra array.
for(int i=4;i>=0;i--){
    cout<<arr[i]<<" ";
}
return 0;
}
