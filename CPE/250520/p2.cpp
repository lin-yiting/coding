#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while((cin>>n)&&n!=0){
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
            v.push_back(vector<int>());
            for(int j=0;j<n;j++){
                int tmp;
                cin>>tmp;
                v[i].push_back(tmp);
            }
        }
        vector<int> odd_row,odd_col;
        for(int r=0;r<n;r++){
            int sum=0;
            for(int c=0;c<n;c++){
                sum+=v[r][c];
            }
            if(sum%2==1){
                odd_row.push_back(r);
            }
        }
        for(int c=0;c<n;c++){
            int sum=0;
            for(int r=0;r<n;r++){
                sum+=v[r][c];
            }
            if(sum%2==1){
                odd_col.push_back(c);
            }
        }
        if(odd_row.empty() && odd_col.empty()){
            cout<<"OK"<<endl;
        }
        else if(odd_row.size()==1 && odd_col.size()==1){
            cout<<"Change bit ("<<odd_row[0]+1<<","<<odd_col[0]+1<<")"<<endl;
        }
        else{
            cout<<"Corrupt"<<endl;
        }
    }
}
