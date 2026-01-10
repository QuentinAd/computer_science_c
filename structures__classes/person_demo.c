#include "person.h"

int main(void) {
  Address address = {"42 Ada Avenue", "Logic City"};
  Person person;

  person_init(&person, "Ada", 34, &address);
  person_print(&person);

  return 0;
}
