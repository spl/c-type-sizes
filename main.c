#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define print_type_size(t) { printf("%20s: %2lu\n", #t, sizeof(t)); }
#define print_newline()    { printf("\n"); }

int main() {
  printf("Built-in types:\n");
  print_type_size(char);
  print_type_size(signed char);
  print_type_size(unsigned char);
  print_newline();

  print_type_size(short);
  print_type_size(unsigned short);
  print_newline();

  print_type_size(int);
  print_type_size(unsigned int);
  print_newline();

  print_type_size(long);
  print_type_size(unsigned long);
  print_newline();

  print_type_size(long long);
  print_type_size(unsigned long long);
  print_newline();

  print_type_size(float);
  print_type_size(double);
  print_type_size(long double);
  print_newline();

  print_type_size(void *);
  print_type_size(void (*)());
  print_newline();

  printf("stdint.h types:\n");
  print_type_size(int8_t);
  print_type_size(uint8_t);
  print_type_size(int16_t);
  print_type_size(uint16_t);
  print_type_size(int32_t);
  print_type_size(uint32_t);
  print_type_size(int64_t);
  print_type_size(uint64_t);
  print_newline();

  print_type_size(size_t);

  return EXIT_SUCCESS;
}
