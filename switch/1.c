#include<stdio.h>
int main(){
	int a,b,rate,qty,total;
	printf("WELCOME! To the drink products:\n\n");
	printf("1.COFFEE\n");
	printf("2.TEA\n");
	printf("3.COLD DRINKS\n");
	printf("please choose a drink:");
	scanf("%d",&a);
	
	switch(a){
		case 1:
			printf("\nyou have choosen coffee! so which type of coffee do you want?\n");
			printf("1.Espresso\n");
			printf("2.Latte\n");
			printf("3.Cappuccino\n");
			printf("4.Flate White\n");
			printf("\nplease choose a type of coffee:");
			scanf("%d",&b);
			
			switch(b){
				case 1:
					printf("you have chosen an Espresso\n");
					printf("\n Enter the quantity :");
    				scanf("%d",&qty);
					rate=35;
    				total=qty*rate;
    				printf("\nTotal amount :%d",total);
					break;
				case 2:
					printf("you have chosen an Latte\n");
					printf("\n Enter the quantity :");
    				scanf("%d",&qty);
					rate=45;
    				total=qty*rate;
    				printf("\nTotal amount :%d",total);
					break;
				case 3:
					printf("you have chosen an Cappuccino\n");
					printf("\n Enter the quantity :");
    				scanf("%d",&qty);
					rate=55;
    				total=qty*rate;
    				printf("\nTotal amount :%d",total);
					break;
				case 4:
					printf("you have chosen an Flate White\n");
					printf("\n Enter the quantity :");
    				scanf("%d",&qty);
					rate=25;
    				total=qty*rate;
    				printf("\nTotal amount :%d",total);
					break;
				default:
					printf("Invalid Choice!");
					break;
			}
			break;
		case 2:
			printf("\nyou have choosen Tea! so which type of Tea do you want?\n");
			printf("1.Green Tea\n");
			printf("2.Black Tea\n");
			printf("3.Herbal Tea\n");
			printf("\nplease choose a type of Tea:");
			scanf("%d",&b);
			switch(b){
				case 1:
					printf("you have chosen an Green Tea\n");
					printf("\n Enter the quantity :");
    				scanf("%d",&qty);
					rate=50;
    				total=qty*rate;
    				printf("\nTotal amount :%d",total);
					break;
				case 2:
					printf("you have chosen an Black Tea\n");
					printf("\n Enter the quantity :");
    				scanf("%d",&qty);
					rate=35;
    				total=qty*rate;
    				printf("\nTotal amount :%d",total);
					break;
				case 3:
					printf("you have chosen an Herbal Tea\n");
					printf("\n Enter the quantity :");
    				scanf("%d",&qty);
					rate=55;
    				total=qty*rate;
    				printf("\nTotal amount :%d",total);
					break;
				default:
					printf("Invalid Choice!");
					break;
			}
			break;
			
		case 3:
			printf("\nyou have choosen Cold drinks! so which type of drink do you want?\n");
			printf("1.coca cola\n");
			printf("2.pepsi\n");
			printf("3.sprite\n");
			printf("4.7up\n");
			printf("\nplease choose a type of Cold drinks:");
			scanf("%d",&b);
			switch(b){
				case 1:
					printf("you have chosen an coca cola\n");
					printf("\n Enter the quantity :");
    				scanf("%d",&qty);
					rate=15;
    				total=qty*rate;
    				printf("\nTotal amount :%d",total);
					break;
				case 2:
					printf("you have chosen an pepsi\n");
					printf("\n Enter the quantity :");
    				scanf("%d",&qty);
					rate=20;
    				total=qty*rate;
    				printf("\nTotal amount :%d",total);
					break;
				case 3:
					printf("you have chosen an sprite\n");
					printf("\n Enter the quantity :");
    				scanf("%d",&qty);
					rate=10;
    				total=qty*rate;
    				printf("\nTotal amount :%d",total);
					break;
				case 4:
					printf("you have chosen an 7up\n");
					printf("\n Enter the quantity :");
    				scanf("%d",&qty);
					rate=30;
    				total=qty*rate;
    				printf("\nTotal amount :%d",total);
					break;
				default:
					printf("Invalid Choice!");
					break;
			}
	}
	
	
	return 0;
}
