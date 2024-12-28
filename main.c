#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#include <locale.h>
void PessoasFelizes(){
    PlaySound("Sons/historia.wav", NULL, SND_ASYNC | SND_FILENAME);
    printf("\n");
    printf("         O    O    O    O    O    O\n");
    printf("        /|\\  /|\\  /|\\  /|\\  /|\\  /|\\ \n");
    printf("        / \\  / \\  / \\  / \\  / \\  / \\ \n");
    printf("     Obrigado, Snake, por nos salvar!\n");
    printf("\n");
}

void Historia(){
    char *red = "\033[31m";
    char *green = "\033[32m";
    char *blue = "\033[34m";
    char *yellow = "\033[33m";
    char *reset = "\033[0m";

    setlocale(LC_ALL, "");

    PlaySound("Sons/historia.wav", NULL, SND_ASYNC | SND_FILENAME);
    printf("%sO ETERNO DILEMA DE SNAKE%s\n", red, reset);
    Sleep(2500);
    system("cls");
    printf("%sSnake era um homem da Grecia antiga%s\n", blue, reset);
    printf("que ao negligenciar o salvamento de uma %scrianca%s\n", yellow, reset);
    printf("foi %samaldicoado%s e transformado em uma %scobra%s,\n", red, reset, green, reset);
    printf("condenado a ficar eternamente em um loop.\n");
    printf("Todo dia ele precisa tomar uma %sdecisao extremamente dificil%s.\n", yellow, reset);

    Sleep(4500);
    system("cls");
    printf("O Deus %sZeus%s, comovido com a situacao, ficou irritado\n", yellow, reset);
    printf("e prometeu um grande %scastigo%s a Snake.\n", red, reset);
    printf("Mas %sSnake nao era um homem ruim%s.\n", blue, reset);
    printf("Ele acreditava que %soutros iriam salvar a crianca%s,\n", green, reset);
    printf("e por isso ficou despreocupado.\n");

    Sleep(4500);
    system("cls");
    printf("%sSnake se deixou levar pela opiniao alheia...%s\n", blue, reset);

    Sleep(4500);
    system("cls");
    printf("Mas mal sabia%s ele que apenas ele tinha o poder %s\nde salvar a crianca...\n", blue, reset);
    printf("Mas nao o fez, confiando nas pessoas e sentindo-se %svergonhado%s.\n", red, reset);

    Sleep(4500);
    system("cls");
    printf("%sZeus reiterou:%s\n", yellow, reset);
    printf("%s\"O homem que nao sabe o poder de si, e nao tem coracao, nao merece o poder da decisao.\"%s\n", red, reset);

    Sleep(4500);
    system("cls");
    printf("Snake tem uma %smissao diaria%s.\n", yellow, reset);
    printf("Ele precisa tomar uma decisao dificil: %ssalvar as pessoas%s ou %squebrar o ciclo%s.\n", green, reset, blue, reset);

    Sleep(4500);
    system("cls");
    printf("Ao chegar em seu objetivo, Snake %ssalva 100 pessoas%s,\n", green, reset);
    printf("incluindo membros importantes de sua %sfamilia%s.\n", yellow, reset);
    printf("Mas, se ele %sdesviar da rota%s, essas pessoas acabam %smorrendo%s.\n", red, reset, red, reset);

    Sleep(4500);
    system("cls");
    printf("Mas Snake esta %scansado%s...\n", red, reset);
    printf("Ele sente sua vida %svazia%s e %ssem proposito%s.\n", blue, reset, blue, reset);
    printf("Todos os dias, ele repete a mesma coisa :(\n");

    Sleep(4500);
    system("cls");
    printf("Se ele quebrar o ciclo, cria um %srompimento no loop%s\n", yellow, reset);
    printf("e pode viver %snovas experiencias%s.\n", green, reset);
    printf("Mas ele se sente %sculpado%s, pois muitas pessoas sofreriam nesse processo.\n", red, reset);

    Sleep(4500);
    system("cls");
    printf("Ao longo do caminho, Snake recebe pitadas de dopamina\n", yellow, reset);
    printf("o fazendo ficar viciado no ciclo...%s.\n", green, reset);

    Sleep(4500);
    system("cls");

    PlaySound(NULL, 0, 0);
}


