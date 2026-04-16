#  include <iostream>
using namespace std;
void swap(int x[]){
    int temp=x[0];
     x[0]=x[1];
    x[1]=temp;
    cout<<x[0];
    cout<<x[1];
}
int main (){
    int arr[2]={2,3};
    cout<<arr[0];
    cout<<arr[1]<<endl;
    swap(arr);
    return 0;
}