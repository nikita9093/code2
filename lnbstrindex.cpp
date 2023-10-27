#include<iostream>
#include<string>
using namespace std;

int main(){
    string input;
    cout<<"Enter the string: ";
    cin>>input;
    int string_length = input.length();
    if(string_length>7){
        for(int i=0;i<string_length;i+=2){
            cout<<input[i];
        }
    }
    else{
         for(int i=1;i<string_length;i+=2){
            cout<<input[i];
         }
    }
    cout<<endl;
    return 0;
}