#include <stdio.h>
 
int main() {
 
    int horaInicial, minutoInicial, horaFinal, minutoFinal;
    scanf("%d %d %d %d", &horaInicial, &minutoInical, 
    &horaFinal, &minutoFinal);
    
    int horasTotal, minutosTotal;
 
    if (horaInical == horaFinal 
    && minutoInicial == minutoFinal) {
        horasTotal = 24;
        minutosTotal = 0;
    }
    else { 
        if (horaFinal > horaInicial) 
            horasTotal = horaFinal - horaInicial;
        else if (horaFinal < horaInicial)
            horasTotal = 24-horaFinal + horaInicial;
            
        if (minutoFinal > minutoInicial) 
            minutossTotal = minutoFinal - minutoInicial;
        else if (minutoFinal < minutoInicial)
            minutosTotal = 60-minutoFinal + minutoInicial;
            
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(s)", 
    horasTotal, minutosTotal);
 
    return 0;
}
