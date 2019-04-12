#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace::std;

struct datanilai
{
string nHuruf;
double [3];
};

double input(string text){
double angka;
cout<<" MASUKAN NILAI"<<text<<" : "; cin>>angka;
return angka;
}

void grade (double a){
if(a<=20)
    cout<<"E";
else if(a<=40)
    cout<<"D";
else if(a<=60)
    cout<<"C";
else if(a<=80)
    cout<<"B";
else if(a<=100)
    cout<<"A";};

main(){
double uts,uas,tugas,absen,total;
uts = input("\nUTS :");
uas = input("\n UAS :");
tugas = input ("\n TUGAS :");
absen = input("\n ABSEN :");
char nHuruf;
total = uts*0.2 + uas*0.3 + tugas*0.35 + absen*0.15;
cout<<"nilai total :"<<total<<endl;
cabang(total);
}

