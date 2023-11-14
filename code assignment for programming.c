#include <stdio.h>
int main ()
{
    int regno; 
    char firstname[20];
    char lastname[20];
    int intro_prog;
    int accounting; 
    int operations;
    printf("Enter reg number\n");
    scanf("%d", &regno);
    
    printf("Enter first name\n");
    scanf("%s",&firstname);
    
    printf("Enter last name\n");
    scanf("%s", &lastname);
   
    printf("Enter introduction to programming score\n");
    scanf("%d", &intro_prog);

    printf("Enter accounting score\n");
    scanf("%d", &accounting);

    printf("Enter operations score\n");
    scanf("%d", &operations);
  
    
    printf("your reg number is %d\n",regno);
    printf("your first name is %s\n",firstname);
    printf("your last name is %s\n",lastname);
    printf("marks in introduction to intro_prog %d\n", intro_prog);
    printf("marks in accounting %d\n",accounting);
    printf("operations marks %d\n",operations);
    return 0;
}