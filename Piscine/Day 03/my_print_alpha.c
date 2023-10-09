int my_print_alpha(void)
{
    char letter = 'a';
    
    while (letter <= 'z') {
        my_putchar(letter);
        letter++;
    }
    
    return 0;
}
