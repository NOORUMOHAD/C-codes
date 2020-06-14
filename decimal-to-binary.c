#include<stdio.h>
#include<math.h>
int main()
{
	int user_input,remainder,place_value;
	double binary_output;
	printf("\nDecimal To Binary Conversion\nEnter A Decimal Number : ");
	scanf("%d",&user_input);
	printf("%d",user_input);
	for( place_value = 0 ; user_input != 0 ; place_value++ )
	{
		remainder = user_input % 2;
		user_input /= 2;
		binary_output += remainder * pow(10,place_value);
	}
	printf("  -->  %.0Lf\n",binary_output);
}