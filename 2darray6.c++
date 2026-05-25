// given a matrix 'a' of dimension n x m and two coordinates (l1,r1) and (l2,r2) return the sum of the rectangle form (l1,r1)to(l2,r2).
# include <iostream>
using namespace std;
int add(int a[3][4],int sum,int i,int j,int l1,int l2,int r1,int r2){
    if(i==r2&&j==l2) return sum;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            sum+=a[i][j];
        }
    }
    return add(a,sum+=a[i][j],i+1,j+1,l1,l2,r1,r2);
}
int main(){
    int n=3;
    int m=4;
    int a[3][4]={{1,2,3,4},{5,0,6,7},{8,9,1,4}};
    cout<<add(a,0,0,0,0,1,0,2);
    return 0;
}