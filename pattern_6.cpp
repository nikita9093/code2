/* Q- 1
      2 6
      3 7 0
      4 8 1 3
      5 9 2 4 5*/
      #include<iostream>
      using namespace std;
      int main(){
        int n,i=1,j=1;
        cin>>n;
        int result,diff;
        
        for(i=1;i<=n;i++){
            result = i;
            diff = n-1;
            for(j=1;j<=i;j++){
                cout<<result%10<<" ";
                result = result + diff;
                diff--;
            }
            cout<<endl;
        }
        return 0;
      }