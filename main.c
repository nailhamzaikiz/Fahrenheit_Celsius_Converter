#include<stdio.h>
#include<conio.h>

void menu( );
void fahrenheit( );
void celsius( );

int main() {
    char choise;
    do {
	menu();
    scanf("%d",&choise);
	    switch(choise) {
		    case 1 : fahrenheit();break;
		    case 2 : celsius();break;
		    case 3 : printf("End of Program");break;
       	}
    	getch();
    } while(choise!=3);
    return 0;
}

void menu() {
    printf("\n- MENU -\n");
    printf("Fahrenheit to Celsius...........................1 \n");
    printf("Celsius to Fahrenheit...........................2 \n");
    printf("Exit from the program...................................3 \n");
    printf("Select a Number and Press Enter");
}
void fahrenheit() {
    float fah,cel;
    printf("Please Enter Fahrenheit Value :");
    scanf("%f",&fah);
    cel=5.0/9.0*(fah - 32.0);
    printf("%.2f Fahrenheit = %.2f Celsius\n",fah,cel);
    menu();
}
void celsius() {
    float fah,cel;
    printf("Please Enter Celsius Value : ");
    scanf("%f",&cel);
    fah=9.0/5.0*cel + 32.0;
    printf ("%.2f Celcius = %.2f Fahrenheit\n",cel,fah);
    menu();
}
