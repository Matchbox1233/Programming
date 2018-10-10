#include "std_lib_facilities.h"
 
 void min1(vector<double> &v)
{
	int h=v.size();
	int min=0;
	for(int i=0;i<h;i++)
	{
		min=i;
		for(int j=i;j<h;j++)
		{
			if(v[min]>v[j])
			{
				
				min=j;
			}
		}
		double tmp=v[min];
		v[min]=v[i];
		v[i]=tmp;
	}
}
int main()
{
 double a;
 double min=1000000000000000;
 double max=0;
 string b;
 double sum=0;
 vector <double> v;
 while(cin>>a>>b)
 {
  if(b=="cm")
   {
    a/=100;
   }
   else if(b=="in")
   {
    a*=2.54/100;
   }
   else if(b=="ft")
   {
    a*=12*2.54/100;
   }
   else if(b=="m")
   {
    
   }
   else
   {
    cout<<"Nincs ilyen mértékegység megadva"<<endl;
    a=max;
   }
   
  if(max<a)
   {
    cout<<"Az eddigi legnagyobb szám: "<<a<<endl;
    max=a;
    
   }
   if(min>a)
   {
    cout<<"Az eddigi legkisebb szám: "<<a<<endl;
    min=a; // eltárolás
    
   }
   cout<<"A ,egkisebb szám: "<<min<<"A legnagyobb szám: "<<max<<endl;
   sum+=a;
   v.push_back(a); 
   
   
   
 }
 cout<<"A számok összege: "<<sum<<"A legkisebb szám: "<<min<<"A legnagyobb szám: "<<max<<endl;
min1(v);
 for(int i=0;i<v.size();i++)
    {
     cout<<"A vektor elemei: "<<v[i]<<endl;
    }
 return 0;





}
