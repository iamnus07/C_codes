/*initialize two integer arrays of different sizes
merge the input arrays and create a new array
then print the new array in reverse order*/

#include<iostream>
using namespace std;

int main (){
    int size1, size2;

    cout<<"enter first array size"<<endl;
    cin>>size1;
    int arr1[size1];
    cout<<"enter "<<size1<<"integer number: ";
    for(int i = 0; i<size1; i++){
        cin>>arr1[i];
    }

    cout<<"enter second array size"<<endl;
    cin>>size2;
    int arr2[size2];
    cout<<"enter "<<size2<<"integer number: ";
    for(int i = 0; i<size2; i++){
        cin>>arr2[i];
    }


    int count=0;
    int newArray[size1+size2];

    for(int i=0; i<size1;i++){
        newArray[count++]=arr1[i];
    }
    for(int i = 0; i<size2;i++){
        newArray[count++]=arr2[i];
    }

    for (int i=(size1+size2)-1 ; i>=0; i--){
        cout<<newArray[i]<<" ";
    }


}
