// print the length of string 
# include <iostream>
using namespace std;
/*int length(char str[],int n){
    if(str[n]=='\0') return n;
    return length(str,n+1);
}
int main(){
    char str[]="avani lodhi";
    cout<<length(str,0);
    return 0;
}*/

// wap to count the no. of 0 in array
/*int count(int n[],int i,int z,int len){
    if(i==len) return z;
        if(n[i]==0){
            z++;
        }
        return count(n,i+1,z,len);
    }

int main(){
    int n[8]={0,0,4,0,0,0,8,0};
    int len = sizeof(n)/sizeof(n[0]);
    cout<<count(n,0,0,len);
    return 0;
}*/

//wap to count the no. of vowels
/*int vowel(char str[],int n,int v){
    if(str[n]=='\0') return v;
    if(str[n]=='a'||str[n]=='e'||str[n]=='i'||str[n]=='o'||str[n]=='u'){
        v++;
    }
    return vowel(str,n+1,v);
}
int main(){
    char str[]="aeiou";
    cout<<vowel(str,0,0);
    return 0;
}*/

// wap to reach n to 1 by using n-1,n/2and n/3 steps
