#include <stdio.h>
#include <string.h>

typedef struct {
  char name[50];
  int age;
} Person;

void print_person(const Person *p) {
  printf("%s is %d years old\n", p->name, p->age);
}

int main(void) {
  Person alice;
  strcpy(alice.name, "Alice");
  alice.age = 30;
  print_person(&alice);
  return 0;
}
