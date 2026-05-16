// print the sum of each row
/*# include <iostream>
using namespace std;
int main(){
    int n=3;
    int m=3;
    int arr[3][3]={{1,2,3},{4,1,8},{4,2,7}};
    int sum1=0;
    int sum2=0;
    int sum3=0;
    for(int i=0;i<m;i++){
        sum1+=arr[0][i];
        sum2+=arr[1][i];
        sum3+=arr[2][i];
    }
    cout<<"the sum of all the rows are :"<<endl;
    cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
    return 0;
}*/
// print the sum of each row by using recursion.
# include <iostream>
using namespace std;
int sum(int arr[3][3],int i,int j,int len,int s1,int s2,int s3){
    if(i==len-1) return s1;
    s1+=arr[0][i];
    s2+=arr[1][i];
    s3+=arr[2][i];
    if(i==2){
        cout<<endl<<s1<<endl;
        cout<<s2<<endl;
        cout<<s3<<endl;
    }
    return sum(arr,i+1,j+1,len,s1,s2,s3);
}
int main(){
    int n=3;
    int m=3;
    int arr[3][3]={{1,2,3},{4,1,8},{4,2,7}};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<sum(arr,0,0,len,0,0,0);
    return 0;
}