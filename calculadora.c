#include <stdio.h>

int gl;
double a, b;

int calculadora (){
    char opcao;
    printf("\n===============================\nCalculadora Simples\n===============================\nSelecione uma operacao:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\nOpcao: ");
    scanf("%c", &opcao);
    while (getchar() != '\n');
    if(opcao=='5'){
        return gl=2;
    }
    else if(opcao>'0'&&opcao<'5'){
        printf("Digite o primeiro numero: ");
        scanf("%lf", &a);
        while (getchar() != '\n');
        printf("Digite o segundo numero: ");
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
    printf("Obrigado por usar a calculadora! Ate a proxima.\n");
    return gl=0;
}
int erro(){
    printf("Resposta invalida! Por favor, digite um numero de 1 a 5 de acordo com as opcoes.");
    return gl=1;
}
int outravez(){
    char x;
    printf("\n\nDeseja realizar outra operacao? (s/n): ");
    scanf(" %c", &x);
    while (getchar() != '\n');
    if(x=='s'){return gl=1;}
    else if(x=='n'){return gl=2;}
    else{
        printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.");
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
        printf("\nErro: Divisao por zero nao e permitida.");
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