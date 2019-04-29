#include <iostream.h>
#include <conio.h>
void main()
{
char nama[30];
int pendapatan,komisi,total,jasa;
cout<<"masukkan nama salesmen: "; cin>>nama;
cout<<"masukkan pendapatan: "; cin>>pendapatan;
if(pendapatan==2000000)
	{jasa=500000;
   komisi=(pendapatan*10/100);
   total=komisi+jasa;}

   else if((pendapatan>=2000000)&&(pendapatan<=5000000))
   {jasa=500000;
   komisi=(pendapatan*15/100);
   total=jasa+komisi;}

   else if(pendapatan>5000000)
   {jasa=1000000;
   komisi=(pendapatan*20/100);
   total=komisi+jasa;}

   else
   {komisi=pendapatan*10/100;
   jasa=0;
   total=komisi+jasa;}

cout<<"uang jasa salesmen: " <<jasa;
cout<<"\nkomisi salesmen: "<<komisi;
cout<<"\ntotal gaji salesmen: "<<total;
getch();
}
