#include <iostream>
int dayOftheWeek(int,int,int ,int);

using namespace std;

int main()
{
int m,dm,century,yr;
cout << "ENTER THE DAY:";
cin >>dm;
cout <<"ENTER MONTH:";
cin>>m;
cout <<"ENTER YEAR:";
cin >> yr;

if(m==1){
     m=13;
     yr-=1;
}
else if(m==2){
    m=14;
    yr-=1;
}
century=yr/100;
yr%=100;
int day=dayOftheWeek(dm,m,century,yr);
cout << day;


    return 0;
}
int dayOftheWeek(int dm,int m,int century, int yrOfCentury){
   int dw=(dm+((26*(m+1))/10)+yrOfCentury+(yrOfCentury/4)+(century/4)+(5*century))%7;
    return dw;
    }
