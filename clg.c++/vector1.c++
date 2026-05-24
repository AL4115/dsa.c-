// creation 
/*# include <iostream>
# include <vector>
using namespace std;
int main(){
    //vector<int>vec={1,2,3};// create with element
    //cout<<vec[1];
    vector<int>vec(4,2);  // create vector with value
    cout<<vec[2]<<endl;
    vector<int>v(4,1);
    for(int i:v){
        cout<<i;
    }
    return 0;
}*/

//different functions of vectors.
/*# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    cout<<"size = "<<v.size()<<endl;  // print size of vector.
    v.push_back(100);   // add the element at end of the vector.
    cout<<"size = "<<v.size()<<endl; 
    v.pop_back();  // delete the last element of vector. 
    cout<<"size = "<<v.size()<<endl; 
     for(int i:v){
        cout<<i<<" ";
    }
   cout<<v.front()<<endl;   // print the first value of vector.
   cout<<v.back()<<endl;    // print the last value of vector.
   cout<<v.at(1)<<endl;
    return 0;
}*/
# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(0);
    cout<<"size = "<<vec.size()<<endl;         //3
    cout<<"capacity = "<<vec.capacity()<<endl;  //4
    vec.push_back(4);
    vec.push_back(5);
    cout<<"size = "<<vec.size()<<endl;  //5
    cout<<"capacity = "<<vec.capacity()<<endl;   //8


    return 0;
}
