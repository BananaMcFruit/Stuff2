#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

void menu();
int piz_marg();   //1
int piz_pep();    //2
int piz_toci();   //3
int piz_veg();    //4
int piz_sait();   //5
int piz_carn();   //6
int piz_cust();   //custom
float total();
int contador();
char * leer(void);
float total_orden();
void memory();
void archivo();

int x,r,t,w,z;
float marg , pep, toci, veg, sait, car ,cust ,dess ;
float total1;

char * leer()
{
    char c, *prt;
    int i=0;
    prt = (char *) malloc(1 * sizeof(char));
    *prt = '\0';
    while ((c=getchar())!='\n')
    {
        prt = (char *) realloc(prt, (i + 2) * sizeof(char));
        prt[i++] = c;
        prt[i] = '\0';
    }
    return prt;
}
void archivo(){
FILE *factura;
char pizza[30];
int precio;
int cantidad;

factura = fopen("C:\\Users\\soulc\\OneDrive\\Desktop\\Videos\\Tactuklandia\\D_Tactuk_Pizzeria", "w");

 printf("Tipo de pizza: ");
   gets(pizza);
 fprintf(factura, "Pizza %s\n", pizza);
 printf("Precio: ");
   precio = total1;
 fprintf(factura, "%.2f$ pesos.", precio);
 printf("Cantidad: ");
  cantidad = &x;
 fprintf(factura, "%d pizzas.", cantidad);
 fclose(factura);
 getch();
}

