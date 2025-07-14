//matrix addition between 3 matrix

#include <iostream>
using namespace std;

int main() {
    int arr1[3][3],arr2[3][3],arr3[3][3];

    cout<<"enter number for first 3X3 matrix:";
    for(int i = 0 ; i<3; i++ ){
        for (int j =0 ;j<3; j++){
            cin>>arr1[i][j];
        }

    }

     cout<<"enter number for second 3X3 matrix:";
     for(int i = 0 ; i<3; i++ ){
        for (int j =0; j<3; j++){
            cin>>arr2[i][j];
        }

    }

     cout<<"enter number for third 3X3 matrix:";
     for(int i = 0; i<3; i++ ){
        for (int j =0;j<3; j++){
            cin>>arr3[i][j];
        }

    }

     cout<<"addition of 3 matrix";
     for(int i = 0; i<3; i++ ){
        for (int j =0;j<3; j++){
            cout<<arr1[i][j]+ arr2[i][j]+arr3[i][j] <<" ";
        }
        cout<<endl;

    }


}
