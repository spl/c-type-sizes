#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/* A macro to get the alignment of a type */
#if __STDC_VERSION__ >= 201112L
/* _Alignof is standardized in C11. */
#define alignof _Alignof
#else
/* This is a portable trick to get the alignment of a type. Note that it only
 * works if the type is a prefix declaration. See the typedef workaround for the
 * function pointer type below.
 */
#define alignof(type) offsetof (struct { char c; type member; }, member)
#endif

#define print_newline()    { printf("\n"); }
#define print_type_size(t) { \
  printf("%20s: %2lu", #t, sizeof(t)); \
  \
  if (alignof(t) != sizeof(t)) { \
    printf(" (alignment: %2lu)", alignof(t)); \
  } \
  \
  print_newline(); \
}

/* We use this typedef as workaround to use the alignof macro above on a
 * function pointer type, which is not a prefix declaration like other types.
 */
typedef void (*function_pointer) (void);

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
  print_type_size(function_pointer);
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
