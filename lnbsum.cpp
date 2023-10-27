#include<iostream>
using namespace std;
int main(){
    int numbers[5];
    int sum = 0;
    cout<<"Enter all the numbers: ";
    for(int i=0;i<5;i++){
         cin>>numbers[i];
    }

    for(int i=0;i<5;i++){
        if(numbers[i]>=9){
            sum+=numbers[i];
        }
    }
    cout<<"sum of numbers is: "<<sum<<endl;
    return 0;
}