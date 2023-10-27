#include <iostream>
using namespace std;
int main () {
    int j;
    cin>>j;
    for(int i=1;i<=j; i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    for(int i=1; i<=j; i++){
        if(i%2==0){
            cout<<i<<" ";
    }
        
    }
        
    return 0;
}
