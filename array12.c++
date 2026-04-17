// find the diff btw the sum of elements at even indices to odd indicces.
# include <iostream>
using namespace std;
int main(){
    int esum=0;
    int osum=0;
    int arr[7]={4,3,5,8,7,9,2};
    for(int i=0;i<7;i++){
        if(i%2==0){
            esum=esum+arr[i];
        }
        else{
            osum=osum+arr[i];
        }
    }
    int result=osum-esum;
    cout<<result;
    return 0;
}