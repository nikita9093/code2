#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int sum=num1+num2;
    int product = num1*num2;
    if(product>500){
        cout<<sum;
    }
    else{
        cout<<"Hello LNB code is running fine";
    }
    return 0;
}