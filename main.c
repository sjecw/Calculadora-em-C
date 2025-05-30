#include <stdio.h>

int gl;
double a, b;

int calculadora (){
    char opcao;
    printf("\n===============================\nCalculadora Simples\n===============================\nSelecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção: ");
    scanf("%c", &opcao);
    while (getchar() != '\n');
    if(opcao=='5'){
        return gl=2;
    }
    else if(opcao>'0'&&opcao<'5'){
        printf("Digite o primeiro número: ");
        scanf("%lf", &a);
        while (getchar() != '\n');
        printf("Digite o segundo número: ");
        scanf("%lf", &b);
        while (getchar() != '\n');
        if(opcao=='1'){return gl=5;}
        else if(opcao=='2'){return gl=6;}
        else if(opcao=='3'){return gl=7;}
        else if(opcao=='4'){return gl=8;}
    }
    else {
        return gl=3;
    }
}
int sair (){
    printf("Obrigado por usar a calculadora! Até a próxima.");
    return gl=0;
}
int erro(){
    printf("Resposta inválida! Por favor, digite um número de 1 a 5 de acordo com as opções.");
    return gl=1;
}
int outravez(){
    char x;
    printf("\nDeseja realizar outra operação? (s/n): ");
    scanf(" %c", &x);
    while (getchar() != '\n');
    if(x=='s'){return gl=1;}
    else if(x=='n'){return gl=2;}
    else{
        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.");
        return gl=4;}
}
double adicao(double f, double s){
    double x=f+s;
    printf("Resultado: %lf + %lf = %lf", f, s, x);
    return gl=4;
}
double subtracao(double f, double s){
    double x=f-s;
    printf("Resultado: %lf - %lf = %lf", f, s, x);
    return gl=4;
}
double vezes(double f, double s){
    double x=f*s;
    printf("Resultado: %lf * %lf = %lf", f, s, x);
    return gl=4;
}
double divisao(double f, double s){
    if(s==0){
        printf("\nErro: Divisão por zero não é permitida.");
        return gl=4;
    }
    double x=f/s;
    printf("Resultado: %lf / %lf = %lf", f, s, x);
    return gl=4;
}

int main()
{   
    calculadora();
    do{
    if (gl==1){calculadora();}
    else if(gl==2){sair();}
    else if(gl==3){erro();}
    else if(gl==4){outravez();}
    else if(gl==5){adicao(a,b);}
    else if(gl==6){subtracao(a,b);}
    else if(gl==7){vezes(a,b);}
    else if(gl==8){divisao(a,b);}
    } while (gl!= 0);
    
    return 0;
}