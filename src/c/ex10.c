#include <stdio.h>

int main(int argc, char *argv[])
{

	//int i = 0;
		char *states[]={
		"Ohio","Indiana","Pennyslvania",NULL//Texas
	};
	//argv[0]=states[2];
	//argv[1]=states[1];

	for(int i = 0; i <argc;i++){
		printf("arg %d: %s\n",i,argv[i]);
	}



	int num_states = 4;

	argv[1]=states[2];
	for(int i = 0; i < num_states;i++){
		printf("state %d: %s\n",i,states[i]);
	}
	return 0;
}