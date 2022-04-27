#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    while(n--)
    {
        int petya, vasya, tonya;
        cin>>petya>> vasya>>tonya;
        if(petya==1 && vasya==1 && tonya ==0){sum++;}
        if(petya==1 && vasya==1 && tonya ==1){sum++;}

        if(petya==1 && vasya==0 && tonya ==1){sum++;}
       // if(petya==1 && vasya==1 && tonya ==1){sum++;}

        if(petya==0 && vasya==1 && tonya ==1){sum++;}
        //if(petya==1 && vasya==1 && tonya ==1){sum++;}

    }
    cout<<sum<<endl;


    return 0;
}


