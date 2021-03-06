/*Write a C program that inputs a string (read as individual characters and stored in a character array)
and output a series of ICAO words that would be used to spell it out. */

#include <stdio.h> // standard input/output labriray
#include <string.h> //string. h is the header contains macro definitions, constants and declarations of functions and types used not only for string handling 
#include <ctype.h>  //ctype.h header file of the C Standard Library declares several functions that are useful for testing and mapping characters.

void TranslateString(char codeWord[][10]) // function declearing named  TranslateString that takes a character array storing the string and traslate it into ICAO spelling
{
    char string[100];
    int i, j;

    printf("Enter string: Program Test ");  // Statment that to print according to program statment
    gets(string); ///Storing the string

    int length = strlen(string); /// finding the length of the string

    printf("Phonetic version is: "); // Statment that to print according to program statment
    for(i=0; i<length; i++)
    {
        if(string[i] >= 97 && string[i] <= 122) ///converting all lower case to upper case letter
            string[i] = string[i] - 32;         ///as the first letter of the code word is capital.

        for(j=0; j<26; j++)
        {
          if(strncmp(codeWord[j], string+i, 1) == 0)
		  { 											///checked if the first letter is matched
            printf("%s ", codeWord[j]);               ///with the given string and the CodeWord
            break;
          }

        }

    }
    printf("\n\n");
}

/*You should create a function called BuildCodeArray to build an Multi Dimensional Array of characters to store the ICAO words.*/

void BuildCodeArray() 
{
    char codeWord[][10] = ///storing ICAO words. 
	/* The International Civil Aviation Organization Alphabet is a series of words which are used to represent each letter of the
alphabet. These are used in critical radio communications between airplanes and ground, and between airplanes in flight to avoid
misunderstanding */
	{ 
			
                "Alpha",
                "Bravo",
                "Charlie",
                "Delta",
                "Echo",
                "Foxtrot",
                "Golf",
                "Hotel",
                "India",
                "Juliet",
                "kilo",
                "Lima",
                "Mike",
                "November",
                "Oscar",
                "Papa",
                "Quebec",
                "Romeo",
                "Sierra",
                "Tango",
                "Uniform",
                "Victor",
                "Whiskey",
                "X-ray",
                "Yankee",
                "Zulu" };

    TranslateString(codeWord);

}

/* After printing the ICAO words the application should ask the user if they want to translate another string and continue looping
until the user indicates they do not want to translate another string */

int main()
{
    char choose = 'y';

    while( choose != 'n' ){ ///loop will continue until pressed n
       BuildCodeArray();

       printf("Want to Translate another String ? (y/n)\n");

       choose = getchar();
       fflush(stdin); ///removing the buffer
       choose = tolower(choose);  ///as the loop only checked lowercase n so converting
                                /// to the lowercase if the user enter uppercase.
    }

    return 0;
}

