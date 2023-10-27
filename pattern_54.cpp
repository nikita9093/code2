/*Q- A B C
     B C D 
     C D E
*/
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        char value = i+j+'A'-2;
        cout<<value<<" ";
         }
        cout<<endl;
    }
    return 0;
}
/*Alternate Method 
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        char ch = 'A' + i - 1;
        for(j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
*/