/* Q- 1
      2 1
      3 2 1
      4 3 2 1
      5 4 3 2 1*/

#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){  // Alternate method -> for(j=1;j<=i;j++){
            cout<<j<<" ";   //  cout<<i-j+1;}
    }
        cout<<endl;
    }
    return 0;
}