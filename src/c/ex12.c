#include <stdio.h>

int main(int argc, char const *argv[])
{
	//ec
	if(argc ==1){
		printf("You do not have an arguement.\n");
	}
	else if(argc ==2){
		printf("You only have one arguement. You suck.\n");
	}

	else if(argc > 1 && argc <4){
		printf("Here's your arguments:\n");
		for(int i = 1; i < argc ; i++){//made i =1 so that a null argument would not be printed.
			printf("%s ",argv[i]);
		}
		printf("\n");
	}
	//ec
	else if(argc > 1 && argc >5){
		printf("Warning you are about to have to many arguments. At argument #5\n");
	}

	else {
		printf("You have too many arguments. You suck. \n");
	}
	
	return 0;
}