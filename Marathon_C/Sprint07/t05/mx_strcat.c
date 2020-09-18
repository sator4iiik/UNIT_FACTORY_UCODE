int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2){
    int len = mx_strlen(s1);
    for(int i = len ,j = 0; i< len + mx_strlen(s2); i++,j++){
        s1[i]=s2[j];
    }
    return s1;
}

