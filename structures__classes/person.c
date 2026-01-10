#include "person.h"

#include <stdio.h>
#include <string.h>

void person_init(Person *person, const char *name, int age,
                 const Address *address) {
  if (!person) {
    return;
  }

  if (name) {
    snprintf(person->name, sizeof(person->name), "%s", name);
  } else {
    person->name[0] = '\0';
  }

  person->age = age;

  if (address) {
    person->address = *address;
    return;
  }

  memset(&person->address, 0, sizeof(person->address));
}

void person_print(const Person *person) {
  if (!person) {
    return;
  }

  printf("Name: %s\n", person->name);
  printf("Age: %d\n", person->age);
  printf("Address: %s, %s\n", person->address.street, person->address.city);
}
