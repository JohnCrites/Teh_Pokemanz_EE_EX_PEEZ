//Pokemon exp calculator
//Tanner Sanders

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

double a;
double t;
double b;
double e;
double l;
double seven;
double s;
int response;
double lv;
double expz;
double effort;
double party;
int main()

{
	cout<<"Is the pokemon wild or owned?\n ";
	cout<<"\t 1 wild\n ";
	cout<<"\t 2 owned \n ";
	cin>>response;
	cout<<"What is the level of the pokemon you defeated? ";
	cin>>lv;
	cout<<"what is the effort value? ";
	cin>>effort;
	cout<<"how many pokemon participated in the battle? ";
	cin>>party;

	cout<<fixed<<setprecision(2);

		if(response == 1)
		{
			a = 1;
			t = 1;
			e = 1;

			expz = ((a*t*effort*lv)/(7*party));
			cout<<"Exp for the battle is: "<<expz<<endl;

		}
		else
		{
			a = 1.5;
			t = 1;
			e = 1;

			expz = ((a*t*effort*lv)/(7*party));
			cout<<"Exp for the battle is: "<<expz<<endl;
		}

		system ("pause");
}