#ifndef INITIAL_H
#define INITIAL_H
#include <time.h>
#include <math.h>
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <sstream>
using namespace std;

// mettre un int sous sa forme charatere en conservant sa valeur exemple : 2='2'
inline string to_string(int x)
{
    stringstream ss;
    ss<<x;
    return ss.str();
}

int fact(int n)//factoriel
{
    if(n<2)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int aleatoire(int min , int max)//generer automatiquement les entiers
{
    //srand(time(NULL));
    return (rand()%(max-min+1))+min;

}

int somme(int n)//somme succesives
{
    return{(n==0)?0:n+somme(n-1)};
}

std::string tohexa(int n)//convertion en hexadecimal
{
    std::string moi="";
    int i=8;
    while(n!=0 && i>=0)
    {

        int reste=0;
        reste=n%16;
        if(reste==10)
        {
            moi='A'+moi;
        }
        if(reste==11)
        {
           moi='B'+moi;
        }
        if(reste==12)
        {
             moi='C'+moi;
        }
        if(reste==13)
        {
             moi='D'+moi;
        }
        if(reste==14)
        {
             moi='E'+moi;
        }
        if(reste==15)
        {
             moi='F'+moi;
        }
        if(reste<10)
        {
            moi=to_string(reste)+moi;
        }
        n/=16;
       i-=1;
    }
    return moi;
}

void tobin(int n)
{
    int i=7;
    int tab[8]={0};
    while(n!=0 && i>=0)
    {
        tab[i]=n%2;
        n/=2;
        i-=1;
    }
    for(int j=0;j<8;)
    {
        cout<<tab[j++];
    }
}

#endif // INITIAL_H
