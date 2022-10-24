#include <iostream>
using namespace std;
int main()
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
		cout<<"miejsca zerowe fubnckji"<<(-x/b);	
	}	
}

