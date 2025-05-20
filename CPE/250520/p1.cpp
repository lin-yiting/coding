#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int c=1;
    while(cin>>n){
        bool isB2=true;
        vector<int> l;
        map<int, int> counter;
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            l.push_back(tmp);
        }
        if(!(is_sorted(l.begin(), l.end()))){
            isB2=false;
        }
        for(int a=0;a<n;a++){
            for(int b=a;b<n;b++){
                map<int, int>::iterator iter;
                iter=counter.find(l[a]+l[b]);
                if(iter!=counter.end()){
                    isB2=false;
                }
                else{
                    counter[l[a]+l[b]]=1;
                }
            }
        }
        cout<<"Case #"<<c<<": It is ";
        if(isB2){
            cout<<"a B2-Sequence."<<endl<<endl;
        }
        else{
            cout<<"not a B2-Sequence."<<endl<<endl;
        }

        c++;
    }
}
