#include <bits/stdc++.h>
using namespace std;
int main () {
int n;
cin>>n;
int gio = n/3600;
int phut = ((n%3600)/60);
int giay = (n%3600)%60;
 if (gio<10 && phut<10 && giay<10)
 {cout<<setprecision(2)<<fixed<<"0"<<gio<<":0"<<phut<<":0"<<giay<<endl;
 }
 else  if (gio>10 && phut<10 && giay<10)
 {cout<<setprecision(2)<<fixed<<gio<<":0"<<phut<<":0"<<giay<<endl;
 }
 else  if (gio>10 && phut>10 && giay<10)
 {
 	cout<<setprecision(2)<<fixed<<gio<<":"<<phut<<":0"<<giay<<endl;}
 else  if (gio<10 && phut>10 && giay<10){
 
  	cout<<setprecision(2)<<fixed<<"0"<<gio<<":"<<phut<<":0"<<giay<<endl;
 }
 else  if (gio<10 && phut<10 && giay>10)
 { cout<<setprecision(2)<<fixed<<"0"<<gio<<":0"<<phut<<":"<<giay<<endl;
 }
 else  if (gio<10 && phut>10 && giay>10) {
 	cout<<setprecision(2)<<fixed<<"0"<<gio<<":"<<phut<<":"<<giay<<endl;
 }
 else
 {
 	cout<<setprecision(2)<<fixed<<gio<<":"<<phut<<":"<<giay<<endl;
  } 
return 0;
}
