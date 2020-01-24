#include<iostream>
using namespace std;

//Write the function printO() here
//aคือจำนวน bคือบรรทัด
void printO(int a, int b)
{
	if(a <= 0 || b <= 0)
	{
		cout <<"Invalid output\n";
	}else
	{
		for(int y = 0 ; y < a; y++)
		{
			for(int x = 0 ; x < b;x++)
			{
				cout << "O" ;
			}
		cout <<"\n";
		}
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
