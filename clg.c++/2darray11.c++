// given a matrix having 0-1 only,find the row with the maximum number by 1's
/*# include <iostream>
using namespace std;
int main(){
    int m=3;
    int n=3;
    int max=0;
    int rowindex=-1;
    int arr[m][n]={{1,0,1},{1,1,1},{0,1,0}};
    for(int i=0;i<m;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        cout<<count<<endl;
        if(max<count){
            max=count;
            rowindex=i;
        }
    }
    cout<<"the row having maximum no. of 1's is:"<<rowindex;
    return 0;
}
    */
// wap to print the transpose of matrix entered by the user.
/*# include <iostream>
using namespace std;
int main(){
    int m=3;
    int n=3;
    int temp[n][m]={ };
    int arr[m][n]={{1,2,3},{0,2,4},{6,7,1 }};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i];
                }
        cout<<endl;
    }
    return 0;
}*/
// wap to print the transpose of a matrix in a single array
/*# include <iostream>
using namespace std;
int main(){
    int m=2;
    int n=3;
    int temp[n][m]={ };
    int arr[m][n]={{1,2},{0,2},{6,7 }};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}*/
