#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
#ifdef _MSC_VER
#define getch() _getch()
#endif

using namespace std ;

void Shownamehotel(){

    cout << "                           **************************************************************\n" ;
    cout << "                           * *  *                                                  *  * *\n" ;
    cout << "                           **  *                                                    *  **\n" ;
    cout << "                           * *                 Compro project Hotel                   * *\n";
    cout << "                           **  *                                                    *  **\n" ;
    cout << "                           * *  *                                                  *  * *\n" ;
    cout << "                           **************************************************************\n" ;
    
}

int main(){
    int age , hmn , room , hmr ,room1 ,room2, sum1,sum2 ,total ,yn,g ;
    string name ,surname, wf ,number ;
    string space = "                           " ;
    system("mode 0,0");
    system("COLOR 3F");
    do
    {
        system("cls");
        Shownamehotel();
            cout<< endl << space << "Please input your presonal information"<<endl;
            cout<< endl << space <<  "______________________________________________________________"<<endl;
            cout<<endl;
            cout<< space << "Please input your name : ";
            cin>>name ;
            cout<< space << "Please input your surname : ";
            cin>>surname ;
            cout<< space << "Please input your age : ";
            cin>> age ;
            cout<< space << "Please input your phone number : " ;
            cin >> number ;
            system("cls") ;

        Shownamehotel() ;
            cout << endl ;
            cout<< space << "Please input your presonal information"<<endl;
            cout<<endl;
            cout<< space << "______________________________________________________________"<<endl;
            cout<<endl;
            cout<< space << "Name : "<<name <<" "<<surname<<endl ;
            cout<< space << "Age  : "<<age <<endl ;
            cout<< space << "Phone number :"<< number <<endl;
            cout<< space << "______________________________________________________________"<<endl<<endl ;
            cout<< space << "When for ?"<<endl ;
            cout<< space << "Day (d/m/25xx) :" ;
            cin>>wf ;
            cout<< space << "How many night ? :" ;
            cin>>hmn ;
            cout<< space << "How many guests will thre be ? :" ;
            cin >> g  ;
            cout<<space << "And would you like a romm ?"<<endl ;
            cout << space <<  "1. A double room. 800 bath/night :";
            cin >> room1  ;
            sum1=(800*room1)*hmn;
            cout << space <<  "2. A twin room. 600 bath/night :" ;
            cin >> room2 ;
            sum2=(600*room2)*hmn;
            total = sum1+sum2 ;
            cout<< space << "Price : "<<total<<" bath"<<endl ;
        system("cls") ;
        Shownamehotel() ;
            cout<< space << "Name : "<<name<<" "<<surname<<endl;
            cout<< space << "Age : "<<" years old"<<endl ;
            cout<< space << "Tel. : "<<number<<endl ;
            cout<< space << "Day "<<wf<<endl ;
            cout<< space << "How long will you stay : "<<hmn<<" night"<<endl ;
            cout<< space << "guests : "<<g<<" people"<<endl;
            cout<< space << " 1. A double room. : "<<room1<<endl ;
            cout<< space << " 2. A twin room. : "<<room2<<endl ;
            cout<< space << "Price : "<<total<<" bath"<<endl ;
            cout<< space << "______________________________________________________________" ;
            cout<<endl ;
            cout<< space << "Please verty that the information is correct or not."<<endl ;
            cout<< space << "Yes =1 or No =0"<<endl;
            cout<< space << "Input number : ";
            cin >> yn ;
    }
    while(yn == 0) ;
        if(yn == 1)
        {
            system("cls");
            Shownamehotel();
            cout << endl ;
            cout << space <<  "********************thaks completion list*********************" ;
        }
        getch();
    return 0 ;
}
