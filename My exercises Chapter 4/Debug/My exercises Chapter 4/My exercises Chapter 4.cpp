#include <iostream>
using namespace std;
#include <cstring>
#include <string>
#define WillyWingeit WW

//Exercise 5 Begin + Exercise 6 + Exercise 9
struct CandyBar
{
	string nameSweet;
	double weight;
	int calories;
};
//Exercise 7 + Exercise 8
struct WW
{
	char nameCompany[50];
	double diameter;
	double weight;
};
int main()
{
	//Exercise 1
	/*char fname[40];
	cout<<"What is your first name?";
	cin.getline(fname,40);
	cout<<endl;
	char lname[20];
	cout<<"What is your last name?";
	cin>>lname;
	cout<<endl;
	char grade[2];
	cout<<"What letter grade do you deserve?";
	cin>>grade;
	cout<<endl;
	int age;
	cout<<"What is your age?";
	cin>>age;
	cout<<endl;
	cout<<"Name:"<<lname<<","<<fname<<endl;
	if(grade[0]=='A') {cout<<"Grade:B"<<endl;}
	else if(grade[0]=='B') {cout<<"Grade:C"<<endl;}
	else {cout<<"Grade:C"<<endl;}
	cout<<"Age:"<<age;*/

	//Exercise 2
    /*string name;
    string dessert;
    cout << "Enter your name:\n";
    getline(cin,name); 
    cout << "Enter your favorite dessert:\n";
    getline(cin,dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";*/

	//Exercise 3
	/*char fname[30];
	char lname[30];
	char name[60];
	char *pn=name;
	cout<<"Enter your first name:";
	cin.getline(fname,30);
	cout<<"Enter your last name:";
	cin.getline(lname,30);
	pn=strcat(lname,fname);
	cout<<"Here`s the information in a single string:"<<pn<<endl;*/

	//Exercise 4
	/*string fname;
	string lname;
	string fullname;
	cout<<"Enter your first name:";
	getline(cin,fname);
	cout<<"Enter your last name:";
	getline(cin,lname);
	fullname=lname+(", ")+fname;
	cout<<"Here`s the information in a single string:"<<fullname;*/

	//Exercise 5 Continue
	/*CandyBar snack={"Mocha Munch",2.3,350};
	cout<<"Name box of sweets:"<<snack.nameSweet<<endl;
	cout<<"Weight:"<<snack.weight<<endl;
	cout<<"Calories in one box:"<<snack.calories<<endl;*/

	//Exercise 6
	/*CandyBar mas[3]=
	{
		{"Roshen",4.3,150},
		{"AVK",3.8,120},
		{"Konti",5.6,240}
	};
	cout<<"Name box of sweets:"<<mas[0].nameSweet<<endl<<"Calories:"<<mas[0].calories<<endl<<"Weight:"<<mas[0].weight<<endl;
	cout<<"Name box of sweets:"<<mas[1].nameSweet<<endl<<"Calories:"<<mas[1].calories<<endl<<"Weight:"<<mas[1].weight<<endl;
	cout<<"Name box of sweets:"<<mas[2].nameSweet<<endl<<"Calories:"<<mas[2].calories<<endl<<"Weight:"<<mas[2].weight<<endl;*/

	//Exercise 7
	/*WW product;
	cout<<"Enter manufacturer of pizza:";
	cin.getline(product.nameCompany,50);
	cout<<"Enter diameter of pizza:";
	cin>>product.diameter;
	cout<<"Enter weight of pizza:";
	cin>>product.weight;
	cout<<"Manufacturer:"<<product.nameCompany<<endl;
	cout<<"Diameter:"<<product.diameter<<endl;
	cout<<"Weight:"<<product.weight<<endl;*/

	//Exercise 8
	/*WW *product=new WW;
	cout<<"Enter diameter of pizza:";
	cin>>product->diameter;
	cout<<"Enter manufacturer of pizza:";
	cin>>(*product).nameCompany;
	cout<<"Enter weight of pizza:";
	cin>>product->weight;
	cout<<"Diameter:"<<product->diameter<<endl;
	cout<<"Manufacturer:"<<product->nameCompany<<endl;
	cout<<"Weight:"<<product->weight<<endl;

	delete product;*/

	//Exercise 9
	/*CandyBar *mas= new CandyBar[3];
	mas[0].nameSweet="Roshen";
	mas[0].weight=4.3;
	mas[0].calories=120;
	mas[1].nameSweet="AVK";
	mas[1].weight=3.4;
	mas[1].calories=100;
	mas[2].nameSweet="Konti";
	mas[2].weight=6.4;
	mas[2].calories=320;
	cout<<"Name of product:"<<mas[0].nameSweet<<endl;
	cout<<"Weight:"<<mas[0].weight<<endl;
	cout<<"Calories:"<<mas[0].calories<<endl;
    cout<<"Name of product:"<<mas[1].nameSweet<<endl;
	cout<<"Weight:"<<mas[1].weight<<endl;
	cout<<"Calories:"<<mas[1].calories<<endl;
	cout<<"Name of product:"<<mas[2].nameSweet<<endl;
	cout<<"Weight:"<<mas[2].weight<<endl;
	cout<<"Calories:"<<mas[2].calories<<endl;

	delete []mas;*/

	//Exercise 10
	double mas[3];
	cout<<"Enter result of first sprint:";
	double resultat1;
	cin>>resultat1;
	cout<<"Enter result of second sprint:";
	double resultat2;
	cin>>resultat2;
	cout<<"Enter result of third sprint:";
	double resultat3;
	cin>>resultat3;
	mas[0]=resultat1;
	mas[1]=resultat2;
	mas[2]=resultat3;
	cout<<"Result of first sprint"<<mas[0]<<endl;
	cout<<"Result of second sprint"<<mas[1]<<endl;
	cout<<"Result of third sprint"<<mas[2]<<endl;
	cout<<"Average:"<<(mas[0]+mas[1]+mas[2])/3;
	
	cin.get();
	cin.get();
	return 0;
}