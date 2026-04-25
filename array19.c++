# include <iostream>
using namespace std;
int main(){
    //char arr[]={'a','b','c','d','e'};
    /*int n=sizeof(arr)/sizeof(arr[0]);
    char*p = &arr[n];
    for(int i=0;i<5;i++){
    cout<<(void*)p<<endl;
    p++;
    }
    return 0;
}
    */
// print the ascii values
/*int ch='F';// way1
cout<<ch<<endl;
return 0;
}
// way 2
char ch='3';
int x=(int)ch;
cout<<x<<endl;
return 0;
}*/
//int ch='\0'; null character whose ascii value is 0.
//cout<<ch<<endl;
// use of null character .
char arr[]={'H','E','L','L','O','\0'};
int i=0;
while(arr[i]!='\0'){
    cout<<arr[i];
    i++;
}
return 0;
}

