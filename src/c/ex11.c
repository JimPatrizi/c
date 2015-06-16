#include <stdio.h>

int main(int argc, char *argv[])
{
	/*
	int i = 0;
	while(i<argc){
		printf("argc %d : %s\n",i,argv[i]);
		i++;
	}
	*/
	//this is something to add
	char *states[100] ={};
	int i=0;
	while(i<argc){
		states[i]=argv[i];
		printf("state%d \n",i);
		i++;
	}
	//int num_states = sizeof(argc);
	i = 0;
	while(i<sizeof(states)){
		printf("state %d: %s\n", i,states[i]);
		i++;
	}
	return 0;
	//added in branch
}
