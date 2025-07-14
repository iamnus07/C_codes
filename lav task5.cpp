// factorial & prime number
#include<iostream>
using namespace std;

int main(){
    int num;
    cout <<"enter an integer number :";
    cin>>num;


    int flag =0;
    for(int i = 2; i<=num/2; i++){

        if( num% i ==0){
               flag = 1;
                break;
        }
        }
    if(flag==0){
            int factorial =1 ;
            for (int i=2; i<=num; i++){
            factorial=factorial*i;
            }
            cout<<"factorial of" <<num<<" = "<<factorial<<endl;
            cout<<"prime number";

    }
    else{cout<<"eror not a prime number"<<endl;}




}
