float Volume(float altura, float raio){
    return (PI*pow(raio,2))*altura;
}


void quadrado_perfeito(int num){
    float meio;
    meio=sqrt(num);
    if(meio*meio==num){
        printf("Quadrado perfeito");
    }else
    {
        printf("Nao eh um quadrado negativo");
    }
}

float maior_vet(float v[],int tam_vet){
    float maior;
    int i;
    maior = v[0];
    for(i=1;i<tam_vet;i++){
        if(v[i]>maior){
            maior=v[i];
        }
    }
    return maior;
}


/*Lista 8.2*/

void eq2g(int a, int b, int c){
    float delta;
    float x1,x2;
    delta=(pow(b,2))-(4*a*c);
    if(delta<0){
        printf("Funcao sem raizes");
    }else
    {
        if(delta==0){
            x1=((-b)+sqrt(delta))/(2*a);
            printf("Delta igual a zero, funcao com uma raiz: %.2f",x1);
        }else
        {
            x1=((-b)+sqrt(delta))/(2*a);
            x2=((-b)-sqrt(delta))/(2*a);
            printf("Delta maior que zero, funcao com duas raizes: %.2f e %.2f",x1,x2);
        }
    }
}
