// Дана строка символов. Удалить из нее все слова нечетной длины.
// Слова отделяются друг от друга одним пробелом.



#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

using namespace std;
#define SIZE 40

int main()
{
    char str[SIZE], newstr[SIZE], *token = NULL;
    char a = 0;

    fgets(str, SIZE, stdin);
    a = strlen(str);                     // strlen cчитает количество символов в строке до 0
    if (a > 0)
        str[ a - 1 ] = ' ' ;             //предпоследний символ будет заменен на пробел
    puts(str);                           //вывод строки

    memset(newstr, 0, sizeof(newstr));   //ставим 0 в начале строки

    token = strtok(str, " ");            // функция strtok ищет пробел в строке str
    /* Например нашла на второй позиции, потом возвращает на 1 элемент назад и ставит там 0 */
    while( token )
    {
        if(strlen(token) %2 ==0)
        {
            strcat(newstr, token); //strcat соединяет две строки
            strcat(newstr, " ");
        };
        token = strtok(NULL, " "); //NULL чтобы искала дальше по строке
        /*Дальше она находит пробел после 22. Заменяет пробел на 0, и возвращает указатель на первую двойку
        и запоминает свое местонахождение*/
    };

    puts(newstr);

    getch();

}
