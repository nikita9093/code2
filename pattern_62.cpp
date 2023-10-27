/*Q- 
      1 2 3 4
        2 3 4
          3 4
            4
*/
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}