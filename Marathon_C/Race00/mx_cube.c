
void mx_printchar(char c);
void mx_truefalse(int a, int b, char c, char e){
    if (e=='='){
    if(a==b){
        mx_printchar(c);
       }
    }
    else if (e=='>'){
        if(a>b){
        mx_printchar(c);
       }
    }
    else if (e=='<'){
        if(a<b){
        mx_printchar(c);
       }
    }
    }
void mx_cube(int n) {
    int d=n/2;
    int g=n*2;
    int temp1=d;
    for(int i = 1; i < n + 4; i++) {
        for(int j = 0; j < g + d + 3; j++) {
            if(i==1){
                if (j>d+2 && j< d+2+g){
                    mx_printchar('-');
                }
                else {
                mx_truefalse(j,d+1,'+','=');
                mx_truefalse(j,g+d+2,'+','=');
                mx_truefalse(j,d+1,' ','<');
            }}
            if (i==1+d){
                if (j>1 && j< g+2){
                    mx_printchar('-');
                }
                mx_truefalse(j,1,'+','=');
                mx_truefalse(j,g+1,'+','=');
                mx_truefalse(j,g+2,' ','>');
            }
            if (i==d+2+n){
                if (j>1 && j< g+2){
                    mx_printchar('-');
                }
              mx_truefalse(j,1,'+','=');
              mx_truefalse(j,g+1,'+','=');
              if (j>g+2){
                  break;
              }
            }       




            if (i>d+2 && i<d+2+n){
                if (j>1 && j<g+1){
                    mx_printchar(' ');
                }
                if (i<n+1){
                if (j>g+1){
                    if (j==g+2+d){
                        mx_printchar('|');
                    }
                    else {
                    mx_printchar(' ');
                    }
                }
                }
               else if (i==n+1){
                    if (j==g+2+d){
                        mx_printchar('+');
                    }
                    else {
                    mx_printchar(' ');
                    } }
                else if (i>n+1){
                if (j==(g+2+d-(i-(n+2)))){
                    mx_printchar('/');
                    break;
                }
                else{
                    mx_printchar(' ');
                }
                }    
                        
                mx_truefalse(j,1,'|','=');
                mx_truefalse(j,g+1,'|','=');                
            }
            if (i>1 && i<d+1){
                if (j==d-(i-1) || j==g+d+4-i){
                    mx_printchar('/');
                    temp1--;
                }
                else if (j==g+d+2){
                    mx_printchar('|');
                }
                else {
                    mx_printchar(' ');
                }
            }
            
            }
            mx_printchar('\n');
    }

}
int main(){
    mx_cube(5);
}
