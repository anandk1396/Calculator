#include <iostream>
using namespace std;
int main(){
    int a,b,ch;
    while(ch<5){
        cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.EXIT";
        cin>>ch;
        switch(ch){
            case 1:{
                cin>>a>>b;
                cout<<a<<" + "<<b<<" = "<<a+b;}

            break;
            case 2:{cin>>a>>b;
                    cout<<a<<" - "<<b<<" = "<<a-b;}
            break;
            case 3:{cin>>a>>b;
                cout<<a<<" x "<<b<<" = "<<a*b;}
            break;
            case 4:{cin>>a>>b;
                cout<<a<<" / "<<b<<" = "<<a/b;}
            break;
        }
    }
}
