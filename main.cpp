#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <conio.h>
using namespace std;
int opcja,g=0,dlu,d;
string z, x[]={"spadochron","auto","ahmed","pies","kot","golf","zegar","poduszka","tratwa","kura","wrona"};
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
    //cout<<++opcja<<endl ;
    z=x[opcja-1];

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
