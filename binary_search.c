#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Rus");

    printf("��� ��������� ��������� �����!\n��������� ����� � ��������� �� 1 �� N. �� ����������!\n");
    int upper_limit;
    printf("������� ������� ������ N (�����): "); scanf_s("%i", &upper_limit);
    //printf("upper_limit: %i", upper_limit);

    int lower_limit = 1;
    int guessed = 0;
    int higher = 0;
    int num_to_guess = 0;
    int num_cycles = 0;

    while (guessed == 0) {
        num_cycles += 1;
        num_to_guess = (upper_limit - lower_limit) / 2;


        printf("�� �������� %i?\n��: 1     ���: 0\n", num_to_guess); scanf_s("%i", &guessed);
        //_getch();
        printf("g = ");
        printf("%i\n", guessed);


        if (guessed != 1 && guessed != 0) {
            printf("guessed: ");
            printf("%i\n", guessed);
            printf("�������� ����.");
            break;
        }

        if (guessed == 1) {
            printf("����� %i �������� �� %i �������\n",num_to_guess, num_cycles);
            break;
        }
        else {
            printf("���������� ����� ������?\n��: 1     ���: 0\n"); scanf_s("%i", &higher);
            //_getch();
            printf("higher: %i\n", higher);
        }
        
        if (higher == 1) {
            upper_limit = num_to_guess;
        }
        else {
            lower_limit = num_to_guess;
        }

    }
    _getch(); // Keeping console opened after we enter our data in release version.
    return 0;
}