char *mx_strcpy(char *dst, const char *src){
    int len = 0;
    while(src[len]){
        len++;
    }
    for(int i = 0; i < len; i++){
        if(src[i] == '\0'){
            break;
        }
        else{
            dst[i]=src[i];
        }
    }
    return dst;
}
