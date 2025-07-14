#include<bits/stdc++.h>
using namespace std;
#define END    cout<<"__"<<endl ;

void sum(){

    int nums ;
    cout<<"How Many numbers you want to Add?"<<endl ;
    cin>>nums ;
    double arr[nums+9] ;
    double  sum=0 ;
    cout<<"Enter the numbers to add: " <<endl;
    for(int i=0; i<nums;i++){
        cin>>arr[i] ;
        sum= sum+ arr[i] ;
    }
    cout<<"Result: "<<sum<<endl ;
    return; }

void mul(){

    int nums ;
    cout<<"How Many numbers you want to multiply?"<<endl ;
    cin >>nums;
    double arr[nums+9] ;
    double  mul=1 ;
    cout<<"Enter the numbers to multtiply: " <<endl;
    for(int i=0; i<nums;i++){
        cin>>arr[i] ;
        mul= mul * arr[i] ;
    }
    cout<<"Result: "<<mul<<endl ;
     return ;}



    int main() {
    char operation;
    double num1, num2;
    cout<<"**Welcome to my Calculator.**"<<endl;
    cout<<"i (nizam uddin shuvo) can help you calculate the results of the following operations."<<endl<<endl ;

    do {
        cout << "Calculator Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Clear Screen" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1/2/3/4/5/6): ";
        cin >> operation;

        switch (operation) {
            case '1':
                sum() ;
                END
                break;
            case '2':
                cout << "Enter two numbers to subtract: ";
                cin>>num1>>num2;
                cout << "Result: " << num1 - num2 <<endl;
                END
                break;
            case '3':
                mul();
                END
                break;
            case '4':
                cout << "Enter two numbers to divide: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 <<endl;
                }
                else {
                    cout << "Error! Division by zero is not allowed." <<endl;
                }
                END
                break;
            case '5':
                system("clear");
                break;
            case '6':
                cout << "Exiting the calculator. Goodbye!" << endl;
                END
                break;
            default:
                cout << "Invalid choice. Please select a valid option (1/2/3/4/5/6)." << endl;
                END
                break;
                }} while (operation != '6');
return 0;
}
