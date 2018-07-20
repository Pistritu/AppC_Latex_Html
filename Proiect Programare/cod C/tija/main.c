/*///\file main.c
///\brief Pagina principala a proiectului.
///
/// Creat Pistritu Ionut-Laurentiu la data de 26/06/15.*/
/*Libraries*/
#include <stdlib.h>
#include <stdio.h>

/*Main function begin*/
int main(){
/*    ///\fn int main()
    ///\brief Functia main.
    /// Aici se desfasoara toate calculele.*/
int cost_total, tija_max, tija_twen, tija_fift, tija_ten, tija_min;
int change;
const int lungime_max=40;   /*variabila pentru tija de 40 metri*/
const int lungime_twen=20;  /*variabila pentru tija de 20 metri*/
const int lungime_fift=15;  /*variabila pentru tija de 15 metri*/
const int lungime_ten=10;   /*variabila pentru tija de 10 metri*/
const int lungime_min=1;    /*variabila pentru tija de  1 metru*/

printf("\n O tija metalica are lungimea de 40 metri.  \n"); /*informatii despre lungimea maxima a tijei*/
printf(" *****************************************\n");
printf("\n"); /* line noua*/
printf(" Preturile tijei sunt: \n\n");
printf(" 40m   600 lei\t\n 20m   320 lei \t\n 15m   255 lei \t\n 10m   180 lei  \t\n  1m    20 lei\n\n"); /*afiseaza preturile pentru fiecare lungime a tijei*/
printf(" Introduceti lungimea tijei metalice pe care doriti sa o achizitionati:  \n");
printf(" metri: ");
scanf("%d",&change); /*scaneaza lungimea pe care o doriti achizitiona*/
printf("\n\n Pentru a obtine un profit maxim, tija poate fi vanduta astfel:  \n\n"); /*se calculeaza cum este cel mai profitabil pentru a vinde tija*/

printf("tija de 40m: %d\t cost: %d  lei\n",change/lungime_max, change/lungime_max*600); /*afiseaza numarul de tije si costul acestora*/
tija_max=change/lungime_max*600;
change=(change%lungime_max);


printf("tija de 20m: %d\t cost: %d  lei\n",change/lungime_twen, change/lungime_twen*320); /*afiseaza numarul de tije si costul acestora*/
tija_twen=change/lungime_twen*320;
change=(change%lungime_twen);


printf("tija de 15m: %d\t cost: %d  lei\n",change/lungime_fift, change/lungime_fift*255); /*afiseaza numarul de tije si costul acestora*/
tija_fift=change/lungime_fift*255;
change=(change%lungime_fift);


printf("tija de 10m: %d\t cost: %d  lei\n",change/lungime_ten, change/lungime_ten*180); /*afiseaza numarul de tije si costul acestora*/
tija_ten=change/lungime_ten*180;
change=(change%lungime_ten);


printf("tija de  1m: %d\t cost: %d  lei",change/lungime_min, change/lungime_min*20); /*afiseaza numarul de tije si costul acestora*/
tija_min=change/lungime_min*20;
change=(change%lungime_min);


printf("\n"); /*linie noua*/
printf("---------------------------------\n");
cost_total=(tija_max + tija_twen + tija_fift + tija_ten + tija_min); /*calculeaza costul total pentru tijele achizitionate*/
printf("Cost total: %d lei", cost_total); /*afiseaza costul*/

printf("\n\n");

getchar();
system("pause");
printf(".");
return 0; /*iesire cu succes din program*/

}
