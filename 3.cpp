#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x;
	cout<<"wybierz co chcesz zrobiæ: "<<endl;
	cout<<"oblicznie funkcji liniowej wybierz 1"<<endl;
	cout<<"oblicznie funkcji kwadratowej Ax+by+C=0 wybierz 2"<<endl;
	cin>>x;
	
	if(x==1)
	{
	cout<<"funkcja liniowa"<<endl;
		
		{
	double x;
	double b;
	cout<<"podaj wspólczynnik kierunkowy a"<<endl;
	cin>>x;
	cout<<"podaj wyraz wolny b"<<endl;
	cin>>b;
	
	if(x==0 && b==0)
	
	
		{
			cout<<"funkcja nie ma miejsc zeorywch"<<endl;
		}
	
	if(x==b && b==0)
		{
			cout<<"kazda liczba rzeczywista jest miejscem zerowym"<<endl;
		}
	else
	{
		cout<<"miejsca zerowe fubnckji"<<(-x/b)<<endl;	
	}
	
}		
}
else
{
	int a;
	int b;
	int c;
	cout<<"fuckja kwadratowa Ax+by+C=0"<<endl; 
	cout<<"podaj a b i c"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cout << "funkcja kwadr"<< a <<"x + "<<b<<"y +"<<c<<"= 0 ma miejsce zerowe: ";	
}	
	
	
	
system("pause");	
}

