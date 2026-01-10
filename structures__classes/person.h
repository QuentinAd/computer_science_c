#ifndef PERSON_H
#define PERSON_H

#include <stddef.h>

typedef struct {
  char street[64];
  char city[32];
} Address;

typedef struct {
  char name[32];
  int age;
  Address address;
} Person;

void person_init(Person *person, const char *name, int age,
                 const Address *address);
void person_print(const Person *person);

#endif
