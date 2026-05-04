// wap to add two matrices.
/*# include <iostream>
using namespace std;
int main(){
    int r=2;
    int c=3;
    int arr[r][c];
    int brr[r][c];
    int result[r][c];
    cout<<"enter the elements of array arr:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter the elements of array brr:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>brr[i][j];
        }
    }
    cout<<"your 2 arrays are:"<<endl;
    cout<<"your array 1:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"your array 2 :"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    // for adding
    cout<<"the sum of array is:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            result[i][j]=arr[i][j]+brr[i][j];
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
    */
// wap to add two matrices without using extra matrix.
/*# include <iostream>
using namespace std;
int main(){
    int r=2;
    int c=3;
    int arr[r][c];
    int brr[r][c];
    cout<<"enter the elements of array arr:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter the elements of array brr:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>brr[i][j];
        }
    }
cout<<"the sum of array is:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           arr[i][j]+=brr[i][j];
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
    */
// wap to find the sum of a given matrix of n(rows) x m(columns).
# include <iostream>
using namespace std;
int main(){
    int r=2;
    int c=3;
    int arr[r][c];
    int sum=0;
    cout<<"enter the elements of array arr:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"the sum of a given matrix is:"<<endl;
    cout<<sum;
    return 0;
}


