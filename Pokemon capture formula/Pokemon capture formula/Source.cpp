//This program says weither or not we capture pokemon
//By Tanner Sanders

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>

double maxhp;
double hp;
double stat;
double cr;
double ballmod;
double totes;
using namespace std;
int main()
							//((( 3 * Max HP - 2 * HP ) * (Catch Rate * Ball Modifier ) / (3 * Max HP) ) * Status Modifier
{
	cout<<"Enter the max hp of the pokemon \n";
	cin>>maxhp;
	cout<<"Enter the current hp of the pokemon \n";
	cin>>hp;
	cout<<"What is the pokemon's catch rate? \n";
	cin>>cr;
	cout<<"What is the ball modifier? Pokeball = 1, great ball = 1.5, ultraball = 2.0 \n";
	cin>>ballmod;
	cout<<" What is the status mod of the pokemon? reg = 1, sleep = 2, frozen = 2, paralyz = 1.5. burn = 1.5 poison = 1.5 \n";
	cin>>stat;

	totes = (((3 * maxhp - 2 * hp) * (cr * ballmod) / (3 * maxhp)) * stat);

	cout<<totes;



	system ("pause");




}