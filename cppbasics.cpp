#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c,sumofangle;
    int d;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
     cin>>b;
    cout<<"enter c"<<endl;
     cin>>c;
    sumofangle=a+b+c;
    d=sumofangle;
    if(d==180){
        cout<<"triangle can be formed";

    }
    else{
            cout<<"triangle cannot be formed";

    }
    return 0;
}
