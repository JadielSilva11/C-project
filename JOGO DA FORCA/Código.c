#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


typedef struct
{
    char word[50];
    char dica[50];
}PalavraDica;




int menu(void)
{
    int op1;
    printf("\t\t\t ______________________________________________\n");
    printf("\t\t\t|                          |        ______     |\n");
    printf("\t\t\t|      JOGO DA FORCA       |       |      |    |\n");
    printf("\t\t\t|__________________________|       O      |    |\n");
    printf("\t\t\t|                          |      /|\\     |    |\n");
    printf("\t\t\t|    [1] Jogar             |       |      |    |\n");
    printf("\t\t\t|    [2] Sair              |      / \\     |    |\n");
    printf("\t\t\t|__________________________|______________|____|\n");
    scanf("%d", &op1);




    if(op1 == 1)
    {
        int op2;
        printf("\t\t\t ______________________________________________\n");
        printf("\t\t\t|                          |        ______     |\n");
        printf("\t\t\t|      ESCOLHA UM MODO     |       |      |    |\n");
        printf("\t\t\t|__________________________|       O      |    |\n");
        printf("\t\t\t|                          |      /|\\     |    |\n");
        printf("\t\t\t|    [1] Singleplay        |       |      |    |\n");
        printf("\t\t\t|    [2] Dualplay          |      / \\     |    |\n");
        printf("\t\t\t|__________________________|______________|____|\n");
        scanf("%d", &op2);




        if(op2==1 || op2==2)
        {
            return op2;
        }
        else
        {
            return 0;
        }




    }
    else if(op1 == 2)
    {
        printf("\t _______________________________________ \n");
        printf("\t|            JOGO ENCERRADO!            |\n");
        printf("\t|_______________________________________|\n");
        return 0;
    }
    else
    {
        printf("\t _______________________________________ \n");
        printf("\t|    Voce inseriu uma opcao invalida!   |\n");
        printf("\t|_______________________________________|\n");
        return 0;
    }
}




void sorteio(char secreta[], char tip[])
{
    char p[20][10] = {"maca", "cadeira", "cachorro", "joao", "chuva", "geladeira", "carro", "livros", "casa", "elefante", "teclado", "mesa", "banheiro", "arnaldo", "hardware", "software", "almoco", "bicicleta", "camisa", "cozinha"};
    char d[20][15] = {"fruta", "objeto", "animal", "nome proprio", "fenomeno", "objeto", "automovel", "objeto", "edificio", "animal", "periferico", "objeto", "lugar da casa", "nome proprio", "O que chuta", "O que xinga", "refeicao", "tem rodas", "roupa", "lugar da casa"};




    int n = rand()%20;   //sorteando uma das palavras




    strcpy(secreta, p[n]);   //Copiando o nome para o vetor que ta na main
    strcpy(tip, d[n]);       //copiando as dicas para o vetor que ta na main
}




int verificar(char l , char digitadas[])
{
    int i;




    for(i=0;digitadas[i]!='\0';i++)
    {
        if(l==digitadas[i])
        {
            return 0;
        }




    }
    return 1;
}




int contarLetras(char word[])
{
    return strlen(word);
}




void receberSecretaeDica(PalavraDica spalavra[])
{
    printf(" ______________________________________\n");
    printf("| Digite a palavra secreta:            |\n");
    printf("|______________________________________|\n");
    printf(" >> ");
    scanf("%s" , spalavra->word);
    printf(" ______________________________________\n");
    printf("| Dica:                                |\n");
    printf("|______________________________________|\n");
    printf(" >> ");
    scanf("%s", spalavra->dica);
}



