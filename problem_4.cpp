#include <iostream>
using namespace std;
int main () {
    int num1, num2, r, sum=0;
    cin>>num1;
    num2=num1;
    while(num1>0 )
    {
        r = num1 % 10;
        num1 = num1 /10;
        sum = sum + r;
    }
    cout << sum << endl;
    if(sum % 5==0) {
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    
    
    
    return 0;
}
