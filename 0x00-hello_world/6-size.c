#include <stdio.h>                                                                                                 
/**                                                                                                                
<<<<<<< HEAD
* main - Entry point                                                                                               * Return: Always 0 (Success)                                                                                       */
 int main(void) 
{
printf("Size of a char: %i byte(s)\n", sizeof(char));
printf("Size of an int: %i byte(s)\n", sizeof(int));
printf("Size of a long int: %i byte(s)\n", sizeof(long int));
printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
printf("Size of a float: %i byte(s)\n", sizeof(float));
return (0);                  
=======
*main - Entry point                                                                                                
*Return: Always 0 (Success)                                                                                        
 */                                                                                                                
int main(void)                                                                                                     
{                                                                                                                 
printf("Size of a char: %zu byte(s)\n", sizeof(char));                                                             
printf("Size of an int: %zu byte(s)\n", sizeof(int));                                                           
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));                                                     
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));                                           
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
>>>>>>> 9fa8aae9356d5919d0067388d4462cee0cb4ef10
