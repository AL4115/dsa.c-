// wap to find the maximum and minimum element in the 2d array.
/*# include <iostream>
using namespace std;
int main(){
    int r=2;
    int c=2;
    int min;
    int max=0;
    int arr[r][c];
    cout<<"enter the no. of elements:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }  
        }
    }
    cout<<"the maximum element is:"<<" "<<max<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(min>arr[i][j]){
                min=arr[i][j];
            }
        }
    }
    cout<<"the minimum element is:"<<" "<<min;
    return 0;
}
    */
// same question by using recursion.
# include <iostream>
using namespace std;
int maximum(int arr[2][2],int max,int i,int j,int c,int r){
    if(i==2||j==2) return max;
    if(max<arr[i][j]){
        max=arr[i][j];
    }
    cout<<max;
    return maximum(arr,max,i+1,j+1,c,r);
}
int main(){
    int min;
    int max=0;
    int arr[2][2];
    int len = sizeof(arr)/sizeof(arr[0][0]);
    cout<<"enter the no. of elements:"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    cout<<maximum(arr,max,0,0,2,2);
    return 0;
}
