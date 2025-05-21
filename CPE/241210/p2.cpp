#include <iostream>
#include <iomanip>
using namespace std;

void PN(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){ sum+=i; }
    }
    if(sum==num){ cout<<"PERFECT"<<endl; }
    else if(sum<num){ cout<<"DEFICIENT"<<endl; }
    else if(sum>num){ cout<<"ABUNDANT"<<endl; }
}

int main()
{
    int n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n){
        if(n==0){
            cout<<"END OF OUTPUT"<<endl;
            return 0;
        }
        cout<<setfill(' ')<<setw(5)<<n<<"  ";
        PN(n);
    }
}
