#include <stdio.h>

int main() {
    int hora, minuto, segundo;
    int duracao, total_segundos, hora_fim, minuto_fim, segundo_fim;

    printf("Digite o horário de início (hh:mm:ss): ");
    scanf("%d:%d:%d", &hora, &minuto, &segundo);

    printf("Digite a duração em segundos: ");
    scanf("%d", &duracao);

    // Converte tudo para segundos
    total_segundos = hora * 3600 + minuto * 60 + segundo + duracao;

    // Calcula o horário de término
    hora_fim = (total_segundos / 3600) % 24;
    minuto_fim = (total_segundos % 3600) / 60;
    segundo_fim = total_segundos % 60;

    printf("Horário de término: %02d:%02d:%02d\n", hora_fim, minuto_fim, segundo_fim);

    return 0;
}