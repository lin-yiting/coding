#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a,b;
    while(cin>>a>>b){
        int counter=0;
        if(!(a)){
            return 0;
        }
        for(double i=a;i<=b;i++){
            if(sqrt(i)==(int)(sqrt(i))){
                counter++;
            }
        }
        cout<<counter<<endl;
    }
}
