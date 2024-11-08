#include <iostream>
using namespace std;

int main(){
    string a,b,c;
    cin>>a;
    cin>>b;
    cout << a.size();
    cout << " ";
    cout << b.size()<<endl;;
    c = a + b;
    cout<<c <<endl;
    char a0 = a[0];
    char b0 = b[0];
    b[0] = a0;
    a[0] = b0;
    cout<<a;
    cout<<" ";
    cout<<b;
    return 0;
}
