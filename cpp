/*
 Выполните подсчет количества значений по разным диапазонам и результаты запишите в одну строку через пробелы.
	https://drive.google.com/open?id=0BzfPP2u0U3CsOTA1c3RkbDZFMFU
	For example: "1000 2000 3000 4000 5000 6000"

	Range1: 100 < x < 150 
	Range2: x > 2000
	Range3: 120 < x < 500
	Range4: -1000 < x < -120
	Range5: -5000 < x < -3000
	Range6: -10 < x < 10

Answer:

	24561 3999977 189313 439061 999842 9473
*/
#include<iostream>
#include <algorithm>
#include<string>

using namespace std;
int x;
long long q,w,r,e,t,y;
int main()
{FILE *in;
in=fopen("data","r");
q=w=e=r=t=y=0;
while(!feof(in)){fscanf(in,"%d", &x);

   if((100<x) && (x<150))q++;
if(x>2000)w++;
if((120<x) &&(x<500)) e++;
if((-1000<x)&& (x<-120)) r++;
if((-5000<x) && (x <-3000))t++;
if((-10<x) &&(x<10)) y++;
}

fclose(in);


printf("%lld %lld %lld %lld %lld %lld ",q,w,e,r,t,y);
//24561 3999977 189313 439061 999842 9473
cout<<x;
    return 0;
}



}