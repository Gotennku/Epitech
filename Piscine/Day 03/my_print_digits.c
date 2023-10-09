int my_print_digits(void)
{
    char digit = '0';
    
    while (digit <= '9') {
        my_putchar(digit);
        digit++;
    }
    
    return 0;
}
