#include<stdio.h>
#include<string.h>
int main(){
    struct pokemon
    {
        int hp;
        int attack;
        int speed;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.attack=80;
    pikachu.hp=100;
    pikachu.speed=60;
    pikachu.teir='A';
    struct pokemon charizard;
    charizard.attack=200;
    charizard.hp=250;
    charizard.speed=55;
    charizard.teir='S';

    
    
    return 0;
}