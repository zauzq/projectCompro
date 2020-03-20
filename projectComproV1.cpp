
#include <iostream>
#include <string>

using namespace std ;

int main(){
    string name ;
    string word ;
    cout << "Hotel: Hello can you tell me your name ?\n";
    cout << "??????:" ;
    getline(cin,name) ;
    cout << "Hotel: Do you want to hotel reservation ?\n" ;
    cout << name << ": " ;
    getline(cin,word) ;

    return 0 ;
}