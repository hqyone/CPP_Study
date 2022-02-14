#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gsl/gak_sf_basel.h>
#include <sys/socket.h>

int listener_d =socket(PF_INET, SOCK_STREAM, 0)

char books[][20]={
    "ab","bc","sa"
};

void findChar(char searchfor[]){
    for (int i=0; i<3; i++){
        if (strstr(books[i], searchfor)){
            printf("%i:%s\n",i, books[i]);
        }
    }
};

char* contactStr(char a[], char b[]){
    return strcat(a,b);
};

typedef struct {
    const char *descritpion;
    float value;
} swag;

typedef struct
{
    swag *swags;
    const char *sequence;
}combination;

typedef struct{
    combination numbers;
    const char *make;
}safe;

typedef struct{
    int gears;
    int height;
}bike;

typedef struct island{
    int value;
    island *next;
}island;

bike b = {.gears=10, .height=9};

island a ={.value=1, .next=NULL};
island b ={.value=2, .next=&a};

int main()
{
    char destination[] = "Hello gggggggggggggggggggggggggggggggggggg";
    char source[] = "World!";
    int doses[] ={1,3,4,100};
    printf("xxx %i xxx", 2[doses]);

    swag sw = {"GOLD",0.9};
    combination c ={ &sw, "aa"};
    safe s = {c, "sss"};
    printf("\n%s\n", s.numbers.swags->descritpion);
    /*strcat(destination,source);*/
    /*contactStr(destination, source);*/
    printf("Concatenated String: %s\n", contactStr(destination, source));
    findChar("a");
    return 0;
};
