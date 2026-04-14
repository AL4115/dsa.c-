// calculate all the elements of the array
# include <iostream>
using namespace std;
/*int main(){
    int sum=0;
    int arr[5];
    for(int j=0;j<5;j++){
        cout<<"enter the element no.",j;
        cin>>arr[j];
    }
    for(int i=0;i<5;i++){
        sum = sum+arr[i];
    }
    cout<<sum;
    return 0;
}*/
// wap to calculate the product of all element in an array.
int main(){
    int pro=1;
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"enter the element no.",i;
        cin>>arr[i];
    }
    for(int j=0;j<5;j++){
        pro = pro*arr[j];
    }
    cout<<pro;
}