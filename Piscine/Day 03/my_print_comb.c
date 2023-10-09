void my_print_comb(void) 
{
    int i;
    int j; 
    int k; 

    for (i = 0; i <= 9; i++) { 
        for (j = i + 1; j <= 9; j++) { 
            for (k = j + 1; k <= 9; k++) { 
                if (i != 8 || j != 9 || k != 9) { 
                    my_putchar(i + '0');
                    my_putchar(j + '0'); 
                    my_putchar(k + '0'); 
                    my_putchar(','); 
                    my_putchar(' '); 
                } else { 
                    my_putchar(i + '0'); 
                    my_putchar(j + '0'); 
                    my_putchar(k + '0'); 
                    my_putchar('\n'); 
                }
            }
        }
    }
}
