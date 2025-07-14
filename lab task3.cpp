/*write a function that two parameters
to print all the odd numbers between a given range.
input the starting value of the range and ending value of the
range then,send them as */

#include<iostream>
using namespace std;

void findingOdd(int start ,int end ){
    for(int i=start; i<=end ; i++){
         if(i % 2 == 1){
            cout<<i<<" ";
         }
    }


}

int main(){
    int start, end;
    cout <<"enter starting number : ";
    cin>>start;

    cout<<"enter ending numbers : ";
    cin>>end;

    findingOdd(start, end);

}

