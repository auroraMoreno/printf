int main()
{   

    // CASO RANDOM // checked: good
    // int len0 = printf("Hello, %s! The value is %d\n", "world", 42);
    // ft_putnbr_fd(len0, 1);
    // int len1 = ft_printf("Hello, %s! The value is %d\n", "world", 42);
    // ft_putnbr_fd(len1, 1);


    // /*sin %*/ //checked: good
    // int len2 = printf("Func ORG:\n");
    // ft_putnbr_fd(len2, 1);
    // int len3 = ft_printf("Func ORG:\n");
    // ft_putnbr_fd(len3, 1);


    // /*%p*/ checked: good SOLO CASO NULL
    // int x = 42;
    // int *ptr = &x;

    // // Test case 1: Basic usage
    // int len4 = printf("Test case 1: %p\n", ptr);
    // ft_putnbr_fd(len4, 1);
    // int len5 = ft_printf("Test case 1: %p\n", ptr);
    // ft_putnbr_fd(len5, 1);
    // // Test case 2: NULL pointer
    int len6 = printf("Test case 2: %p\n", (void *)NULL);
    ft_putnbr_fd(len6, 1);
    int len7 = ft_printf("Test case 2: %p\n", (void *)NULL); // REVISAR ESTE CASO: fixed :) 
    ft_putnbr_fd(len7, 1);
    // // Test case 3: Different pointer types
    // double y = 3.14;
    // double *doublePtr = &y;
    // int len8 = printf("Test case 3: %p\n", (void *)doublePtr);
    // ft_putnbr_fd(len8, 1);
    // int len9 = ft_printf("Test case 3: %p\n", (void *)doublePtr);
    // ft_putnbr_fd(len9, 1);
    // // Test case 4: Formatting with other text
    // int len10 = printf("Test case 4: This is a pointer: %p\n", ptr);
    // ft_putnbr_fd(len10, 1);
    // int len11 = ft_printf("Test case 4: This is a pointer: %p\n", ptr);
    // ft_putnbr_fd(len11, 1);

    // /*%%*/ checked: good
    // int len12 = printf("Func ORG: %%\n");
    // ft_putnbr_fd(len12, 1);
    // int len13 = ft_printf("Func ORG: %%\n");
    // ft_putnbr_fd(len13, 1);

    // /*%c*/ checked: good
    // char c = 'L';
    // int len14 = printf("Func ORG %d: %c\n", 1, c);
    // ft_putnbr_fd(len14, 1);
    // int len15 = ft_printf("Func ORG %d: %c\n", 1, c);
    // ft_putnbr_fd(len15, 1);

    // /*%s*/ checked: good
    // char *s = "Lando Norris";
    // int len16 = printf("Func ORG: %s\n", s);
    // ft_putnbr_fd(len16, 1);
    // int len17 = ft_printf("Func ORG: %s\n", s);
    // ft_putnbr_fd(len17, 1);

    // /*%d y %i*/ checked both: good
    
    // int len20 = printf("Caso %d (%%d): %d\n", 1, 42);
    // ft_putnbr_fd(len20, 1);
    // int len21 = ft_printf("Caso %d (%%d): %d\n", 1, 42);
    // ft_putnbr_fd(len21, 1);
    // int len22 = printf("Caso %d (%%d): %d\n", 2, -123);
    // ft_putnbr_fd(len22, 1);
    // int len23 = ft_printf("Caso %d (%%d): %d\n", 2, -123);
    // ft_putnbr_fd(len23, 1);
    // int len24 = printf("Caso %d (%%d): %d\n", 3, 789);
    // ft_putnbr_fd(len24, 1);
    // int len25 = ft_printf("Caso %d (%%d): %d\n", 3, 789);
    // ft_putnbr_fd(len25, 1);
    // int len26 = printf("Caso %d (%%d): %d\n", 4, 27);
    // ft_putnbr_fd(len26, 1);
    // int len27 = ft_printf("Caso %d (%%d): %d\n", 4, 27);
    // ft_putnbr_fd(len27, 1);
    // int len28 = printf("Caso %d (%%d): %d\n", 5, 12345);
    // ft_putnbr_fd(len28, 1);
    // int len29 = ft_printf("Caso %d (%%d): %d\n", 5, 12345);
    // ft_putnbr_fd(len29, 1);
    // int len30 = printf("Caso %d (%%d): %d\n", 6, 987);
    // ft_putnbr_fd(len30, 1);
    // int len31 = ft_printf("Caso %d (%%d): %d\n", 6, 987);
    // ft_putnbr_fd(len31, 1);
    // int len32 = printf("Caso %d (%%d): %d\n", 7, 654);
    // ft_putnbr_fd(len32, 1);
    // int len33 = ft_printf("Caso %d (%%d): %d\n", 7, 654);
    // ft_putnbr_fd(len33, 1);

    // int len34 = printf("Caso %d (%%d): %d\n", 8, 2147483647);
    // ft_putnbr_fd(len34, 1);
    // int len35 = ft_printf("Caso %d (%%d): %d\n", 8, 2147483647);
    // ft_putnbr_fd(len35, 1);

    // int len36 = printf("Caso %d (%%d): %d\n", 9, -2147483648);
    // ft_putnbr_fd(len36, 1);
    // int len37 = ft_printf("Caso %d (%%d): %d\n", 9, -2147483648);
    // ft_putnbr_fd(len37, 1);


    // int len38 = printf("Caso %i: %i\n", 19, 012);
    // ft_putnbr_fd(len38, 1);
    // int len39 = ft_printf("Caso %i: %i\n", 19, 012);
    // ft_putnbr_fd(len39, 1);

    // int len40 = printf("Caso %i (%%i): %i\n", 20, 0xA);
    // ft_putnbr_fd(len40, 1);
    // int len41 = ft_printf("Caso %i (%%i): %i\n", 20, 0xA);
    // ft_putnbr_fd(len41, 1);

    // int len42 = printf("Caso %d (%%d): %i\n", 21, -012);
    // ft_putnbr_fd(len42, 1);
    // int len43 = ft_printf("Caso %i (%%i): %i\n", 21, -012);
    // ft_putnbr_fd(len43, 1);

    // int len44 = printf("Caso %d (%%d): %i\n", 22, -0xA);
    // ft_putnbr_fd(len44, 1);
    // int len45 = ft_printf("Caso %i (%%i): %i\n", 22, -0xA);
    // ft_putnbr_fd(len45, 1);

    // /*%X y %x*/

    // // Cases for %x (lowercase hexadecimal) checked: good

    
    // int len45 = printf("Caso %d (%%x): %x\n", 1, 255);
    // ft_putnbr_fd(len45, 1);
    // int len46 = ft_printf("Caso %d (%%x): %x\n", 1, 255);
    // ft_putnbr_fd(len46, 1);

    // int len47 =printf("Caso %d (%%x): %x\n", 2, 0xABCD);
    // ft_putnbr_fd(len47, 1);
    // int len48 =ft_printf("Caso %d (%%x): %x\n", 2, 0xABCD);
    // ft_putnbr_fd(len48, 1);
    // int len49 =printf("Caso %d (%%x): %x\n", 3, 42);
    // ft_putnbr_fd(len49, 1);
    // int len50 = ft_printf("Caso %d (%%x): %x\n", 3, 42);
    // ft_putnbr_fd(len50, 1);
    // int len51 = printf("Caso %d (%%x): %x\n", 4, 16);
    // ft_putnbr_fd(len51, 1);
    // int len52 = ft_printf("Caso %d (%%x): %x\n", 4, 16);
    // ft_putnbr_fd(len52, 1);
    // int len53 = printf("Caso %d (%%x): %x\n", 5, 65535);
    // ft_putnbr_fd(len53, 1);
    // int len54 = ft_printf("Caso %d (%%x): %x\n", 5, 65535);
    // ft_putnbr_fd(len54, 1);

    // // Cases for %X (uppercase hexadecimal) checked: good
    
    // int len55 = printf("Caso %d (%%X): %X\n", 6, 255);
    // ft_putnbr_fd(len55, 1);
    // int len56 = ft_printf("Caso %d (%%X): %X\n", 6, 255);
    // ft_putnbr_fd(len56, 1);

    // int len57 = printf("Caso %d (%%X): %X\n", 7, 0xABCD);
    // ft_putnbr_fd(len57, 1);
    // int len59 = ft_printf("Caso %d (%%X): %X\n", 7, 0xABCD);
    // ft_putnbr_fd(len59, 1);
    // int len60 = printf("Caso %d (%%X): %X\n", 8, 42);
    // ft_putnbr_fd(len60, 1);
    // int len61 = ft_printf("Caso %d (%%X): %X\n", 8, 42);
    // ft_putnbr_fd(len61, 1);

    // int len62 = printf("Caso %d (%%X): %X\n", 9, 16);
    // ft_putnbr_fd(len62, 1);
    // int len63 = ft_printf("Caso %d (%%X): %X\n", 9, 16);
    // ft_putnbr_fd(len63, 1);

    // int len64 = printf("Caso %d (%%X): %X\n", 10, 65535);
    // ft_putnbr_fd(len64, 1);
    // int len65 = ft_printf("Caso %d (%%X): %X\n", 10, 65535);
    // ft_putnbr_fd(len65, 1);

    // /*%u*/ checked: good

    // int len66 = printf("Test Case %d: %%u - Positive integer: %u\n", 66, 123);
    // ft_putnbr_fd(len66, 1);

    // int len67 = ft_printf("Test Case %d: %%u - Positive integer: %u\n", 66, 123);
    // ft_putnbr_fd(len67, 1);

    // int len68 = printf("Test Case %d: %%u - Zero: %u\n", 67, 0);
    // ft_putnbr_fd(len68, 1);

    // int len69 = ft_printf("Test Case %d: %%u - Zero: %u\n", 67, 0);
    // ft_putnbr_fd(len69, 1);

    // // int len70 = printf("Test Case %d: %%u - Maximum value: %u\n", 68, 4294967295);
    // // ft_putnbr_fd(len70, 1);

    // int len71 = ft_printf("Test Case %d: %%u - Maximum value: %u\n", 68, 4294967295);
    // ft_putnbr_fd(len71, 1);

    return 0;
}