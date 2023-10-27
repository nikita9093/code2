#include<iostream>
using namespace std;
int main(){
    int l1[]={11,21,24,12,18};
    int l2[]={14,44,25,37,13};
    int l3[10];
    int index=1;
    for(int i=0;i<5;i++){
        if(i%2==0){
            l3[index]=l1[i];
            index++;
        }
    }
    for(int i=0;i<5;i++){
       if(i%2==1){
        l3[index]=l2[i];
        index++;
       } 
    }
    cout<<"l3=[";
    for(int i=1;i<index;i++){
        cout<<l3[i];
        if(i<index-1){
            cout<<",";
        }
    }
    cout<<"] ";
    return 0;
}