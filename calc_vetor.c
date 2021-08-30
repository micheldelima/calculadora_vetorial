/*
Autor: Michel de Lima
Esse código foi escrito, compilado e testado sobre o Windows 10 Home Single Language 64 bits.
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int c,opcao,n;
    int d,x,y,z,x1,x2,x3,y1,y2,y3,z1,z2,z3,i,j,k,v,v1x1,v1y1,v2x1,v2y1,v1z1,v2z1,v1x2,v2x2,modU,modV,projecao1,projecao2,misto;
    float coordenada1,coordenada2;
    setlocale(LC_ALL, "Portuguese");
    system("color 5F");

    c++;
    c = 1;
    while (c == 1)
    {
        printf("////////////////////////////////\n");
        printf("//////Calculadora Vetorial//////\n");
        printf("///////////By Michel////////////\n");
        printf("///////Los Bravos - UEPG////////\n");
        printf("////////////////////////////////\n");
        printf("/////////////MENU///////////////\n");
        printf("[1]  Adição entre vetores\n");
        printf("[2]  Subtração entre vetores\n");
        printf("[3]  Produto vetorial e escalar\n");
        printf("[4]  Ângulos entre vetores\n");
        printf("[5]  Projeção entre vetores\n");
        printf("[6]  Produto misto\n");
        printf("[7]  Equação vetorial\n");
        printf("[8]  Equação paramétrica\n");
        printf("[9]  Equação simétrica\n");
        printf("[10] Equação geral do plano\n");
        printf("[11] Sair\n");
        printf("////////////////////////////////\n");
        printf("///Escolha uma opção: ");
        scanf("%d",&opcao);
        printf("////////////////////////////////\n");

        switch (opcao)
        {
        case 1:
            printf("///Opção escolhida foi:\n///Adição entre vetores!\n");
            printf("////////////////////////////////\n");
            printf("///Escolha uma dimenção:\n[1] R2\n[2] R3\n===> Opção: ");
            scanf("%d", &n);
            if (n == 1)
            {
                printf("===> Vetor 1 em R2: ");
                scanf("%d %d",&v1x1, &v1y1);
                printf("===> Vetor 2 em R2: ");
                scanf("%d %d",&v2x1, &v2y1);
                printf("////////////////////////////////\n");
                x = v1x1+v2x1;
                y = v1y1+v2y1;
                printf("=> A soma entre os vetores é: (%d, %d)\n",x,y);
            }
            else
            {

                printf("===> Vetor 1: ");
                scanf("%d %d %d",&v1x1, &v1y1, &v1z1);
                printf("===> Vetor 2: ");
                scanf("%d %d %d",&v2x1, &v2y1, &v2z1);
                printf("////////////////////////////////\n");
                x = v1x1+v2x1;
                y = v1y1+v2y1;
                z = v1z1+v2z1;
                printf("=> A soma entre os vetores é: (%d, %d, %d)\n",x,y,z);
            }
            break;

        case 2:
            printf("///Opção escolhida:\n///Subtração entre vetores\n");
            printf("////////////////////////////////\n");
            printf("///Escolha uma dimenção:\n[1] R2\n[2] R3\n===> Opção: ");
            scanf("%d", &n);
            if (n == 1)
            {
                printf("===> Vetor 1 em R2: ");
                scanf("%d %d",&v1x1, &v1y1);
                printf("===> Vetor 2 em R2: ");
                scanf("%d %d",&v2x1, &v2y1);
                printf("////////////////////////////////\n");
                x = v1x1-v2x1;
                y = v1y1-v2y1;
                printf("=> A subtração entre os vetores é: (%d, %d)\n",x,y);
            }
            else
            {

                printf("===> Vetor 1: ");
                scanf("%d %d %d",&v1x1, &v1y1, &v1z1);
                printf("===> Vetor 2: ");
                scanf("%d %d %d",&v2x1, &v2y1, &v2z1);
                printf("////////////////////////////////\n");
                x = v1x1-v2x1;
                y = v1y1-v2y1;
                z = v1z1-v2z1;
                printf("=> A subtração entre os vetores é: (%d, %d, %d)\n",x,y,z);
            }
            break;

        case 3:
            printf("///Opção escolhida:\n///Produto vetorial e escalar\n");
            printf("////////////////////////////////\n");
            printf("===> Vetor U em R3: ");
            scanf("%d %d %d",&x1, &x2, &x3);
            printf("===> Vetor V em R3: ");
            scanf("%d %d %d",&y1, &y2, &y3);
            printf("////////////////////////////////\n");
            printf("///Escolha a opção de operação geometrica:\n[1] Vetorial\n[2] Escalar\n===> Opção: ");
            scanf("%d", &n);
            if (n==1)
            {
                i = (x2 * y3) - (x3 * y2);
                j = (x3 * y1) - (x1 * y3);
                k = (x1 * y2) - (x2 * y1);

                if(i+j+k ==0 && ((x1 ==0 && x2 == 0 && x3 == 0) || (y1 == 0 && y2 == 0 && y3 == 0)))
                {
                    printf("=> Os vetores U e V são colineares e um deles é nulo.\n");
                }

                else
                {
                    if (i+j+k == 0)
                    {
                        printf("=> Os vetores U e V são colineares.\n");
                    }
                    else
                        printf ("=> O vetor (%d, %d, %d) é ortogonal a U e V.\n", i, j, k);
                }
            }
            else
            {
                v = (x1 * y1) + (x2 * y2) + (x3 * y3);
                if (v==0)
                {
                    printf("=> Os vetores U e V são ortogonais e o produto é: (%d)\n", v);
                }

                else
                {
                    if (v > 0)
                    {
                        printf("=> U e V formam ângulo agudo e o produto é: (%d)\n",v);
                    }
                    else
                    {
                        printf("=> U e V formam um âgulo obtuso e produto é: (%d)\n",v);
                    }
                }
            }
            break;

        case 4:
            printf("///Opção escolhida:\n///Ângulo entre vetores\n");
            printf("////////////////////////////////\n");
            printf("===> Vetor U em R3: ");
            scanf("%d %d %d",&v1x1, &v1y1, &v1z1);
            printf("===> Vetor V em R3: ");
            scanf("%d %d %d",&v2x1, &v2y1, &v2z1);
            printf("////////////////////////////////\n");

            v = (v1x1 * v2x1) + (v1y1 * v2y1) + (v1z1 * v2z1);
            if (v==0)
            {
                printf("=> Os vetores U e V são ortogonais e o produto é: (%d)\n", v);
            }

            else
            {
                if (v > 0)
                {
                    printf("=> U e V formam ângulo agudo e o produto é: (%d)\n",v);
                }
                else
                {
                    printf("=> U e V formam um âgulo obtuso e produto é: (%d)\n",v);
                }
            }

            modU = ((pow(v1x1,2))+pow(v1y1,2)+pow(v1z1,2));
            modV = ((pow(v2x1,2))+pow(v2y1,2)+pow(v2z1,2));
            //modV =
            printf("=> Módulo do vetor |U| é: Raiz de %d\n",modU);
            printf("=> Módulo do vetor |V| é: Raiz de %d\n",modV);

            if (v == 0)
            {
                printf("=> O ângulo entre os Vetores U e V é: 90º.\n");
            }
            else
            {
                printf("=> O ângulo é +- %d/Raiz de %d x Raiz de %d\n",v,modU,modV);
            }
            break;

        case 5:
            printf("///Opção escolhida:\n///Projeção entre vetores\n");
            printf("////////////////////////////////\n");
            printf("===> Vetor U em R2: ");
            scanf("%d %d",&v1x1, &v1y1);
            printf("===> Vetor V em R2: ");
            scanf("%d %d",&v2x1, &v2y1);

            v = (v1x1 * v2x1) + (v1y1 * v2y1);

            if (v==0)
            {
                printf("=> Os vetores U e V são ortogonais e o produto é: (%d)\n", v);
            }

            else
            {
                if (v > 0)
                {
                    printf("=> U e V formam ângulo agudo e o produto é: (%d)\n",v);
                }
                else
                {
                    printf("=> U e V formam um âgulo obtuso e produto é: (%d)\n",v);
                }
            }
            printf("////////////////////////////////\n");
            modV = ((pow(v2x1,2))+pow(v2y1,2));
            printf("///Módulo do vetor |V| é: Raiz de %d\n",modV);
            projecao1 = v2x1 * v;
            projecao2 = v2y1 * v;
            coordenada1 = (v2x1 * v)/modV;
            coordenada2 = (v2y1 * v)/modV;
            printf("////////////////////////////////\n");
            printf("=> O vetor projeção é: (%d/Raiz %d %d/Raiz %d)\n",projecao1, modV, projecao2, modV);
            printf("=> Coordenadas:\n x: +- %.2f\n y: +- %.2f\n",coordenada1,coordenada2);
            break;

        case 6:
            printf("///Opção escolhida:\n///Produto misto\n");
            printf("////////////////////////////////\n");
            printf("===> Vetor U em R3: ");
            scanf("%d %d %d",&x1, &x2, &x3);
            printf("===> Vetor V em R3: ");
            scanf("%d %d %d",&y1, &y2, &y3);
            printf("===> Vetor W em R3: ");
            scanf("%d %d %d",&z1, &z2, &z3);
            printf("////////////////////////////////\n");
            if (n==1)
            {
                i = (x2 * y3) - (x3 * y2);
                j = (x3 * y1) - (x1 * y3);
                k = (x1 * y2) - (x2 * y1);

                if(i+j+k ==0 && ((x1 ==0 && x2 == 0 && x3 == 0) || (y1 == 0 && y2 == 0 && y3 == 0)))
                {
                    printf("=> Os vetores U e V são colineares e um deles é nulo.\n");
                }

                else
                {
                    if (i+j+k == 0)
                    {
                        printf("=> Os vetores U e V são colineares.\n");
                    }
                    else
                        printf ("=> O vetor (%d, %d, %d) é ortogonal a U e V.\n", i, j, k);
                }
            }
            else
            {
                v = (x1 * y1) + (x2 * y2) + (x3 * y3);
                if (v==0)
                {
                    printf("=> Os vetores U e V são ortogonais e o produto é: (%d)\n", v);
                }

                else
                {
                    if (v > 0)
                    {
                        printf("=> U e V formam ângulo agudo e o produto é: (%d)\n",v);
                    }
                    else
                    {
                        printf("=> U e V formam um âgulo obtuso e produto é: (%d)\n",v);
                    }
                }
            }
            i = z1*((x2 * y3) - (x3 * y2));
            j = z2*((x3 * y1) - (x1 * y3));
            k = z3*((x1 * y2) - (x2 * y1));
            printf("=> O produto misto de U,V e W é: %d\n",i+j+k);
            break;

        case 7:
            printf("///Opção escolhida:\n///Equação vetorial\n");
            printf("////////////////////////////////\n");
            printf("===> Ponto A em R3: ");
            scanf("%d %d %d",&x1, &x2, &x3);
            printf("===> Vetor U em R3: ");
            scanf("%d %d %d",&y1, &y2, &y3);
            printf("===> Vetor V em R3: ");
            scanf("%d %d %d",&z1, &z2, &z3);
            printf("////////////////////////////////\n");
            printf("=> A equação vetorial é:\n(x,y,z)=(%d,%d,%d)+h(%d,%d,%d)+t.(%d,%d,%d)\n",x1,x2,x3,y1,y2,y3,z1,z2,z3);
            break;

        case 8:
            printf("///Opção escolhida:\n///Equação paramétrica\n");
            printf("////////////////////////////////\n");
            printf("===> Ponto A em R3: ");
            scanf("%d %d %d",&x1, &x2, &x3);
            printf("===> Vetor U em R3: ");
            scanf("%d %d %d",&y1, &y2, &y3);
            printf("===> Vetor V em R3: ");
            scanf("%d %d %d",&z1, &z2, &z3);
            printf("////////////////////////////////\n");
            printf("=> A equação paramétrica é:\nx = %d %dh %dt\ny = %d %dh %dt\nz = %d %dh %dt\n",x1,y1,z1,x2,y2,z2,x3,y3,z3);

            break;

        case 9:
            printf("///Opção escolhida:\n///Equação simétrica\n");
            printf("////////////////////////////////\n");
            printf("===> Ponto A em R3: ");
            scanf("%d %d %d",&x1, &x2, &x3);
            printf("===> Vetor U em R3: ");
            scanf("%d %d %d",&y1, &y2, &y3);
            printf("////////////////////////////////\n");
            printf("=> A equação simétrica é:\nx-%d/%d = y-%d/%d = z-%d/%d\n",x1,y1,x2,y2,x3,y3);
            break;

        case 10:
            printf("///Opção escolhida:\n///Equação geral do plano\n");
            printf("////////////////////////////////\n");
            printf("*Vale lembrar que primeiro se deve achar o\nvetor N (normal) que é o produto vetorial!\n");
            printf("////////////////////////////////\n");
            printf("===> Vetor N (normal) em R3: ");
            scanf("%d %d %d",&x1, &x2, &x3);
            printf("===> Ponto qualquer em R3: ");
            scanf("%d %d %d",&y1, &y2, &y3);
            printf("////////////////////////////////\n");
            d = (x1*y1)+(x2*y2)+(x3*y3);
            printf("=> A Equação geral do plano é:\n%dx %dy %dz %d = 0\n",x1,x2,x3,d);
            break;

        case 11:
            printf("===> Você saiu!!!\n");
            system("cls");
            break;

        default:
            printf ("///Opção incorreta!\n");
        }
        printf("////////////////////////////////\n");
        printf("///Escolha uma opção\n");
        printf("(1) Continuar | (2) Sair\n");
        printf("===> Opção: ");
        scanf("%d", &c);
        system("cls");
    }

    return 0;
}
