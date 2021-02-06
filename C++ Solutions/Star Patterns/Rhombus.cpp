#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Enter side of Rhombus:";
	int n;
	cin>>n;
	hollowRhombus();
	cout << "\n";
	solidRhombus();
}

//For Hollow Rhombus 
void hollowRhombus(int n)	
	for(int i=1;i<=n;i++)	//printing first line
	cout<<"* ";
	cout<<endl;
	
	for(int i=2;i<n;i++)
	{
		for(int j=1;j<i;j++)	//space before first star
		cout<<" ";				
		cout<<"* ";				//first star 
		for(int j=2;j<n;j++)	//space between rhombus
		cout<<"  ";
		cout<<"* \n";			//last star
	}
	
	for(int j=1;j<n;j++)
		cout<<" ";
		
	for(int i=1;i<=n;i++)		//printing first line
	cout<<"* ";
}	

//For Solid Rhombus
void solidRhombus(int n) 
{ 
    int i, j; 
    for (i=1; i<=n; i++) 
    {
        for (j=1; j<=rows - i; j++)	// Print trailing spaces 
            cout << " "; 
              
        for (j=1; j<=rows; j++)		// Print stars after spaces 
            cout << "*"; 
               
        cout << "\n";		// Move to the next row 
    } 
} 