int main() {

voltar_menu_acima: {
    PlaySound("Sons/intro.wav", NULL, SND_ASYNC | SND_FILENAME);

    char digito;
    int i = 0;
    int j = 5;
    int a = 5;
    int l_loading;
    int ponts = 0;
    int estado_verificar_entrar_historia = 0;
    int ciclos = 0;

    int s_precionado = 1;

    char *red = "\033[31m";
    char *green = "\033[32m";
    char *blue = "\033[34m";
    char *reset = "\033[0m";

    int x_optmenu, menu_tipo;
    char tipocobra = 'O';

    char linha1[50] = "OOOOO#######################################";
    char linha2[50] = "############################################";
    char linha3[50] = "############################################";
    char linha4[50] = "############################################";
    char linha5[50] = "############################################";
    char linha6[50] = "############################################";
    char linha7[50] = "###########################################=";
    char linha8[50] = "############################################";
    char linha9[50] = "###########################################]";

    char loading[50] = "////////////////////////////////////////////";

    printf("%s--------------------------------------------%s\n", blue, reset);
    printf("%s-------- O  D I L E M A  S N A K E -----------%s\n", blue, reset);
    printf("%s--------------------------------------------%s\n", blue, reset);
    printf(" APERTE %s1.%s PARA INICIAR                    \n", red, reset);
    printf("        %s2.%s PERSONALIZAR COBRA              \n", red, reset);
    printf("        %s3.%s SAIR                              \n", red, reset);
    printf("--------------------------------------------\n");
    printf("ESCOLHA UM NUMERO :");

    printf("%s%s", red, reset);
    scanf("%d", &x_optmenu);
    PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);

    if(x_optmenu == 3){
          system("cls");
          printf("Saindo do game....");
          Sleep(700);
          exit(0);
    }

    for (l_loading = 0; l_loading <= 40; l_loading++) {
        loading[l_loading] = '|';
        printf("LOADINDG....\n");
        printf("%s \n", loading);
        Sleep(100);
        system("cls");}

    if (x_optmenu == 2) {
        system("cls");
        printf("ESCOLHA UMA APARENCIA PARA COBRA: \n");
        printf(" APERTE %s1.%s OOOOO              \n", red, reset);
        printf("        %s2.%s -----              \n", red, reset);
        printf("        %s3.%s >>>>>              \n", red, reset);
        printf("        %s4.%s ZZZZZ              \n", red, reset);
        printf("        %s5.%s VOLTAR MENU        \n", red, reset);
        printf("DIGITE UM NUMERO: ");

        scanf("%d", &menu_tipo);
        PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);

        switch (menu_tipo) {
            case 1:
                tipocobra = 'O';

                linha1[0] = tipocobra;
                linha1[1] = tipocobra;
                linha1[2] = tipocobra;
                linha1[3] = tipocobra;
                linha1[4] = tipocobra;

                system("cls");
                printf("Aparencia mudada com sucesso para opcao (1)\n");
                Sleep(960);
                system("cls");
                x_optmenu = 1;
                break;
            case 2:
                tipocobra = '-';

                linha1[0] = tipocobra;
                linha1[1] = tipocobra;
                linha1[2] = tipocobra;
                linha1[3] = tipocobra;
                linha1[4] = tipocobra;

                system("cls");
                printf("Aparencia mudada com sucesso para opcao (2)\n");
                Sleep(960);
                system("cls");
                x_optmenu = 1;
                break;
            case 3:
                tipocobra = '>';

                linha1[0] = tipocobra;
                linha1[1] = tipocobra;
                linha1[2] = tipocobra;
                linha1[3] = tipocobra;
                linha1[4] = tipocobra;

                system("cls");
                printf("Aparencia mudada com sucesso para opcao (3)\n");
                Sleep(960);
                system("cls");
                x_optmenu = 1;
                break;
            case 4:
                tipocobra = 'Z';

                linha1[0] = tipocobra;
                linha1[1] = tipocobra;
                linha1[2] = tipocobra;
                linha1[3] = tipocobra;
                linha1[4] = tipocobra;

                system("cls");
                printf("Aparencia mudada com sucesso para opcao (4)\n");
                Sleep(960);
                system("cls");
                x_optmenu = 1;
                break;
            case 5:
                system("cls");
                goto voltar_menu_acima;
                break;
    }}

