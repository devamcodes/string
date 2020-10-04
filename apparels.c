#include<stdio.h>

int number()
{
	int number=0;
	
	int *ptr;
	
	ptr=number;/* is it neccessary to do this step like p=adderss of number instead we could have just done p=number*/
	for (number;number<=2;number++)
	
		printf("the number is %x\n",*ptr);
	// i just want the value of the index to use it in menu.
}

char menu()
{
	int prompt;
	
	printf("Enter 1 to purchase tshirts\n2 to purchase shirts\n3 to purchase jackets");
	
	scanf("Enter the number correspnoding to your choice%d\n",prompt);
		#if (prompt==1)
		
			printf("You have selected T-shirt");
			
		
		#elif(prompt==2)
		
			printf("You have selected Shirt");
		
		#elif(prompt==3)
			
			printf("You have selected Jacket");
		
		#endif
			
			printf("Invalid input please try again...");
}

char size()
{
	int choice;
	
	printf("We have three different types of sizes\n");
	
	printf("Enter 1 for Small\n2 for Medium\n3 for Large");
	
	scanf("Enter your choice here:-%d\n",choice);
	
	#if (choice == 1)
	
	printf("You have selected Small size.\n");
	
	#elif (choice == 2)
	
	printf("You have seleted Medium size.\n");
	
	#elif (choice == 3)
	
	printf("You have selected Large size.\n");
	
	#endif 
	
	printf("Invalid Input!!\n");
	
	return 0;
}

char colour()
{
	int choice;
	
	printf("We have 5 colours\n");
	
	printf("press:\n1 for Red\n2 for Bule\n3 for Green\n4 for White\n5 for Black ");
	
	scanf("Enter your choice here:-%d\n",choice);
	
	#if (choice == 1)
	
	printf("You have selected Red colour for your apparel.");
	
	#elif (choice == 2)
	
	printf("You have selected Blue colour for your apparel");

	#elif (choice == 3)

	printf("You have selected Green colour for your apparel");

	#elif (choice == 4)

	printf("You have selected White colour for your apparel");

	#elif (choice == 5)

	printf("You have selected Black colour for your apparel");

	#endif

	printf("Invalid input try again...");
	
}
char apparel_type()
{
	int choice;
	
	printf("The menu for apparels is\n");
	
	printf("Press:\n1 for T-shirts\n2 for Shirts\n3 for Jackets.");
	
	scanf("Enter your choice:-\n%x",choice);
	
	#if (choice == 1)
		
		printf("Your choice is Tshirts");
		
		size();
		
		colour();
	
	#elif (choice == 2)
	
		printf("Your choice is Shirts");
		
		size();
		
		colour();
		
	#elif (choice == 3)
		printf("Your choice is jackets");
		
		size();
		
		colour();
		
	#endif
		printf("Invalid input try again...");
	

}
	

int main()
{
	number();
	
	scanf("enter the index number:-%d",number());
	
	menu();
	
	apparel_type();
}
