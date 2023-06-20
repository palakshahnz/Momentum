//Programme for counting total Electricity bill for consumed units including sur charge
#include<stdio.h>
#include<conio.h>
void main()
{
	int units;
	float Amt,Total_Amt,sur_charge;
	clrscr();
		printf("Enter number of total units consumed:");
		scanf("%d",&units);
	if (units<=50)
	{
	Amt=units*0.50;
	}
	else if (units<=150)
	{
	Amt=25+(units-50)*0.75;
	}
	else if (units<=250)
	{
	Amt=100+(units-150)*1.20;
	}
     else if (units>250)
	{
	Amt=220+(units-250)*1.50;
	}
		sur_charge=(Amt*0.20);

		Total_Amt = Amt+sur_charge;
	printf("Total consumed units = %d\n Total Amt =%f\n Total sur_charge =%f\n",units,Amt,sur_charge);
	printf("Total Electricity Bill= Rs.%0.2f",Total_Amt);

getch();

}