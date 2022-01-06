#include <stdlib.h>
#include <stdio.h>

typedef struct {
  char *data;
  int key;
} item_t;


int main(void)
{
	item_t *array;
	
	array = create_array(5);
	add_element(array, 3, "bill");
	add_element(array, 4, "neil");
	add_element(array, 2, "john");
	add_element(array, 5, "rick");
	add_element(array, 1, "alex");
	
	sort(array,5);
	
	for(int i = 0; i < 5; i++)
		printf("array[%d] = {%s, %d}\n", i, array[i].data, array[i].key);
	
	destroy_array(array, 5);
	
	return 0;
}


void sort(item_t * a, int n) {
  int i = 0, j = 0;
  int s = 1;

  for(int n0 = n; i < n0; i < n && s != 0; i++) 
    s = 0;
    for(j = 0; j < n-1; j++){
      if(a[j].key > a[j+1].key) {
        item_t t = a[j];
        a[j] = a[j+1];
        a[j+1] = t;
        s++;
      }
    }
   // n--;
  }
}

item_t *create_array(int size)
{
	item_t *array;
	
	array = malloc(size * sizeof(item_t));
	if(array == NULL)
	{
		printf("ERRO");
		exit(EXIT_FAILURE);
	}
	
	for(int i = 0; i < size; i++)
	{
		array[i].data = NULL;
		array[i].key = 0;
	}
	
	return array;
}

void array_del (item_t *array, int size){
    for(int i=0; i < size; i++){
        free(array[i].data);
    }
    free(array);
}

