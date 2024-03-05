#include <stdio.h>
struct dialing_code {
  char *country;
  int code;
};
const struct dialing_code country_codes[] = {
    {"Afghanistan", 93}, {"Albania", 355},
    {"Algeria", 213},    {"American Samoa", 1},
    {"Andorra", 376},    {"Angola", 244},
    {"Anguilla", 1},     {"Antigua and Barbuda", 1},
    {"Argentina", 54},   {"Armenia", 374},
    {"Aruba", 297},      {"Australia", 61},
    {"Austria", 43},     {"Azerbaijan", 994},
    {"Bahamas", 1},      {"Bahrain", 973},
    {"Bangladesh", 880}, {"Barbados", 1},
    {"Belarus", 375},
};
int main(void) {
  int code;
  char *country;
  printf("Enter a dialing code: ");
  scanf("%d", &code);
  for (country = country_codes[code].country; *country; country++) {
    printf("%c", *country);
  }
  return 0;
}
