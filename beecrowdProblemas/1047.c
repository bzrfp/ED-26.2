#include <stdio.h>
 
int main() {
 
    int horaInicial, minutoInicial, horaFinal, minutoFinal;
    scanf("%d %d %d %d", &horaInicial, &minutoInicial, 
    &horaFinal, &minutoFinal);
    
    int horasTotal, minutosTotal;

    if (horaFinal == horaInicial && minutoFinal == minutoInicial) {
        horasTotal = 24;
        minutosTotal = 0;    
    }
    else { 
    
        if (horaFinal >= horaInicial) 
            horasTotal = horaFinal - horaInicial;
        else 
            horasTotal = 24 - horaInicial + horaFinal;
 
        //qtd minutos
        if (minutoFinal >= minutoInicial) 
            minutosTotal = minutoFinal - minutoInicial;
        else {
            horasTotal--;
            if (horasTotal<0)
                horasTotal = 23;
            minutosTotal = 60 - minutoInicial + minutoFinal;
        }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 
    horasTotal, minutosTotal);
 
    return 0;
}
