int main (int argc, char** argv) {
    char nome[30];
    char endereco[30];
    int idade;
    float nota1;
    float nota2;
    float media;

    printf("Nome \n");
    scanf ("%s", &nome);

    printf("Endereco \n");
    scanf ("%s", &endereco);

    printf("Idade \n");
    scanf("%d", &idade);

    printf("\n Nome: %s", nome);
    printf("\n Endereco: %s", endereco);
    printf("\n Idadae: %d", idade);

    printf("Insira nota 1: \n");
    scanf("&f", &nota1);

    printf("Insira nota 2: \n");
    scanf("&f", &nota2);

    media = (nota1 + nota2) / 2;
    printf ("media = %f", media);

    return 0
}