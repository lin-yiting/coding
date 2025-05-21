#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    char input;
    string str="";
    vector<string> list;
    while((input=getchar()) != EOF){
        if(isalpha(input)){
            str+=char(tolower(input));
        }
        else{
            if(str.length()!=0){
                list.push_back(str);
                str="";
            }
        }
    }
    sort(list.begin(), list.end());
    list.erase(unique(list.begin(), list.end()), list.end());
    for(int i=0;i<list.size();i++){
        cout<<list[i]<<endl;
    }
}
