// double call in recursion.
// print n number fibonacchi serires.
# include <iostream>
using namespace std;
/*int fibo(int n){
    if(n<=0);
    return n;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<fibo(6);
    return 0;
}*/
// substring.
void subset(string p,string up){
    if(up.empty()){
        cout<<p<<endl;
        return ;
    }
    char ch=up[0];
    // include
    subset(p+ch,up.substr(1));
    // exclude
    subset(p,up.substr(1));
}
int main(){
    string str="ab";
    subset(" ",str);
    return 0;

}
/*
void path(string str,int r,int c){
    if(r==1&&c==1){
        cout<<str<<endl;
        return ;
    }
    if(r>1)path(str+ "D",r-1,c);
    if(c>1)path(str+"R",r,c-1);
}
int main(){
    int r=3;
    int c=3;
    path(" ",r,c);
    return 0;
}*/
// print the maximum sum of array except adjacent value.