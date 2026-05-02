// 2d array creation and printing the 2d array.
# include <iostream>
using namespace std;
int main(){
   /* int r=3;
    int c=3;
    int arr[r][c]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
};*/
/*for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
    cout<<arr[i][j]<<" ";
}
cout<<endl;
}
    return 0;
}*/
// printing the 2d array by taking input from user.
/*for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<"enter the element no.",arr[i][j];
        cin>>arr[i][j];
    }
}
cout<<"your 2d array is:"<<endl;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<arr[i][j]<<"  ";
    }
    cout<<endl;
}
return 0;
}
*/
// wap to take input by row and column.
/*int r;
cout<<"enter the no. of rows:";
cin>>r;
int c;
cout<<"enter the no. of columns:";
cin>>c;
int arr[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<"enter the element no.",arr[i][j];
        cin>>arr[i][j];
    }
}
cout<<"your 2d array is:"<<endl;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<arr[i][j]<<"  ";
    }
    cout<<endl;
}
return 0;
}*/
// without giving no. of rows it automatically take the no. of rows itself.
int arr[][3]={{1,2,3},{4,5,6}};
cout<<arr[1][0];
return 0;
}

