#include "../inc/mxlib.h"

char* mx_concat_words(char **words) {
	int len = 0;
char *newstr = NULL;
char *buff = NULL;
char *newstrwrd = NULL;

    while (words[len]) {
	newstrwrd = mx_strdup(words[len]);
	newstr = mx_strjoin(buff, newstrwrd);
	free(buff);
		if (!words[len + 1])
			buff = mx_strjoin(newstr, "\0");
		else
			buff = mx_strjoin(newstr, " ");
		free(newstr);
		free(newstrwrd);
	len++;
    }
    return buff;
}
