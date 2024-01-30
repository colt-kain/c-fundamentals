#include <stdio.h>
#include <string.h>

#define MAX_INPUT_LENGTH 25

int main()
{
  char user_input[MAX_INPUT_LENGTH];

  printf("String: ");
  fgets(user_input, MAX_INPUT_LENGTH, stdin);
  user_input[strcspn(user_input, "\n")] = '\0';

  size_t input_length = strlen(user_input);

  char reversed_string[input_length + 1];

  int j = 0;
  for (int i = input_length - 1; i >= 0; i--)
  {
    reversed_string[j] = user_input[i];
    
    j++;
  }

  reversed_string[input_length] = '\0';

  printf("Reversed string: %s\n", reversed_string);

  return 0;
}
