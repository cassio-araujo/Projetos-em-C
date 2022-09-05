#include <stdio.h>
main()
{
    float saldo = 0, deposito, saque;
    int op;
    int n200, n100, n50, n20, n10, n5, n2;

    while (op != 4)
    {
    
        printf("*************************************\n");
        printf("*    Sistema Bancario Uninbanco     *\n");
        printf("*************************************\n");
        printf("*   1 - Saldo                       *\n");
        printf("*   2 - Deposito                    *\n");
        printf("*   3 - Saque                       *\n");
        printf("*   4 - Sair                        *\n");
        printf("*************************************\n");
        printf("Insira uma opcao:                   *\n");

        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("*************************************\n");
            printf("Saldo Atual: %.2f\n", saldo);
            break;

        case 2:
            printf("*************************************\n");
            printf("* Insira o valor a ser depositado:  *\n");
            scanf("%f", &deposito);
            saldo = saldo + deposito;
            printf("*************************************\n");
            printf("Voce depositou: %.2f\n", deposito);
            printf("Saldo Atual: %.2f\n", saldo);
            break;

        case 3:
            printf("*************************************\n");
            printf("Insira o valor que deseja sacar:\n");
            scanf("%f", &saque);
           
            if (saldo < saque)
            {
            printf("*************************************\n");
            printf("Saldo insuficiente\n");
            }
            
            else
            {
                saldo = saldo - saque;
                printf("*************************************\n");
                printf("Voce sacou: %.2f\n", saque);
                printf("*************************************\n");

                while (saque >0)
                {
                    n200 = 0;
                    n100 = 0; 
                    n50 = 0;
                    n20 = 0; 
                    n10 = 0; 
                    n5 = 0;
                    n2 = 0;

                    if (saque >= 200)
                    {
                        saque -=200;
                        n200++;
                        printf("Nota(s) de 200 r$ recebida(s): %d\n",n200);
                    }

                     else if (saque >= 100)
                    {
                        saque -=100;
                        n100++;
                        printf("Nota(s) de 100 r$ recebida(s): %d\n",n100);
                    }

                     else if (saque >= 50)
                    {
                        saque -=50;
                        n50++;
                        printf("Nota(s) de 50 r$ recebida(s): %d\n",n50);
                    }

                     else if (saque >= 20)
                    {
                        saque -=20;
                        n20++;
                        printf("Nota(s) de 20 r$ recebida(s): %d\n",n20);
                    }

                     else if (saque >= 10)
                    {
                        saque -=10;
                        n10++;
                        printf("Nota(s) de 10 r$ recebida(s): %d\n",n10);
                    }

                    else if (saque >= 5)
                    {
                        saque -=5;
                        n5++;
                        printf("Nota(s) de 5 r$ recebida(s): %d\n",n5);
                    }

                     else if (saque >= 2)
                    {
                        saque -=2;
                        n2++;
                        printf("Nota(s) de 2 r$ recebida(s): %d\n",n2);
                    }   
                  
                }
                
            }
            break;
        
        case 4:
            break;

        default:

            printf("*************************************\n");
            printf("Opcao Invalida\n");
            break;
        }
    }
}