
#include <iostream>
#include <string>

using namespace std ;

void Shownamehotel(){
    cout << "               **************************************************************\n" ;
    cout << "               *                                                            *\n" ;
    cout << "               *                   Compro project Hotel                     *\n";
    cout << "               *                                                            *\n" ;
    cout << "               **************************************************************\n" ;
}

int main(){
    int age , hmn , room , hmr ,room1 ,room2, sum1,sum2 ,total ,yn,g ;
    string name ,surname, wf ,number ;
    do{
        system("cls");
        Shownamehotel();
            cout<<"Please input your presonal information"<<endl;
            cout<<"**************************************"<<endl;
            cout<<endl;
            cout<<"Please input your name : ";
            cin>>name ;
            cout<<"Please input your surname : ";
            cin>>surname ;
            cout<<"Please input your age : ";
            cin>> age ;
            cout<<"Please input your phone number : " ;
            cin >> number ;
            system("cls") ;

        Shownamehotel() ;
        cout << endl ;
            cout<<"Please input your presonal information"<<endl;
            cout<<"**************************************"<<endl;
            cout<<endl;
            cout<<"Name : "<<name <<" "<<surname<<endl<<endl ;
            cout<<"________________________________"<<endl<<endl ;
            cout<<"When for ?"<<endl ;
            cout<<"Day (d/m/25xx) :" ;
            cin>>wf ;
            cout<<"How many night ? :" ;
            cout<<"How many guests will thre be ? :" ;
            cin >> g ;
            cout << endl << "And would you like a romm ?"<<endl ;
            cout << " 1. A double room. 600bath/night :";
            cin >> room1 ;
            sum1=(600*room1)*hmn;
            

    }

    return 0 ;
}