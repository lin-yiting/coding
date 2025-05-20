#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int i=1;
    while(cin>>input){
        if(input=="#"){
            return 0;
        }
        cout<<"Case "<<i<<": ";
        i++;
        if(input=="HELLO"){ cout<<"ENGLISH"<<endl; }
        else if(input=="HOLA"){ cout<<"SPANISH"<<endl; }
        else if(input=="HALLO"){ cout<<"GERMAN"<<endl; }
        else if(input=="BONJOUR"){ cout<<"FRENCH"<<endl; }
        else if(input=="CIAO"){ cout<<"ITALIAN"<<endl; }
        else if(input=="ZDRAVSTVUJTE"){ cout<<"RUSSIAN"<<endl; }
        else{ cout<<"UNKNOWN"<<endl; }
    }
}
