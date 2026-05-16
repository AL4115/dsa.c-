// print odd and even numbers.
/*# include <iostream>
using namespace std;
int main(){
    int m=3;
    int n=3;
    int arr[m][n]={{1,2,8},{7,8,9},{2,7,4}};
    int evencount =0;
    int oddcount=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]%2==0 ){
                evencount++;
            }
            else {
                oddcount++;
            }
            
        }
    }
    cout<<"the even numbers are:"<<" "<<evencount<<endl;
    cout<<"the no. of odd numbers are:"<<" "<<oddcount;
    return 0;
}
    */
   // print the diagonal element
   /*# include <iostream>
   using namespace std;
   int main(){
    int m=4;
    int n=3;
    int arr[m][n]={{1,2,8,5},{7,8,9,2},{1,2,7,4}};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<arr[i][j]<<"  ";
            }
            else{

            }
        }
    }

    return 0;
   }*/
  // print the sum of diagonal elements.
  /*# include <iostream>
   using namespace std;
   int main(){
    int m=4;
    int n=3;
    int sum=0;
    int arr[m][n]={{1,2,8,5},{7,8,9,2},{1,2,7,4}};
    cout<<"the diagonal elements are:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<arr[i][j]<<"  ";
                sum+=arr[i][j];
            }
            else{

            }
        }
    }
    cout<<endl<<"the sum of diagonal elements are:"<<sum;
    return 0;
}*/
// print the diagonal element only even number and also print their sum.
/*# include <iostream>
   using namespace std;
   int main(){
    int m=4;
    int n=3;
    int sum=0;
    int arr[m][n]={{1,2,8,5},{7,8,9,2},{1,2,2,4}};
    cout<<"the diagonal elements are:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j && arr[i][j]%2==0){
                cout<<arr[i][j]<<"  ";
                sum+=arr[i][j];
            }
            else{

            }
        }
    }
    cout<<endl<<"the sum of diagonal elements are:"<<sum;
    return 0;
}*/

