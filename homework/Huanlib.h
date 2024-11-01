#include <stdio.h>
#include <stdlib.h>

// Function to read two integers from a specified file
void openInput(const char *inputFilename) {
  FILE *inputFile;

  // Open the specified input file in read mode
  inputFile = fopen(inputFilename, "r");
  if (inputFile == NULL) {
    printf("Error opening input file: %s\n", inputFilename);
    return;
  }
}

void closeInput(const char *inputFilename) {
  FILE *inputFile;
  // Close the input file
  fclose(inputFile);
}

// Function to write a result to a specified file
void writeOutput(const char *outputFilename, long long result) {
  FILE *outputFile;

  // Open the specified output file in write mode
  outputFile = fopen(outputFilename, "w");
  if (outputFile == NULL) {
    printf("Error opening output file: %s\n", outputFilename);
    return;
  }

  // Write the result to the output file
  fprintf(outputFile, "%lld\n", result);

  // Close the output file
  fclose(outputFile);
}

long long sqrtfinder(int a) {
  for (int i = 0; i <= a / 2; i++) {
    if (i * i == a) {
      return a;
    }
  }
  return 0;
}

inline void VLAarray(int n, int arr[n]) {
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  ;

  printf("Enter elements: ");

  for (int i = 0; i < n; ++i) {

    scanf("%d", &arr[i]);
  }

  printf("Elements of VLA of Given Size: ");
  for (int i = 0; i < n; ++i) {

    printf("%d ", arr[i]);
  }
}