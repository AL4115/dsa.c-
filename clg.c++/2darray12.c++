// wap to rotate the given array at 90 degree clockwise.
# include <iostream>
   using namespace std;
   int main(){
    int m=4;
    int n=4;
    int arr[m][n]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for(int i=0;i<m;i++){
        for(int j=n-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
   }

