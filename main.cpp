#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    if(n>=2){
        int num1=1;
        int num2=1;
        int num3;
        cout<<num1<<endl<<num2<<endl;
        for(int i=2;i<n;i++){
            num3=num1+num2;
            num1=num2;
            num2=num3;
            cout<<num3<<endl;
        }
    }else{
        cout<<"errore";
    }
    return 0;
}
