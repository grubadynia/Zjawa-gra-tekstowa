#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char funkcja_decyzja()
{
    char decyzja;
    while (1)
    {
        printf("Wpisz t (Tak) lub n (Nie): ");
        scanf_s(" %c", &decyzja);
        if (decyzja == 't' || decyzja == 'n') 
        {
            break;
        }
        printf("Nieprawidlowa odpowiedz. Sprobuj ponownie.\n");
    }
    return decyzja;
}

int los() 
{
    return rand() % 2;
}

int main()
{
    char decyzja;
    srand(time(0));
   
    printf("===== Ucieczka z nawiedzonego domu =====\n");
    printf("Znajdujesz sie w ciemnym i opuszczonym domu. Twoim zadaniem jest wydostac sie z niego.\n");
    printf("Musisz podejmowac decyzje, ktore wplyna na twoje szanse przetrwania.\n\n");

    printf("Przechodzisz przez korytarz i slyszysz dziwne dzwieki za soba. Czy chcesz przyspieszyc krok? (t/n)\n");
    decyzja = funkcja_decyzja();

    if (decyzja == 't') 
    {
        printf("Przyspieszasz i udaje ci sie dotrzec do drzwi.\n");
    }
    else 
    {  
        printf("Zjawa cie dopadla! Gra skonczona.\n");
        return 0;  
    }

    printf("Drzwi sa zamkniete. Widzisz okno. Czy chcesz sprobowac je otworzyc? (t/n)\n");
    decyzja = funkcja_decyzja();

    if (decyzja == 't') 
    {
        if (los()) 
        {
            printf("Okno otwiera sie bez problemu. Wychodzisz na zewnatrz i udaje ci sie uciec! Wygrales!\n");
            return 0;
        }
        else
        {
            printf("Okno jest zbyt ciezkie i nie mozesz go otworzyc. Slyszysz, ze ktos sie zbliza...\n");
        }
    }
    else 
    {
        printf("Postanawiasz szukac innego wyjscia i wracasz do korytarza.\n");
    }

    printf("Wracaj¹c znajdujesz schody prowadzace na gore. Czy chcesz sie tam udac? (t/n)\n");
    decyzja = funkcja_decyzja();

    if (decyzja == 't') 
    {
        printf("Na gorze znajdujesz ukryte drzwi prowadzace na strych.\n");
        if (los())
        {
            printf("Drzwi otwieraja sie, a za nimi ukryte jest wyjscie. Uciekasz i wygrywasz gre!\n");
        }
        else 
        {
            printf("Drzwi sa zamkniete na klucz, a zjawa cie dopada. Gra skonczona.\n");
        }
    }
    else
    {
        printf("Zostajesz na dole i probujesz znalezc inne wyjscie. Niestety, zjawa cie znajduje. Gra skonczona.\n");
    }
    return 0;
}
