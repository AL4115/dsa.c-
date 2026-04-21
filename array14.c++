// wap to find the second largest element of a given array.
# include <iostream>
# include <limits.h>
using namespace std;
int main(){
    int arr[5]={-1,-6,-5,-8,-7};
    int max=INT_MIN;
    int smax=INT_MAX;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax){
            smax=arr[i];
        }
        else{
            smax;
        }
    }
    cout<<"largest number is:"<<max<<endl;
    cout<<"second largest number is:"<<smax;
    return 0;
}