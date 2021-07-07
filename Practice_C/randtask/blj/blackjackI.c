/*  ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣
 * Программа по подсчету количества карт в колоде.
 * Этот код выпущен в шутку под публичной Лас-Вегасской лицензцией.
 *
 * (с)2021, Студенческая команда UNIT по блек-джеку, не только Мафии.
 *              Написана стандартно на IF, ELSE
 *                             ♠ ♦ ♥ ♣
 */////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int mx_strlen(const char *s) {
    int len = 0;

    while(s[len] != '\0')
	++len;
    return len;
}
//////////////////только погляди на этот тернарный принтстр////////////////////
void cf_printstr(const char *s) {
    s ? write (1, s, mx_strlen(s)) : write(1, "(null)", 6);
}//////////////////////////////////////////////////////////////////////////////

int cardCount() {
    char cardName[3];
    int count = 0;
    cf_printstr("♦введи название карты: \n");
    scanf("%2s", cardName);
    int val = 0;
    if (cardName[0] == 'K') {
        val = 10;
    } else if (cardName[0] == 'Q') {
        val = 10;
    } else if (cardName[0] == 'J') {
        val = 10;
    } else if (cardName[0] == 'A') {
        val = 11;
    } else {
        val = atoi(cardName);
        if((val < 1) || (10 < val)) {
            cf_printstr("недопустимое значение, такой карты несуществует");
        }
    }
    if ((val >= 2) && (7 >= val)) {
        count++;
        cf_printstr("счетчик увеличился\n");
    } else if (val == 10){
        count--;
        cf_printstr("cчетчик уменьшился ♣\n");
    }
        printf("\nТекущий счёт: %d\n", count);
    return 0;
}

int main() {
    cardCount();

}
