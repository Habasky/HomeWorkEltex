#include <stdio.h>
#include <string.h>
#define MAX 100

struct abonent {
char name[10];
char second_name[10];
char tel[10];
};

void add(struct abonent abonents[], int *count);
void del(struct abonent abonents[], int *count);
void search(struct abonent abonents[], int count);
void display(struct abonent abonents[], int count);

int main() {

    struct abonent abonents[MAX];
    int menu = 0, count = 0;

    
    do{
        printf("1) Add\n2) Delete\n3) Find\n4) Dysplay\n5) Exit\n");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                add(abonents, &count);
                break;
            case 2:
                del(abonents, &count);
                break;
            case 3:
                search(abonents, count);
                break;
            case 4:
                display(abonents, count);
                break;
            case 5:
                return 1;
                break;
        }


    } while(menu != 5);

    return 0;
}

void add(struct abonent abonents[], int *count){
    if (*count >= MAX) {
        printf("Error");
    } else {
        struct abonent pers;
        scanf("%s%s%s", &pers.name, &pers.second_name, &pers.tel);
        abonents[*count] = pers;
        (*count)++;
    }
}
void del(struct abonent abonents[], int *count){

    char searchName[10];
    scanf("%s", searchName);

    for (int i = 0; i < *count; i++) {
        if (strcmp(abonents[i].name, searchName) == 0) {
            memset(&abonents[i], 0, sizeof(struct abonent));
            for (int j = i; j < *count - 1; j++) {
                abonents[j] = abonents[j + 1];
            }
            (*count)--;
            return;
        }
    }
}
void search(struct abonent abonents[], int count){
    char searchName[10];
    scanf("%s", searchName);
    for (int i = 0; i < count; i++){
        if (strcmp(abonents[i].name, searchName) == 0)
        printf("%s %s %s\n", abonents[i].name, abonents[i].second_name, abonents[i].tel);
    }
}
void display(struct abonent abonents[], int count){
    for (int i = 0; i < count; i++){
        printf("%s %s %s\n", abonents[i].name, abonents[i].second_name, abonents[i].tel);
    }
}