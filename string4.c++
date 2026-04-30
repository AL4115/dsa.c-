// string as pointer.
# include <iostream>
using namespace std;
/*int main(){
    char str[10]="avani";
    char *ptr = &str[0];
    char *ptr1=str;
    cout<<&str<<endl;
    cout<<&str<<endl;
    return 0;
}*/
// printing string by using pointers.
int main(){
    char str[]="hello world";
    char *ptr=str;
    cout<<&str<<endl;
    int i=0;
    while(*ptr!='\0'){
        cout<<*ptr;
        ptr++;
        i++;
    }
    return 0;
}