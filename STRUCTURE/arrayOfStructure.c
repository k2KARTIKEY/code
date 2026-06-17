#include<stdio.h>
#include<string.h>
int main (){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];

    }pokemon;
    pokemon arr[3];
    strcpy(arr[0].name,"pikachu");
    arr[0].hp=100;
    arr[0].attack=100;
    arr[0].speed=100;
    arr[0].tier='A';

    strcpy(arr[1].name,"Charizard");
    arr[1].hp=300;
    arr[1].attack=1000;
    arr[1].speed=100;
    arr[1].tier='S';

    strcpy(arr[2].name,"herculus");
    arr[2].hp=9999;
    arr[2].attack=9990;
    arr[2].speed=9900;
    arr[2].tier='Z';

    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("Attack : %d\n",arr[i].attack);
        printf("Attack : %d\n",arr[i].hp);
        printf("Attack : %d\n",arr[i].speed);
        printf("Attack : %c\n",arr[i].tier);
    }
}