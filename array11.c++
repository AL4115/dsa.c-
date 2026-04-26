// count the numbers of elements in the given array greater than a given number x.
# include <iostream>
using namespace std;
int main (){
    int x;
    cout<<"enter the number x:";
    cin>>x;
    int count=0;
    int arr[7]={8,3,9,7,2,4,6};
    for(int i=0;i<7;i++){
        if(arr[i]>x){
            count++;
        }
        else{}
    }
    cout<<count;
    return 0;
}