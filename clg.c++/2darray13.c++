// wap to print the multiplication of two matrices given by the user.
# include <iostream>
using namespace std;
int main(){
    int m=2;
    int n=2;
    int arr[m][n];
    int brr[m][n];
    int crr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"enter the element no.:"<<endl;
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"enter the element no.:"<<endl;
            cin>>brr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            crr[i][j]=arr[i][j]*brr[i][j]+arr[i+1][j]*brr[i][j+1];
        }
        cout<<endl;
    }

    return 0;
}