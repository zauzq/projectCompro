
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
#ifdef _MSC_VER
#define getch() _getch()
#endif

using namespace std ;

void Shownamehotel(){
    // system("mode 100,40");
    // system("COLOR AF");
    cout << "        **************************************************************\n" ;
    cout << "        *                                                            *\n" ;
    cout << "        *                   Compro project Hotel                     *\n";
    cout << "        *                                                            *\n" ;
    cout << "        **************************************************************\n" ;
    // getch();
}

int main(){
    int age , hmn , room , hmr ,room1 ,room2, sum1,sum2 ,total ,yn,g ;
    string name ,surname, wf ,number ;
    system("mode 0,0");
    system("COLOR 3F");
    do
    {
        system("cls");
        Shownamehotel();
            cout<< endl << "        Please input your presonal information"<<endl;
            cout<< endl << "        **************************************************************"<<endl;
            cout<<endl;
            cout<<"        Please input your name : ";
            cin>>name ;
            cout<<"        Please input your surname : ";
            cin>>surname ;
            cout<<"        Please input your age : ";
            cin>> age ;
            cout<<"        Please input your phone number : " ;
            cin >> number ;
            system("cls") ;

        Shownamehotel() ;
            cout << endl ;
            cout<<"        Please input your presonal information"<<endl;
            cout<<endl;
            cout<<"        **************************************************************"<<endl;
            cout<<endl;
            cout<<"        Name : "<<name <<" "<<surname<<endl<<endl ;
            cout<<"        ______________________________________________________________"<<endl<<endl ;
            cout<<"        When for ?"<<endl ;
            cout<<"        Day (d/m/25xx) :" ;
            cin>>wf ;
            cout<<"        How many night ? :" ;
            cin>>hmn ;
            cout<<"        How many guests will thre be ? :" ;
            cin >> g ;
            cout << endl << "        And would you like a romm ?"<<endl ;
            cout << "         1. A double room. 800 bath/night :";
            cin >> room1 ;
            sum1=(800*room1)*hmn;
            cout << "         2. A twin room. 600 bath/night :" ;
            cin >> room2 ;
            sum2=(600*room2)*hmn;
            total = sum1+sum2 ;
            cout<<"        Price : "<<total<<" bath"<<endl ;
        system("cls") ;
        Shownamehotel() ;
            cout<<"        Name : "<<name<<" "<<surname<<endl;
            cout<<"        Age : "<<" years old"<<endl ;
            cout<<"        Tel. : "<<number<<endl ;
            cout<<"        Day "<<wf<<endl ;
            cout<<"        How long will you stay : "<<hmn<<" night"<<endl ;
            cout<<"        guests : "<<g<<" people"<<endl;
            cout<<"         1. A double room. : "<<room1<<endl ;
            cout<<"         2. A twin room. : "<<room2<<endl ;
            cout<<"        Price : "<<total<<" bath"<<endl ;
            cout<<"        ___________________________________________________________" ;
            cout<<endl ;
            cout<<"        Please verty that the information is correct or not."<<endl ;
            cout<<"        Yes =1 or No =0"<<endl;
            cout<<"        Input number : ";
            cin >> yn ;
    }
    while(yn == 0) ;
        if(yn == 1)
        {
            system("cls");
            Shownamehotel();
            cout << endl ;
            cout << "        ********************thaks completion list*********************" ;
        }
        getch();
    return 0 ;
}