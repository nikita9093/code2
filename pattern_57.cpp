/*Q- A
     B C
     C D E
     D E F G
*/
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            char ch = 'A'+i+j-2;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}