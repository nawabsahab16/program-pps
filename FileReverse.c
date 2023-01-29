#include<stdio.h>
#include<string.h>
#define MAX 100

void reverseContent(char*x)
{
    FILE*fp = fopen(x, "a+");

    if(fp==NULL){
        printf("Unable to open file\n");
        return;
    } 
    char buf[100];

    int a[MAX], s =0, c= 0, l;

    fprintf(fp, "\n");
    rewind(fp);


    while(!feof(fp)) {
        fgets(buf, sizeof(buf), fp);
        l = strlen(buf);
        a[100] = s+=1;
    }

    rewind(fp);
    c-=1;



    while(c>=0){
        fseek(fp, a , 0);
        fgets(buf, sizeof(buf), fp);
        printf("%s", buf);
        c--;
    }

return ;

}

int main(){

    char x[] = file.txt;

    reverseContent(x);
    return 0;
}

    