while(x_optmenu == 1){
     if(i == 0  && estado_verificar_entrar_historia == 0){
        PlaySound("Sons/inicar.wav", NULL, SND_ASYNC | SND_FILENAME);
        Sleep(300);
        Historia();
     }


      system("cls");

      printf("%s--------------------------------------------%s\n",blue, reset);
      printf("%s-------- O  D I L E M A  S N A K E ---------%s\n",blue, reset);
      printf("%s--------------------------------------------%s\n",blue, reset);
      printf("%s SALVE OU QUEBRE O LOOP %s - DOPAMINA = %d ---\n",red, reset, ponts);
      printf("%s------------------------%s - CICLOS   = %d ---\n", red, reset, ciclos);

      printf("%s \n", linha1);
      printf("%s \n", linha2);
      printf("%s \n", linha3);
      printf("%s \n", linha4);
      printf("%s \n", linha5);
      printf("%s \n", linha6);
      printf("%s \n", linha7);
      printf("%s \n", linha8);
      printf("%s \n", linha9);
      digito = getch();

      if ((digito == 'D' || digito == 'd') && s_precionado == 1){

         linha1[i] = '#';
         linha1[j] = tipocobra;
         //EU VOU USAR ESSES DADOS DE i e j para desenhar linha 2
         PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);

         ponts++;

      ///--------------------------------------LINHA 1 PARA A 2--------
      }else if((digito == 'S' || digito == 's') && s_precionado == 1){
         linha1[i] = '#';
         linha2[j - 1] = tipocobra; /// E j - 1 pois depois que entra na primeira condi��o ja reinicia o loop novamente
         PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);


         //AGORA A VARIAVEL DE AMBIENTE GUARDA QUE S FOI PRECIONADO ANTERIOMENTE
         s_precionado = s_precionado + 1;
         ponts++;
         }


      else if((digito == 'D' || digito == 'd')&& s_precionado == 2){
      // E O D DA LINHA DE BAIXO, S�ENTRA SE S PRECIONADO ANTES (&& s_precionado)
         linha1[i] = '#';

         linha2[i - 1] = '#';
         linha2[j - 1] = tipocobra;
         PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);
         ponts++;

      ///------------------------------------LINHA 2 PARA A 3--------
      }else if((digito == 'S' || digito == 's') && s_precionado == 2){
         linha2[i - 1] = '#';
         linha3[j - 2] = tipocobra; /// E j - 1 pois depois que entra na primeira condi��o ja reinicia o loop novamente
         PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);

         //AGORA A VARIAVEL DE AMBIENTE GUARDA QUE S FOI PRECIONADO ANTERIOMENTE
         s_precionado = s_precionado + 1;
         ponts++;

      }else if((digito == 'D' || digito == 'd')&& s_precionado == 3){
         //linha1[i] = '#';
         linha2[i - 1] = '#';

         linha3[i - 2] = '#';
         linha3[j - 2] = tipocobra;
         PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);
         ponts++;
       ///------------------------------------LINHA 3 PARA A 4--------
       }else if((digito == 'S' || digito == 's') && s_precionado == 3){
         linha3[i - 2] = '#';
         linha4[j - 3] = tipocobra; /// E j - 1 pois depois que entra na primeira condi��o ja reinicia o loop novamente
         PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);

         //AGORA A VARIAVEL DE AMBIENTE GUARDA QUE S FOI PRECIONADO ANTERIOMENTE
         s_precionado = s_precionado + 1;
         ponts++;
       }else if((digito == 'D' || digito == 'd')&& s_precionado == 4){
         //linha1[i] = '#';
         linha3[i - 2] = '#';

         linha4[i - 3] = '#';
         linha4[j - 3] = tipocobra;
         PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);
         ponts++;}

       ///-----------------------------------LINHA 4 PARA A 5--------
       else if((digito == 'S' || digito == 's') && s_precionado == 4){
         linha4[i - 3] = '#';
         linha5[j - 4] = tipocobra; /// E j - 1 pois depois que entra na primeira condi��o ja reinicia o loop novamente
         PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);

         //AGORA A VARIAVEL DE AMBIENTE GUARDA QUE S FOI PRECIONADO ANTERIOMENTE TA LIGADO?
         s_precionado = s_precionado + 1;
         ponts++;
       }else if((digito == 'D' || digito == 'd') && s_precionado == 5){
         //linha1[i] = '#';
         linha4[i - 3] = '#';

         linha5[i - 4] = '#';
         linha5[j - 4] = tipocobra;
         PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);
         ponts++;

       ///-----------------------------------LINHA 5 PARA A 6--------
        }else if((digito == 'S' || digito == 's') && s_precionado == 5){
         linha5[i - 4] = '#';
         linha6[j - 5] = tipocobra; /// E j - 1 pois depois que entra na primeira condi��o ja reinicia o loop novamente
         PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);

         //AGORA A VARIAVEL DE AMBIENTE GUARDA QUE S FOI PRECIONADO ANTERIOMENTE
         s_precionado = s_precionado + 1;
         ponts++;
       }else if((digito == 'D' || digito == 'd') && s_precionado == 6){
         //linha1[i] = '#';
         linha5[i - 4] = '#';

         linha6[i - 5] = '#';
         linha6[j - 5] = tipocobra;
         PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);
         ponts++;
         ///-----------------------------------LINHA 6 PARA A 7--------
       }else if((digito == 'S' || digito == 's') && s_precionado == 6){
         linha6[i - 5] = '#';
         linha7[j - 6] = tipocobra; /// E j - 1 pois depois que entra na primeira condi��o ja reinicia o loop novamente
         PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);

         //AGORA A VARIAVEL DE AMBIENTE GUARDA QUE S FOI PRECIONADO ANTERIOMENTE
         s_precionado = s_precionado + 1;
         ponts++;

       }else if((digito == 'D' || digito == 'd') && s_precionado == 7){
         //linha1[i] = '#';
         linha6[i - 5] = '#';

         linha7[i - 6] = '#';
         linha7[j - 6] = tipocobra;
         PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);
         ponts++;
         ///-----------------------------------LINHA 7 PARA A 8--------
       }else if((digito == 'S' || digito == 's') && s_precionado == 7){
         linha7[i - 6] = '#';
         linha8[j - 7] = tipocobra; /// E j - 1 pois depois que entra na primeira condi��o ja reinicia o loop novamente
         PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);

         //AGORA A VARIAVEL DE AMBIENTE GUARDA QUE S FOI PRECIONADO ANTERIOMENTE
         s_precionado = s_precionado + 1;
         ponts++;

        }else if((digito == 'D' || digito == 'd') && s_precionado == 8){
          //linha1[i] = '#';
          linha7[i - 6] = '#';

          linha8[i - 7] = '#';
          linha8[j - 7] = tipocobra;
          PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);
          ponts++;
          ///-----------------------------------LINHA 8 PARA A 9--------
        }else if((digito == 'S' || digito == 's') && s_precionado == 8){
          linha8[i - 7] = '#';
          linha9[j - 8] = tipocobra; /// E j - 1 pois depois que entra na primeira condi��o ja reinicia o loop novamente
          PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);

          //AGORA A VARIAVEL DE AMBIENTE GUARDA QUE S FOI PRECIONADO ANTERIOMENTE
          s_precionado = s_precionado + 1;
          ponts++;
        }else if((digito == 'D' || digito == 'd') && s_precionado == 9){
          //linha1[i] = '#';
          linha8[i - 7] = '#';

          linha9[i - 8] = '#';
          linha9[j - 8] = tipocobra;
          PlaySound("Sons/move.wav", NULL, SND_ASYNC | SND_FILENAME);
          ponts++;



         ///-----------------------------------LINHA 7 PARA A 8--------
        }else{

            break;
        }

    i++;
    j++;
    a--;
    estado_verificar_entrar_historia++;
    if((linha9[43] == 'O') || (linha9[43] == '-') || (linha9[43] == 'Z') || (linha9[43] == '>')){
        system("cls");
        PlaySound("Sons/win.wav", NULL, SND_ASYNC | SND_FILENAME);
        printf("-----------------------------------------------\n");
        printf("------------ VOCE E UM HEROI SNAKE! ! ---------\n");
        printf("---------------- PONTOS : %d ------------------\n", ponts);
        Sleep(1000);

        system("cls");
        PessoasFelizes();
        Sleep(3000);

        i = 0;
        j = 5;
        a = 5;
        s_precionado = 1;
        ponts = 0;
        ciclos++;
        strcpy(linha1, "OOOOO#######################################");
        strcpy(linha2, "############################################");
        strcpy(linha3, "############################################");
        strcpy(linha4, "############################################");
        strcpy(linha5, "############################################");
        strcpy(linha6, "############################################");
        strcpy(linha7, "###########################################=");
        strcpy(linha8, "############################################");
        strcpy(linha9, "###########################################]");

        linha1[0] = tipocobra;
        linha1[1] = tipocobra;
        linha1[2] = tipocobra;
        linha1[3] = tipocobra;
        linha1[4] = tipocobra;

    }else if((linha7[43] == 'O') || (linha7[43] == '-') || (linha7[43] == 'Z') || (linha7[43] == 'Z')){
        system("cls");
        PlaySound("Sons/loser.wav", NULL, SND_SYNC | SND_FILENAME);
        PlaySound("Sons/historia.wav", NULL, SND_ASYNC | SND_FILENAME);
        printf("------------ SINTA-SE LIVRE SNAKE! ---------\n");
        printf("cada escolha tem seus pesos e consequencias.\n");
        printf("a liberdade pode ser uma uma bencao ou maldicao\n");
        Sleep(5000);
        system("cls");
        goto voltar_menu_acima;
    }

}

    system("cls");
    return 0;
}}
