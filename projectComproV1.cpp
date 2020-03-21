
#include <iostream>
#include <string>

using namespace std ;

int main(){
    string name ;
    string word ;
    int start = 0 ;
    cout << "Hotel: Hello can you tell me your name ?\n";
    cout << "??????:" ;
    getline(cin,name) ;
    cout << "Hotel: Is there anything We can help you with ?\n" ;
    cout << name << ": " ;
    getline(cin,word) ;
    int end = word.find_first_of(" ") ;
    while(end != -1){
    if(word.substr(start,end-start) == "reservation"){
        cout << "bigloso" ;
        end = word.find_first_of(" ") ;
        break ;
        }
        start = end+1 ;
        end = word.find_first_of(" ",start);
    }
    while(end != -1){
    if(word.substr(start,end-start) == "description"){
        cout << "bigloso" ;
        end = word.find_first_of(" ") ;
        break ;
        }
        start = end+1 ;
        end = word.find_first_of(" ",start);
    }
    
    return 0 ;
}