void boneco(int t)
{
    if(t == 4)
    {
        printf("|______________________________________|\n");
        printf("|                                      |\n");
        printf("|                       _____          |\n");
        printf("|                      |     |         |\n");
        printf("|                      O     |         |\n");
        printf("|                            |         |\n");
        printf("|                            |         |\n");
        printf("|                            |         |\n");
        printf("|____________________________|_________|\n");
        printf("|                                      |\n");
    }
    else if(t == 3)
    {
        printf("|______________________________________|\n");
        printf("|                                      |\n");
        printf("|                       _____          |\n");
        printf("|                      |     |         |\n");
        printf("|                      O     |         |\n");
        printf("|                     /|     |         |\n");
        printf("|                            |         |\n");
        printf("|                            |         |\n");
        printf("|____________________________|_________|\n");
        printf("|                                      |\n");
    }
    else if(t == 2)
    {
        printf("|______________________________________|\n");
        printf("|                                      |\n");
        printf("|                       _____          |\n");
        printf("|                      |     |         |\n");
        printf("|                      O     |         |\n");
        printf("|                     /|\\    |         |\n");
        printf("|                            |         |\n");
        printf("|                            |         |\n");
        printf("|____________________________|_________|\n");
        printf("|                                      |\n");
    }
    else if(t == 1)
    {
        printf("|______________________________________|\n");
        printf("|                                      |\n");
        printf("|                       _____          |\n");
        printf("|                      |     |         |\n");
        printf("|                      O     |         |\n");
        printf("|                     /|\\    |         |\n");
        printf("|                      |     |         |\n");
        printf("|                     /      |         |\n");
        printf("|____________________________|_________|\n");
        printf("|                                      |\n");
    }
    else if(t == 0)
    {

        printf("|______________________________________|\n");
        printf("|                                      |\n");
        printf("|                       _____          |\n");
        printf("|                      |     |         |\n");
        printf("|                      O     |         |\n");
        printf("|                     /|\\    |         |\n");
        printf("|                      |     |         |\n");
        printf("|                     / \\    |         |\n");
        printf("|____________________________|_________|\n");
        printf("|                                      |\n");
    }
}

void preencher(char word[] , int q)
{
    int i;

    for(i=0;i<q;i++)
    {
        word[i] = '*';
    }
    word[q] = '\0';       //Adicionei o '\0' para ñ aparecer lixo de memoria junto com os asteriscos
}




void adivinhar(char s[] , char n[], int q , int *d , int *v , char digitadas[] , int *qDgt, char tip[])
{




    int j;
    int iguais=0;         //contador que verifica a quantidade de letras acertadas pelo usuario
    int achou=0;          //flag para verificar se o jogador acertou a letra palpitada
    int t=5;              //numero de tentativas
    char letra;           //letra inserida pelo usuario




    printf(" ______________________________________\n");
    printf("|     VOCE CONSEGUE ADIVINHAR?         |\n");
    printf("|                                      |\n");
    printf("| Palavra: %s  Dica: %s\n", n, tip);
    printf("|                                      |\n");
    printf("| Voce tem direito a 5 erros!          |\n");
    printf("|                                      |\n");




    do{




        achou=0;
        iguais=0;
        printf("| Digite uma letra:                    |\n");
        printf("|______________________________________|\n");
        printf(" >> ");
        scanf(" %c" , &letra);








        if(verificar(letra , digitadas))
        {
            for(j=0;s[j]!='\0';j++)
            {
                if(s[j]==letra)
                {
                    achou=1;
                    n[j]=letra;
                }
            }
        }
        else
        {
            printf(" ______________________________________\n");
            printf("| Essa letra ja foi digitada !!        |\n");
            printf("|______________________________________|\n");
            t++;
        }




        if(verificar(letra , digitadas))
        {
            digitadas[*qDgt] = letra;
            digitadas[*qDgt+1] = '\0';
            *qDgt = *qDgt + 1;
        }




        if(achou==0 && (verificar(letra, digitadas)==0))
        {
            t--;
            printf(" ______________________________________\n");
            printf("|              ERROU                   |\n");
            printf("|                                      |\n");
            printf("| Restam %d tentativas                  |\n" , t);
            boneco(t);
        }
        else if(achou==1)
        {
            printf(" ______________________________________\n");
            printf("|              ACERTOU                 |\n");
            printf("|                                      |\n");
        }




        for(j=0;s[j]!='\0';j++)
        {
            if(s[j]==n[j])
            {
                iguais = iguais + 1;
            }
        }




        if(iguais==q)
        {
            printf("|______________________________________|\n");
            printf("|                WIN                   |\n");
            printf("|         PALAVRA: '%s'                 \n", s);
            *v= *v + 1;
        }
        else
        {
            if(t != 0)   //Condição para ñ ser exibido como a palavra está se o usuario ñ tiver mais tentativas
            {
                printf("| A palavra esta assim: %s\n" , n);
            }
        }




        if(t==0)
        {
            printf("|______________________________________|\n");
            printf("|               GAME OVER              |\n");
            printf("|      A PALAVRA ERA: '%s'              \n", s);
            printf("|                                      |\n");
            *d = *d + 1;
        }
    }while(t>0 && iguais!=q);
}




