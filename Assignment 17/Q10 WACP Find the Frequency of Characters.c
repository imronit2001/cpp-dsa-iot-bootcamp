/* Write a program in C to Find the Frequency of Characters	*/
#include<stdio.h>
#include <string.h>
  
// Function to print the frequencies
// of each character of the string
void printFrequency(int freq[])
{
	int i;
    for (i = 0; i < 26; i++) {
  
        // If frequency of the
        // alphabet is non-zero
        if (freq[i] != 0) {
  
            // Print the character and
            // its respective frequency
            printf("%c - %d\n",
                   i + 'a', freq[i]);
        }
    }
}
  
// Function to calculate the frequencies
// of each character of the string
void findFrequency(char S[])
{
    int i = 0;
  
    // Stores the frequencies
    // of each character
    int freq[26] = { 0 };
  
    // Traverse over the string
    while (S[i] != '\0') {
  
        // Increment the count of
        // each character by 1
        freq[S[i] - 'a']++;
  
        // Increment the index
        i++;
    }
  
    // Function call to print
    // the frequencies
    printFrequency(freq);
}
int main()
{
	char s[20];
	printf("Enter a string : ");
	fgets(s,20,stdin);
	findFrequency(s);
 return 0;
}

