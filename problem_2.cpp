#include <iostream>
using namespace std;
int main () {
    int j,sum=0, sum1=0;
    cin>>j;
    for(int i=1;i<=j; i++){
        if(i%2!=0){
            sum+=i;
        }
    }
   
    for(int i=1; i<=j; i++){
        if(i%2==0){
            sum1+=i;
    }
        
    }
    cout<<sum<<" ";
    cout<<sum1;
    return 0;
}
