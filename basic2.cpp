#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int mark;

    cout<<"enter the mark"<<endl;
    cin>>mark;
    if(mark>=90){
        cout<<"grade A";
    }
    else if(mark>=80){
        cout<<"grade B";
    }

    else if(mark>=60){
        cout<<"grade C";
    }
   else if(mark>=35){
        cout<<"grade D";
    }
    else{
        cout<<"fail";
    }
    return 0;
}
