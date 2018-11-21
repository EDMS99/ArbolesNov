#include <iostream>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int suma=0;
	
	for(int i=0; i<=4; i++)
	{
		suma += i;
		cout<<suma<<endl;
	}
	
	getch();
	return 0;
}
