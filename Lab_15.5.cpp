#include <stdio.h>
#define MAX_SIZE 4 // ���������� ������ ������

int main() {
    int array[MAX_SIZE ]; // ���������� ������

    // ��� �������� ������
    printf("Vvedit znachenna masuvy:\n", MAX_SIZE);
    for (int i = 0; i < MAX_SIZE; i++) {
        scanf_s("%d", &array[i]);
    }

    // ���� �������� ������ � ����������� �������
    printf("Masuv w zvorotnomt napramky:\n");
    for (int i = MAX_SIZE - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

    return 0;
}
  