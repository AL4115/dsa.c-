// find the total number of pairs in the array whose sum is equal to the given value x.
# include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number x:";
    cin>>x;
    int count=0;
    int arr[10]={5,2,8,7,4,3,6,9,1,11};
    /*for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i]+arr[j]==x){
                count++;
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
            else{}
        }
    }
    cout<<"the total no. of possible pairs are:"<<count;
    return 0;
}*/
// count the number of triplets.
for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                    count++;
                }
            }
        }
    }
    cout<<"the total no. of possible triplets are:"<<count;

    return 0;
}