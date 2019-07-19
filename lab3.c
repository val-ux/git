#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char name[50];
    int year;
    int coll;
    int pay;
}books;
 
void readBooks(books*st){
    printf("Введите название книги:");
    scanf("%s", st->name);
   /* printf("Введите год издания книги:");
    scanf("%d", &st->year);
    printf("Введите колличество страиц:");
    scanf("%d", &st->coll);
    printf("Введите стоимость книги:");
    scanf("%d", &st->pay);*/
}

static int cmp(const void *p1, const void *p2){
	
    books *st1 = *(books**)p1;
    books *st2 = *(books**)p2;
    
return strcmp(st1, st2)>0;
 
}
 
int main(int argc, char **argv){
    int count=5;
    printf("Введите колличество книг:");
    scanf("%d", &count);
    books** st = (books**)malloc(sizeof(books*)*count);
    for (int i = 0; i < count ; i++){
        st[i] = (books*) malloc (sizeof(books));
        readBooks(st[i]);
     }
     
      qsort(*st, count, sizeof(books*), cmp);
     //for (int i = 0; i < count ; i++){ 
    printf("Название книги:%s\n", st[0]-> name);
    /*printf("Год издания книги:%d\n", st[i]->year);
    printf("Колличество страниц:%d\n", st[i]->coll);
    printf("Стоимость:%d\n", st[i]->pay);*/

    for (int i = 0; i < count; i++)

    {
        free(st[i]);
    }
    free(st);
    return 0;
}
