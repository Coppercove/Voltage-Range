/*Adam Montgomery Lab 5 10/19/2020*/
#include<stdio.h>

int main()
{
	float n;
	
    printf("Enter Voltage Value:\n"); //User enters a number
	scanf("%f", &n);
	
	//Code to categorize input into correct range and then print to the concole output plus divsion.
	
	if (n>=1000000000) 
		{printf("The number you entered is %.2f GV, this number is in the Gigavolts Range.\n",n/1000000000);}   
	
	if (n>=1000000 && n<=100000000) 
		{printf("The number you entered is %.2f MV, this number is in the Megavolts Range.\n",n/1000000);}
	
	if (n>=1000 && n<=1000000) 
		{printf("The number you entered is %.2f kV, this number is in the kilovolts Range.\n",n/1000);}
	
	if (n>=1 && n<=1000) 
		{printf("The number you entered is %.2f V, this number is in the Volts Range.\n",n/1);}
	
	if (n>=.001 && n<=1) 
		{printf("The number you entered is %.2f mV, this number is in the millivolts Range.\n",n/.001);}
	
	if (n>=.000001 && n<=.001) 
		{printf("The number you entered is %.2f uV, this number is in the microvolts Range.\n",n/.000001);}
	
	if (n>=.000000001) 
		{printf("The number you entered is %.2f nV, this number is in the nanovolts Range.\n",n/.000000001);}
	
	
	return 0;

	

}
//This program is used to determine whatever number is entered and put it into
//the correct range of voltage and make necessary calculations.

