#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        vector<int> list;
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            list.push_back(tmp);
        }
        int counter=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1-i;j++){
                if(list[j]>list[j+1]){
                    int tmp;
                    tmp=list[j];
                    list[j]=list[j+1];
                    list[j+1]=tmp;
                    counter++;
                }
            }
        }

        cout<<"Minimum exchange operations : "<<counter<<endl;
    }
}
