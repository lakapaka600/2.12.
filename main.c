#include <stdio.h>

int main(void) {
int giorno1,giorno2,mese1,mese2,anno1,anno2;
    printf("inserisci il primo giorno");
    scanf("%d",&giorno1);
    printf("inserisci il secondo giorno");
    scanf("%d",&giorno2);
    printf("inserisci il primo mese");
    scanf("%d",&mese1);
    printf("inserisci il secondo mese");
    scanf("%d",&mese2);
    printf("inserisci il primo anno");
    scanf("%d",&anno1);
    printf("inserisci il secondo anno");
    scanf("%d",&anno2);
    int diff=giorno1-giorno2+(mese1-mese2)*30+(anno1-anno2)*360;
    printf("la differenza è:%d",diff);
    giorno1=diff%30;
    mese1=(diff/30)%12;
    anno1=diff/360;
    printf("la differenza in tutte le date è:%d,%d,%d",giorno1,mese1,anno1);

    return 0;
}
