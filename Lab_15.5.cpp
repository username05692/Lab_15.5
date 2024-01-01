#include <stdio.h>
#define MAX_SIZE 4 // оголошення розміру масиву

int main() {
    int array[MAX_SIZE ]; // оголошення масиву

    // Ввід елементів масиву
    printf("Vvedit znachenna masuvy:\n", MAX_SIZE);
    for (int i = 0; i < MAX_SIZE; i++) {
        scanf_s("%d", &array[i]);
    }

    // Вивід елементів масиву в зворотньому порядку
    printf("Masuv w zvorotnomt napramky:\n");
    for (int i = MAX_SIZE - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

    return 0;
}
  