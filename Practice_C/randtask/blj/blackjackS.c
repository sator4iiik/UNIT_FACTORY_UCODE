/*  ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣   ♣
 * Программа по подсчету количества карт в колоде.
 * Этот код выпущен в шутку под публичной Лас-Вегасской лицензцией.
 *
 * (с)2021, Студенческая команда UNIT по блек-джеку, не только Мафии.
 *
 *       Переписано с использованием switch (да да, знаю)
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

    while(cardName[0] != 'X') {
        cf_printstr("♦введи название карты: \n");
        scanf("%2s", cardName);
        int val = 0;
        switch(cardName[0]) {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                continue;
            default:
                val = atoi(cardName);
                if((val < 1) || (10 < val)) {
                cf_printstr("Я не принимаю это значение! (ｏ・_・)ノ”(ノ_<、)");
        }
    }
    if ((val >= 2) && (7 >= val)) {
        count++;
        cf_printstr("..(ﾉ´>)ﾉ*: ･ﾟ♠ счетчик увеличился ♠\n");
    } else if (val == 10){
        count--;
        cf_printstr("..(ﾉ´ヮ)ﾉ*: ･ﾟ♣ cчетчик уменьшился ♣\n");
    }
        printf("\n♥ Текущий счёт: %d\n", count);
    }
    return 0;
}

int main() {
    cardCount();

}

/*
 * ///////////////ЛИРИЧЕСКОЕ ОТСТУПЛЕНИЕ/////////////////////////
 * ИСПОЛЬЗОВАНИЕ ПРОГРАММ ДЛЯ ПОДСЧЕТА КАРТ ЗАПРЕЩЕНО ЗАКОНОМ
 * В МНОГИХ СТРАНАХ, И РЕБЯТАМ ИЗ КАЗИНО ЭТО МОЖЕТ НЕ ПОНРАВИТЬСЯ.
 * ПОЭТОМУ НЕ ДЕЛАЙ ТАК, НЕ РАССТРАИВАЙ АРСЕНЧИКА, ДОГОВОРИЛИСЬ?
 *                  ну все, беги отсюда
 */