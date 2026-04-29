// wap to reverse the string.
# include <iostream>
# include <string.h>
using namespace std;
int main(){
    char str[110];
    puts("enter a string:");// automatically ek \n bhi deta hai.
    gets(str);
    string s;
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    cout<<"the size of string is:";
    cout<<size<<endl;
    for(int j=0,k=size-1;j<=k;j++,k--){
       char temp= str[j];
       str[j]=str[k];
       str[k]=temp;
    }
    cout<<str;
    return 0;
}