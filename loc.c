#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // Default delimiter
  char delim = ';';
  char *filename = NULL;

  // Parse arguments
  if (argc < 2) {
    fprintf(stderr, "Usage: %s <file> [-d delim]\n", argv[0]);
    return 1;
  }

  filename = argv[1];

  // Check if the -d flag was provided
  if (argc == 4 && strcmp(argv[2], "-d") == 0) {
    // Handle the special \n string case
    if (strlen(argv[3]) == 2 && argv[3][0] == '\\' && argv[3][1] == 'n') {
      delim = '\n';
    }
    // Handle any other single character delimiter
    else if (strlen(argv[3]) == 1) {
      delim = argv[3][0];
    } else {
      fprintf(stderr, "Error: Delimiter must be a single character or \\n\n");
      return 1;
    }
  } else if (argc != 2) {
    // Caught if they pass wrong number of args (e.g., loc file -d ; extra)
    fprintf(stderr, "Usage: %s <file> [-d delim]\n", argv[0]);
    return 1;
  }

  // Open the file
  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    perror("Error opening file");
    return 1;
  }

  // Count the delimiters
  unsigned long count = 0;
  int ch;
  while ((ch = fgetc(fp)) != EOF) {
    if (ch == delim) {
      count++;
    }
  }

  // Clean up and print result
  fclose(fp);
  printf("%lu LOC (%c)", count, delim);

  return 0;
}
