//normal and reverse print

#include <iostream>
using  namespace std;
int main (){
    int arr[10] ={12,32,43,1,54,53,15,64,3,13};

    cout<<"normal : ";
    for(int i=0; i<10;i++){
        cout<<arr[i]<<" " ;
    }

    cout<<endl<<"reverse : ";
    for(int i = 9;i>0; i--){
        cout<<arr[i]<<" ";
    }





return 0;}
