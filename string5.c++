// ques:
// ques1: wap to print only the characters of even indexes
# include <iostream>
using namespace std;
int main(){
    /*char str[15];
    puts("enter the string:");
    gets(str);
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        if(i%2==0){
            cout<<str[i];
        }
        else{}
        i++;
        size++;
    }

    return 0;
}*/
//ques2: print the even and  indexed element in different string.
/*char str[15];
    puts("enter the string:");
    gets(str);
    int size=0;
    char estr;
    int i=0;
    while(str[i]!='\0'){
        if(i%2==0){
            estr=str[i];
            cout<<estr;
            estr++;
        }
        else{
        }
        i++;
        size++;
    }
    return 0;
}*/
// ques3:wap to print the only vowel char
/*char str[15];
    puts("enter the string:");
    gets(str);
    int size=0;
    //char vowel=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]='a'||'e'||'i'||'o'||'u'){
          // cout<<str[i];
        }
        else{}
        i++;
        size--;
        cout<<str[i];
    }
        return 0;
}
*/
// ques4: wap to string is a palindrome or not by using recursion.
char str[15];
    puts("enter the string:");
    gets(str);
    int m=0;
    int size=0;
    int n=size[str]-1;
    cout<<str;
    for(int i=0;i<size[str];i++){
        for(int j=size[str]-1;j>=0;j--){
            if(str[i]==str[j]){
                i++;
                j--;
            }
        }
    }
    return 0;
}



    

