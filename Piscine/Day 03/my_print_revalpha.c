int my_print_revalpha(void)
{
    char letter = 'z';
    
    while (letter >= 'a') {
        my_putchar(letter);
        letter--;
    }
    
    return 0;
}
