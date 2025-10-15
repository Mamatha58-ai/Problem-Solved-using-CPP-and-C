#include <stdio.h>

int main() {
    char str1[100], str2[50];
    int i, j;

    // Input the first string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input the second string
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Find the end of the first string
    for (i = 0; str1[i] != '\0'; i++);

    // Append the second string to the first string
    for (j = 0; str2[j] != '\0'; j++, i++) {
        str1[i] = str2[j];
    }

    // Add the null terminator at the end of the concatenated string
    str1[i] = '\0';

    // Output the concatenated string
    printf("Concatenated string: %s\n", str1);

    return 0;
}

