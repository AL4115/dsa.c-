// wap to sort a array in ascending order.
# include <iostream>
using namespace std;
int main(){
    int arr[5]={7,9,4,5,6};
    int v=arr[0];// pivot value
    int L= arr[0];
    int R= arr[4];
    for(int i=0;i<5;i++){
        if(L!=R){
            while(L<v && R>v){
            L++;
            R--;
            }
        }
        else if(L>=R){
            v=R;
        }
                
            }
            cout<<arr<<" ";
    return 0;
}