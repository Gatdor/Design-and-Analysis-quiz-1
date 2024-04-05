#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* extractSentence(const char* sentence, int start, int end) {
    // Allocate memory for the extracted sentence
    int length = end - start + 1;
    char* extracted = (char*)malloc((length + 1) * sizeof(char));
    if (extracted == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // Copy words between start and end indices
    int i, j = 0;
    for (i = start; i <= end; ++i) {
        extracted[j++] = sentence[i];
    }
    extracted[j] = '\0'; // Null-terminate the extracted sentence

    return extracted;
}

int main() {
    char inputSentence[] = "This is an example sentence for testing the algorithm.";
    int startIdx, endIdx;

    // Input start and end indices
    printf("Enter starting index: ");
    scanf("%d", &startIdx); //0
    printf("Enter ending index: ");
    scanf("%d", &endIdx); //65

    // Extract the sentence
    char* result = extractSentence(inputSentence, startIdx, endIdx);
    printf("Extracted sentence: %s\n", result);

    // Free dynamically allocated memory
    free(result);

    return 0;
}

