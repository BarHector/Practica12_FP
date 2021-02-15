#include <stdio.h> 
#include <math.h> 

int opcion=0; 
float co=0; 
float ca=0; 
float h=0; 
float suma=0; 
float sn=0; 
float cs=0; 
float tn=0; 
float sc=0; 
float csc=0; 
float ctg=0; 

int seno(); 
int coseno(); 
int tangente();  
int cotangente();  
int cosecante();  
int secante(); 

int ejecutar(){ 
	do{ 
		printf("¿Que quiere calcular? \n1.Seno \n2.Coseno \n3.Tangente \n4.Cosecante \n5.Secante \n6.Cotangente \n7. Salir \n"); 
        scanf("%d", &opcion); 
        switch(opcion){ 
            case 1: seno(); 
                    break; 
            case 2: coseno(); 
                    break; 
            case 3: tangente(); 
                    break; 
            case 4: cosecante(); 
                    break; 
            case 5: secante(); 
                    break; 
            case 6: cotangente(); 
                    break; 
			case 7: printf("***** CERRANDO PROGRAMA *****\n");
					break; 
            default: printf("Esa opcion no existe, selecciona una que si\n"); 
                    break; 
        } 
    }while(opcion!=6); 
    return 0; 
} 

int seno(){ 
    printf("Ingresa el cateto opuesto \n"); 
    scanf("%f", &co); 
    printf("Ingresa el cateto adyacente para calcular la hipotenusa \n"); 
    scanf("%f", &ca); 
    suma = (co*co)+(ca*ca); 
    h = sqrt(suma); 
    sn = co/h; 
    printf("Seno = %f \n", sn);
} 

int coseno(){ 
    printf("Ingresa el cateto adyacente \n"); 
    scanf("%f", &ca); 
    printf("Ingresa el cateto opuesto para calcular la hipotenusa \n"); 
    scanf("%f", &co); 
    suma = (co*co)+(ca*ca); 
    h = sqrt(suma); 
    cs = ca/h; 
    printf("Coseno = %f \n", cs);
} 

int tangente(){ 
    printf("Ingresa el cateto opuesto \n"); 
    scanf("%f", &co); 
    printf("Ingresa el cateto adyacente \n"); 
    scanf("%f", &ca); 
    tn = co/ca; 
    printf("Tangente = %f \n", tn);  
} 

int cotangente(){ 
    printf("Ingresa el cateto opuesto \n"); 
    scanf("%f", &co); 
    printf("Ingresa el cateto adyacente \n"); 
    scanf("%f", &ca); 
    ctg = ca/co; 
    printf("Cotangente = %f \n", ctg);  
} 

int secante(){ 
    printf("Ingresa el cateto adyacente \n"); 
    scanf("%f", &ca); 
    printf("Ingresa el cateto opuesto para calcular la hipotenusa \n"); 
    scanf("%f", &co); 
    suma = (co*co)+(ca*ca); 
    h = sqrt(suma); 
    sc = h/ca; 
    printf("Secante = %f \n", sc);  
} 

int cosecante(){ 
    printf("Ingresa el cateto opuesto \n"); 
    scanf("%f", &co); 
    printf("Ingresa el cateto adyacente para calcular la hipotenusa \n"); 
    scanf("%f", &ca); 
    suma = (co*co)+(ca*ca); 
    h = sqrt(suma); 
    csc = h/co; 
    printf("Cosecante = %f \n", csc);  
} 