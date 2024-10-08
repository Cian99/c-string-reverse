#include<stdio.h>
//You need string.h in order to use string reverse
#include <string.h>
int main()
{
	char letters[10];
	int input;
	int output;
	//Asks the user to enter a string
	printf("Enter a string: ");
	//Allows the user to enter the string
	gets(letters);
	for(input = 0; letters[input] != '\0'; input++)
	{
		//This ensures that only letters are stored in the string
		while (!( (letters[input] >= 'a' && letters[input] <= 'z') || (letters[input] >= 'A' && letters[input] <= 'Z') || letters[input] == '\0') )
		{
			for(output = input; letters[output] != '\0'; output++)
			{
				letters[output] = letters[output+1];
			}
			letters[output] = '\0';
		}
	}
	printf("Output String: ");
	//Reverses the string of ouputs stored after non letters have been removed
	strrev(letters);
	//Prints the string to the command window
	puts(letters);
	//Pauses the system so that results can be viewed
	system("pause");
}