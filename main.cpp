#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <conio.h>
using namespace std;
int opcja,g=0,dlu,d;
string x1="spadochron",x2="auto",x3="ahmed",x4="pies",x5="kot",x6="golf",x7="zegar",x8="poduszka",x9="tratwa",x10="kura",x11="wrona",z;
char y,h,c[20];

int main()
{
Play:
    g=0;
    dlu=0;
    opcja=0;
    system("cls");
    cout << "wisielec" << endl;
    srand(time(NULL));
    opcja=rand() % 11;
    cout<<++opcja<<endl ;
    switch(opcja)
    {
    case 1:
        z=x1;
        break;
    case 2:
        z=x2;
        break;
    case 3:
        z=x3;
        break;
    case 4:
        z=x4;
        break;
    case 5:
        z=x5;
        break;
    case 6:
        z=x6;
        break;
    case 7:
        z=x7;
        break;
    case 8:
        z=x8;
        break;
    case 9:
        z=x9;
        break;
    case 10:
        z=x10;
        break;
    case 11:
        z=x11;
        break;

    default:
        cout<<"coś się zepsuł"<<endl;
        exit(0);
        break;
    }

    dlu = z.length();
    cout<<dlu<<endl;
    for(int d=0; d<dlu; d++)
    {
        c[d]='-';
        cout<< c[d];
    }

Gra:

    cout<<endl<<7-g<<" -liczba żyć "<<"wpisz literę"<<endl;
    y = getch();
    g++;

    for(int f=0; f<dlu; f++)
    {
        if(y==z[f])
        {
            c[f]=z[f];
            int k=0;
            k++;
            if(k=1)
                g--;
        }
    }
    for(int vv=0; vv<dlu; vv++)
    {
        cout<< c[vv];
    }
    if(g==7)
    {
        cout<<endl<<"przegrałeś ";
Koniec:
        cout<<"gramy dalej?[t/n] "<<endl;
        cin>>h;
        switch(h)
        {
        case 't':
            goto Play;
            break;
        case 'T':
            goto Play;
            break;
        default:
            exit(0);
        }
    }
    int u=0;
    for(int f=0; f<dlu; f++)
    {
        if(c[f]!='-')
        {

            u++;
            if(u==dlu)
            {
                cout<<endl<<"wygrałeś!! ";
                goto Koniec;
            }
        }

    }

    goto Gra;
    return 0;
}
