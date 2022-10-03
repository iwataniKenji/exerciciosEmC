#include <stdio.h> 

int verifica_dia(int, int, int*);

int main () {
  int month,
      year,
      numberDays,
      isLeapYear;

  printf("Informe o número do mês que gostaria de checar: ");
  scanf("%d", &month);

  printf("Informe o ano que gostaria de checar: ");
  scanf("%d", &year);

  numberDays = verifica_dia(month, year, &isLeapYear);

  if (isLeapYear == 1) {
    printf("\nO mês informado tem %d dias e eh bissexto", numberDays);
  }
  if (isLeapYear == 0) {
    printf("\nO mês informado tem %d dias e não eh bissexto", numberDays);
  }

  return 0;
}

int verifica_dia(int month, int year, int *isLeapYear) {
  // checa se o ano é bissexto
  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
    *isLeapYear = 1;
  } else {
    *isLeapYear = 0;
  }

  // checa quantos dias tem o mês escolhido
  if (month == 1 ||month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
    return 31;
  }

  if (month == 4 || month == 6 || month == 9 || month == 11) {
    return 30;
  }

  if (month == 2) {
    if (*isLeapYear == 1) {
      return 29;
    } else {
      return 28;
    }
  }
};    