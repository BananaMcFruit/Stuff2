#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validar_respuesta_menu(int a)
{
    if(a>=1 && a<=5)
        return 1;
    else
        return -1;
}

char * leer(){
    char c, *prt;
    int i=0;
    prt = (char *) malloc(1 * sizeof(char));
    *prt = '\0';
    while ((c=getchar())!='\n') {
        prt = (char *) realloc(prt, (i + 2) * sizeof(char));
        prt[i++] = c;
        prt[i] = '\0';
    }
    return prt;
}

int buscar_estudiante(estudiante *Estud, int n)
{
    char *nom;
    fflush(stdin);
    printf("\n\nDigite nombre o matricula del estudiante: ");
    nom=leer();
    int i;
    for(i=0;i<n;i++)
    {
        if(stricmp(Estud[i].nombre,nom)==0)
            return i;
        if(stricmp(Estud[i].matricula,nom)==0)
            return i;
    }
    return -1;
}

float calificacion_promedio(estudiante *Estud, int i)
{
    float suma=0;
    for(int j=0;j<Estud[i].cant_materias;j++){
        suma=(Estud[i].Mat[j].calif_mat)+suma;
    }
    return  suma/(Estud[i].cant_materias);
}


float calificacion_materia(materias *MAT, int i, int n)
{
    float suma1, suma=0;
    for(int j=0;j<n;j++){
        suma1=((MAT[i].Eva[j].ponderacion)/100)*(MAT[i].Eva[j].calificacion);
        suma=suma1+suma;
    }
    return  suma;
}

estudiante * ingresar_estudiante(estudiante *Estud, int cont)
{
    system("CLS");
    printf("**************************************DATOS DEL ESTUDIANTE**************************************");
    fflush(stdin);
    printf("\n1)Nombre: ");
    (Estud+cont)->nombre=leer();
    printf("2)Matricula(sin gui%cn): ", 162);
    scanf("%d", &(Estud+cont)->matricula);
    printf("3)Edad: ");
    scanf("%d", &(Estud+cont)->edad);
    printf("4)Cantidad de materias que cursa: ");
    scanf("%d", &(Estud+cont)->cant_materias);
    (Estud+cont)->Mat=ingresar_materias((Estud+cont)->cant_materias);
    return Estud;
}

materias * ingresar_materias(int cont)
{
    materias *MAT;
    MAT=(materias*)malloc(cont*sizeof(materias));
    printf("\n*****************INFORMACI%cN DE MATERIAS******************", 224);
    for(int i=0;i<cont;i++){
        fflush(stdin);
        printf("\n1)Nombre Materia %c%d: ", 35, i+1);
        (MAT+i)->nom_mat=leer();
        printf("2)Cantidad de puntos a evaluar: ");
        scanf("%d", &(MAT+i)->cant_evaluar);
        (MAT+i)->Eva=ingresar_calificacion(MAT[i].cant_evaluar);
        (MAT+i)->calif_mat=calificacion_materia(MAT, i, MAT[i].cant_evaluar);
    }
    return MAT;
}

evaluaciones * ingresar_calificacion (int cont)
{
    int suma;
    evaluaciones *EVA;
    EVA=(evaluaciones *)malloc(cont*sizeof(evaluaciones));
    for(int i=0;i<cont;i++){
        fflush(stdin);
        printf("\n->Evaluaci%cn %c%d", 162, 35, i+1);
        printf("\n1)Nombre: ");
        (EVA+i)->nom_eva=leer();
        do{
        suma=0;
        printf("2)Ponderaci%cn %s: ", 162, (EVA+i)->nom_eva);
        scanf("%f", &(EVA+i)->ponderacion);
        suma=((EVA+i)->ponderacion)+suma;
        if(suma>100){
            printf("ERROR. La ponderacion no puede ser m%cs de 100\n\n", 160);}
        }while(suma>100);
        printf("3)Calificaci%cn: ", 162);
        scanf("%f", &(EVA+i)->calificacion);
    }
    return EVA;
}
