#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	double a,b,c,d;
	cin>>a;
	if(a<=400.00)
	{
		c=(a*.15);
		d=c+a;
		cout<<fixed<<setprecision(2);
		cout<<"Novo salario: "<<d<<endl;
		cout<<"Reajuste ganho: "<<c<<endl;
		cout<<"Em percentual: 15 %"<<endl;
	}
	else if (a>400.00 && a<=800.00)
	{
		c=(a*.12);
		d=c+a;
		cout<<fixed<<setprecision(2);
		cout<<"Novo salario: "<<d<<endl;
		cout<<"Reajuste ganho: "<<c<<endl;
		cout<<"Em percentual: 12 %"<<endl;
	}
	else if (a>800.00 && a<=1200.00)
	{
		c=(a*.10);
		d=c+a;
		cout<<fixed<<setprecision(2);
		cout<<"Novo salario: "<<d<<endl;
		cout<<"Reajuste ganho: "<<c<<endl;
		cout<<"Em percentual: 10 %"<<endl;
	}
	else if (a>1200.00 && a<=2000.00)
	{
	    c=(a*.07);
	    d=c+a;
		cout<<fixed<<setprecision(2);
		cout<<"Novo salario: "<<d<<endl;
		cout<<"Reajuste ganho: "<<c<<endl;
		cout<<"Em percentual: 7 %"<<endl;
	}
	else if (a>2000.00)
	{
		c=(a*.04);
		d=c+a;
		cout<<fixed<<setprecision(2);
		cout<<"Novo salario: "<<d<<endl;
		cout<<"Reajuste ganho: "<<c<<endl;
		cout<<"Em percentual: 4 %"<<endl;
	}
	return 0;
}
