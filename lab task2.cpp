//how many  numbers odd and even
#include<iostream>
using namespace std;

int main(){
    int arr[10];

    cout<<"PLEASE ENTER 10 INTEGER NUMBER: ";
    for(int i = 0; i<10; i++) {
        cin>>arr[i];
    }
    int evenCount = 0, oddCount = 0;
    for(int i = 0; i<10; i++) {
        if(arr[i] % 2==0){
            evenCount++;
        }
        else{oddCount++;}
    }
    cout<<"odd numbers :"<< oddCount<<endl;
    cout<<"even numbers :"<<evenCount<<endl;

}
