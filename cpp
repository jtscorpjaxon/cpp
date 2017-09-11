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