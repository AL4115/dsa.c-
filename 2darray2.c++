// wap to store roll number and marks obtained by 4 student side by side in a matrix.
/*# include <iostream>
using namespace std;
int main(){
    int r=2;
    int c=4;
    int arr[r][c];
    cout<<"enter roll no. and marks of a student"<<endl;
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}*/

// wap to store 10 at every index of a 2d matrix with 5 rows and 5 columns.
# include <iostream>
using namespace std;
int main (){
    int r=5;
    int c=5;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j]=10;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}