int main()
{
    FILE *palavras;

    palavras = fopen("jogadas.txt" , "w");

    srand(time(NULL));


    PalavraDica sPalavra[30];

    char s_palavra[20];

    int qtd_letras , qtd_digitadas=0;
    char digitadas[30];
    char t_palavras[20][10];  //Adicionei um vetor de vetores para armazenar todas as palavras secretas
    char tip_by_pc[10];       //dica do PC caso o jogador escolha o modo singleplay
    int v_jogadas=0;          //Contador de quantas vezes o usuario jogou
    int op=0;
    int d=0 , v=0;
    int opcao_menu = menu();




    do
    {
        if(opcao_menu==1)
        {
            sorteio(s_palavra, tip_by_pc);
            for(int i=0;i<50;i++)
            {
                printf("\n");
            }




            qtd_letras = contarLetras(s_palavra);




            char n_palavra[qtd_letras + 1];     //Adicionei +1 para a variavel ter um espaço para a função adicionar o '\0'




            preencher(n_palavra , qtd_letras);




            memset(digitadas, 0, sizeof(digitadas)); //zera as palavras ja digitadas pra ñ interferir na proxima palavra
            qtd_digitadas = 0;




            adivinhar(s_palavra, n_palavra, qtd_letras, &d, &v , digitadas , &qtd_digitadas, tip_by_pc);




            printf("| 1-MENU                               |\n");
            printf("| 2-SAIR                               |\n");
            printf("|______________________________________|\n");
            printf(" >> ");
            scanf("%d" , &op);


            if(op==1)
            {
                opcao_menu = menu();
            }


            strcpy(t_palavras[v_jogadas], s_palavra); //Insere a palavra secreta dentro do vetor de vetores
            v_jogadas++; //Aumenta a variavel para armazenar a proxima palavra secreta no proximo vetor




        }


        else if(opcao_menu==2)
        {
            receberSecretaeDica(sPalavra);





            for(int i=0;i<50;i++)
            {
                printf("\n");
            }




            qtd_letras = contarLetras(sPalavra->word);




            char n_palavra[qtd_letras + 1];     //Adicionei +1 para a variavel ter um espaço para a função adicionar o '\0'




            preencher(n_palavra , qtd_letras);




            memset(digitadas, 0, sizeof(digitadas)); //zera as palavras ja digitadas pra ñ interferir na proxima palavra
            qtd_digitadas = 0;




            adivinhar(sPalavra->word, n_palavra, qtd_letras, &d, &v , digitadas , &qtd_digitadas, sPalavra->dica);




            printf("| 1-MENU                               |\n");
            printf("| 2-SAIR                               |\n");
            printf("|______________________________________|\n");
            printf(" >> ");
            scanf("%d" , &op);


            if(op==1)
            {
                opcao_menu = menu();
            }


            strcpy(t_palavras[v_jogadas], sPalavra->word); //Insere a palavra secreta dentro do vetor de vetores
            v_jogadas++; //Aumenta a variavel para armazenar a proxima palavra secreta no proximo vetor
        }

    }while(op==1);

    for(int i=0;i<20;i++)
    {
        printf("\n");
    }

    printf("\t\t\t _____________________________________________________\n");
    printf("\t\t\t|                 OBRIGADO POR JOGAR                  |\n");
    printf("\t\t\t|_____________________________________________________|\n");
    printf("\t\t\t|  VOCE VENCEU %d VEZ(ES)   |  VOCE PERDEU %d VEZ(ES)   |\n", v, d);
    printf("\t\t\t|__________________________|__________________________|\n");
    printf("\t\t\t|                  PALAVRAS JOGADAS                   |\n");
    printf("\t\t\t|                                                     |\n");

    for(int i=0;i<v_jogadas;i++)      //Repetição para imprimir as strings do vetor
    {
        printf("\t\t\t|  Partida %d: ", i+1);
        printf("%s\n", t_palavras[i]);
        //impressao da palavra no arquivo
        fprintf(palavras , "%s\n" , t_palavras[i]);
    }

    printf("\t\t\t|_____________________________________________________|\n");


    return 0;
}