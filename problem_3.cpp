#include <iostream>
using namespace std;
int main () {
    int n, x1=0, x2=1, x3, sum =1;
    cin>>n;
    cout<<x1<<" "<<x2<<" ";

    for(int i=2; i<n; i++){
        x3 = x1 + x2;
        cout<<x3<<" ";
        sum +=x3;
        x1=x2;
        x2 = x3;
    }
    cout<<"\n";
    cout<<sum;
    return 0;
}
