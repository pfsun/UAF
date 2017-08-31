#include<stdio.h>
#include<stdlib.h>
struct ptr{
  int integer;
  int *p;
};

int main()
{
	int *ptr_one;

	ptr_one = (int *)malloc(sizeof(int));

	if (ptr_one == 0)
	{
		printf("ERROR: Out of memory\n");
		return 1;
	}

	*ptr_one = 25;
        
        struct ptr *temp = (struct ptr *) malloc (sizeof(struct ptr));
        temp->integer = *ptr_one;
        temp->p = ptr_one;

	printf("%d\n", *ptr_one);

        free(ptr_one);

	printf("%d\n", *(temp->p));
        free(temp);

	return 0;
}
