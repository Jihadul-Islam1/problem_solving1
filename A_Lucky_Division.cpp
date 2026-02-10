#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
int lucky[]={4,7,47,74,447,474,477,744,747,774};
for(int i:lucky){
      if(n%i==0){
         cout<<"YES"<<endl;
         return 0;
      }
}
        cout<<"NO"<<endl;
    return 0;
}
