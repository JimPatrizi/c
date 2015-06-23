#include <stdio.h>

void print1(int ages[], char *names[], int count)
{
    int i = 0;

    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }
    printf("---\n");
}

void print2(int *ages, char **names, int count){
	int i = 0; 

	for(i = 0; i <count; i++){
		printf("%s is %d years old.\n",*(names + i),*(ages+i));
	}
	printf("---\n");
}

void print3(int *ages, char **names, int count){
	int i = 0;

	for(i = 0; i < count; i++){
		printf("%s is %d years old again.\n",names[i],ages[i]);
	}
	printf("---\n");
}

void print4(int *ages, char **names, int count){
	int i = 0;

	for(i = 0; i < count;i++){
		printf("%p is the address of this name: %s.\n", names[i],names[i]);
	}
	printf("---\n");
}

int main(int argc, char *argv[])
{
	int ages[] = { 23, 43, 12, 89, 2 };
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

	int count = sizeof(ages) / sizeof(int);

	print1(ages,names,count);

	int *cur_age = ages;
    char **cur_name = names;

    // second way using pointers
    print2(cur_age, cur_name, count);

    print3(cur_age,cur_name,count);

    print4(cur_age,cur_name, count);

	return 0;
}