int main()
{

  char mesa; {
  printf("\n\t+===== Bienvenidos a la Pizzer%ca Tactuk =====+ \n", 161);
  printf("\n\t       -------------------------------- \n");

    printf("\n\n\t  A. %c%c%c%c\t\t", 201, 205, 205, 187); printf("\t B. %c%c%c%c%c", 201, 205, 203, 205, 187);
    printf("\n\t     %c  %c\t\t", 186,186); printf("\t    %c %c %c", 186,186,186);
    printf("\n\t     %c%c%c%c\t\t", 200, 205, 205, 188); printf("\t    %c%c%c%c%c",200, 205, 202, 205, 188);
    printf("\n\n\t\t       C. %c%c%c%c%c%c%c%c",201, 205, 205, 205, 205, 205, 205, 187);
    printf("\n\t\t          %c%c%c%c%c%c%c%c",204, 205, 205, 205, 205, 205, 205, 185);
    printf("\n\t\t          %c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 188);
    }

    printf("\n\n  %cEn d%cnde se quiere sentar? (A para 2 personas, B para 4 personas, C para 8 personas):",168,162);{
    scanf("%c", &mesa);
    }
    menu();
}

void menu()
{

    int x;
   printf("\n\n\n");
    //Menu
    printf("NUM.~~~~~PIZZAS~~~~~~~~~~~~~~~~~~~~PRECIO~~~~~~~~~~~~~~~~~~DESCRIPCION~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n");
    printf("1       Pizza Margarita           $375.00            Pizza con extra queso. Simplemente sabrosa. \n\n");
    printf("2       Pizza Pepperoni           $400.00            La cl%csica pizza que ves en todos lados. \n\n",160);
    printf("3       Pizza Tocineta            $425.00            Mucha tocineta bien saladita. Yummy!  \n\n");
    printf("4       Pizza Vegetales           $350.00            Los que quieren llevar dieta y desarreglo a la vez.\n\n");
    printf("5       Pizza Salchica Italiana   $400.00            Picante salchicha para los valientes. \n\n");
    printf("6       Pizza Full Carne          $450.00            Carn%cvoro al fin.               \n\n", 161);
    printf("7       Pizza Customizable        $475.00            Para los ex%cticos. \n\n", 162);
    printf("8       Total de orden \n\n");
    printf("9       End\n\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf(" %cCu%cl pizza desea ordenar?: ", 168, 160);
    scanf("%d",&x);



    switch(x)
    {
    case 1: piz_marg();
            break;

    case 2: piz_pep();
            break;

    case 3: piz_toci();
            break;

    case 4: piz_veg();
            break;

    case 5: piz_sait();
            break;

    case 6: piz_carn();
            break;

    case 7: piz_cust();
            break;

    case 8: total();
            break;

    case 9: exit(0);

    default: printf("Esa opci%cn no se encuentra en el men%c.\n", 162, 163);
       {
       system("cls");
      void menu();}
    }

}

int piz_marg()
{
    printf("Entonces una Pizza Margarita.");
    printf("\n\n %cCu%cntas pizzas? :", 168, 160);
    scanf("%d",&x);

    marg=x*375;

    printf("\n\n %cAlgo m%cs? (1-Claro, 2-Solo eso)", 168, 160);
    scanf("%d",&r);

    if (r==1)
    {   system("cls");                                  //clear screen.
        {menu();}
    }

    else
    {total();}
}

int piz_pep()
{
    printf("Entonces una Pizza Pepperoni.");
    printf("\n\n %cCu%cntas pizzas? :", 168, 160);
    scanf("%d",&x);

    pep = x*400;

    printf("\n\n %cAlgo m%cs? (1-Claro, 2-Solo eso)", 168, 160);
    scanf("%d",&r);

    if (r==1)
    {   system("cls");
        {menu();}
    }
    else
    {total();}
}
int piz_toci()
{

    printf("Entonces una Pizza Tocineta.");
    printf("\n\n %cCu%cntas pizzas? :", 168, 160);
    scanf("%d",&x);

    toci = x*425;

    printf("\n\n %cAlgo m%cs? (1-Claro, 2-Solo eso)", 168, 160);
    scanf("%d",&r);

    if (r==1)
    {   system("cls");
        {menu();}
    }
    else
    {total();}

}
int piz_veg()
{
    printf("Entonces una Pizza Vegetales.");
    printf("\n\n %cCu%cntas pizzas? :", 168, 160);
    scanf("%d",&x);

    veg = x*350;

    printf("\n\n %cAlgo m%cs? (1-Claro, 2-Solo eso)", 168, 160);
    scanf("%d",&r);

    if (r==1)
    {   system("cls");
        {menu();}
    }
    else
    {total();}

}
int piz_sait()
{

    printf("Entonces una Pizza Salchicha Italiana");
    printf("\n\n %cCu%cntas pizzas? :", 168, 160);
    scanf("%d",&x);

    sait = x*400;

    printf("\n\n %cAlgo m%cs? (1-Claro, 2-Solo eso)", 168, 160);
    scanf("%d",&r);

    if (r==1)
    {   system("cls");
        {menu();}
    }
    else
    {total();}

}
int piz_carn()
{

    printf("Entonces una pizza Full Carne.");
    printf("\n\n %cCu%cntas pizzas? :", 168, 160);
    scanf("%d",&x);

    car = x*450;

    printf("\n\n %cAlgo m%cs? (1-Claro, 2-Solo eso)", 168, 160);
    scanf("%d",&r);

    if (r==1)
    {   system("cls");
        {menu();}
    }
    else
    {total();}

}
int piz_cust(){
{
    printf("Entonces una Pizza Customizada.");
    printf("Hay una selecci%cn de 6 ingredientes que puede a%cadirle\na su pizza custumizada. M%cximo 2.\n\n\n", 162, 164, 160);
    printf("\n 1. Hongos\n\t 2. Pepperoni\n\t 3. Tocineta\n");
    printf("\n 4. Tomate y ajies\n\t 5. Bordes de Queso\n\t 6. Pi%ca\n",164);
    scanf("%d", &x);
    switch(x){
    case 1: printf("\nUsted a%cadi%c Hongos.\n", 164, 162);
        break;
    case 2: printf("\nUsted a%cadi%c Pepperoni.\n", 164, 162);
        break;
    case 3: printf("\nUsted a%cadi%c Tocineta.\n", 164, 162);
        break;
    case 4: printf("\nUsted a%cadi%c Tomates y ajies.\n", 164, 162);
        break;
    case 5: printf("\nUsted a%cadi%c Bordes de queso.\n", 164, 162);
        break;
    case 6: printf("\nUsted a%cadi%c Pi%ca.\n", 164, 162, 164);
        break;
    }
}
    printf("\n\n %cCu%cntas pizzas? :", 168, 160);
    scanf("%d",&x);

    cust = x*475 ;

    printf("\n\n %cAlgo m%cs? (1-Claro, 2-Solo eso)", 168, 159);
    scanf("%d",&r);

    if (r==1)
    {   system("cls");
        {menu();}
    }
    else
    {total();}

}
float total()
{
    system("cls");
    printf("%cQuiere la pizza para comer aqui?\n", 168);
    printf("     1) S%c \t\n", 161);
    scanf("%d",&w);

    switch(w)

    {
    case 1: contador();
            break;

    default: system("cls");
             printf("Esa opci%cn no se encuentra en el men%c.\n", 162, 163);
    }

}
int contador(){
    int tiempito;
    printf("Su pizza llevar%c un aproximado de 2 a 5 minutos (120 - 300 segundos) en hornearse y prepararse.\n",160);
    scanf("%d", &tiempito);

     while(tiempito !=0){

        printf("\n\n\t Tiempo de espera: %d segundos...", tiempito);
        tiempito--;
        Sleep(1000);
        system("cls");

    }
      printf("\n\tSu pizza ya est%c lista.\n\n\n", 160);
      printf("\a");
        return total_orden();
}

float total_orden()
{
   {

    printf("\t\n%cPago?: 1. En efectivo \n", 168);
    scanf("%d",&t);
        }
    switch (t)
    {
    case 1: total1 += (marg + pep + toci + veg + car + sait + cust)*1.15;
            printf("\nEl total es %.2f$ pesos. \n\n",total1);

            break;

    default: system("cls");
             printf("\n Esa opci%cn no se encuentra en el men%c.\n", 162, 163);
    }
    printf("%cCon cu%cnto desear%c pagar?\n\n", 168, 160, 160);
    printf("Bueno manin, deja ver cuanto tengo en la cartera...:");
    printf("\n\n1. 500$ \t2. 1000$ \t3. 2000$ \t4. 3000$ \t5. 5000$ \t6. 7000$\n\n");
    scanf("%d", &z);

    switch(z){
   case 1:  total1 = 500 - total1;
     break;
   case 2:  total1 = 1000 - total1;
     break;
   case 3:  total1 = 2000 - total1;
     break;
   case 4:  total1 = 3000 - total1;
     break;
   case 5:  total1 = 5000 - total1;
     break;
   case 6:  total1 = 7000 - total1;
     break;
    }
    printf("\n\nSu cambio es de: %.2f$ pesos.\n\n\n", total1);

    printf("         Gracias por preferir Pizzer%ca Tactuk          \n ", 161);
    printf("          +===============================+          \n\n");
    printf("                && ¡Vuelva pronto! && \n\n");
}
