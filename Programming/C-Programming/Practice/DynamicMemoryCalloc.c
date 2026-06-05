#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size =0;
    float * Marks = NULL;
    int i = 0;

    printf("Enter number of element\n");
    scanf("%d", &size);


    //Dynamic memory
    Marks = (float *) malloc(sizeof(float));

   // float Marks[5];

   

   printf("enter your number");

   for (i = 0; i< size; i++)
   {
    scanf("%f\n", &Marks[i]);
   }

   printf("Entered marked are : \n");

   for (i = 0; i< size; i++)
   {
    scanf("%f\n", Marks[i]);
   }

   free(Marks);
   return 0;
}
