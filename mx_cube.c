void mx_printchar(char c);

void mx_cube(int n){
    if (n > 1){
        int spaces = n / 2 + 1;
        int spaces_in = 0;
        int middle = n / 3;
        
        //  the first line of cube
        for(int i = 0; i < spaces; i++)
            mx_printchar(' ');
            
        spaces--;

        for (int i = 0; i < (n * 2) + 2; i++)
            if(i == 0 || i == (n * 2) + 1)
                mx_printchar('+');
            else 
                mx_printchar('-');

        mx_printchar('\n');
        
        //  the diagonal lines 1
        for(int i = 0; i < n / 2; i++){
            for(int y = 0; y < spaces; y++)
                mx_printchar(' ');
            spaces--;
            mx_printchar('/');

            for(int i = 0; i < n * 2; i++)
                mx_printchar(' ');

            mx_printchar('/');

            for(int i = 0; i < spaces_in; i++)
                mx_printchar(' ');
                
            spaces_in++;
            mx_printchar('|');
            mx_printchar('\n');
        }

        //  the middle line of cube

        for (int i = 0; i < (n * 2) + 2; i++)
            if(i == 0 || i == (n * 2) + 1)
                mx_printchar('+');
            else 
                mx_printchar('-');
        for(int i = 0; i < spaces_in; i++)
            mx_printchar(' ');

        mx_printchar('|');
        mx_printchar('\n');

        //  the middle of cube

        for (int i = 0; i < middle + 1; i++){
            mx_printchar('|');

            for(int i = 0; i < n * 2; i++)
                mx_printchar(' ');

            mx_printchar('|');

            for(int i = 0; i < spaces_in; i++)
                mx_printchar(' ');

            i == middle ? mx_printchar('+') : mx_printchar('|');
            mx_printchar('\n');
        }
        spaces_in--;

        //  the diagonal lines 2
        for(int i = 0; i < n / 2; i++){
            mx_printchar('|');
            for(int i = 0; i < n * 2; i++)
                mx_printchar(' ');
            mx_printchar('|');

            for(int i = 0; i < spaces_in; i++)
                mx_printchar(' ');
            spaces_in--;
            mx_printchar('/');

            mx_printchar('\n');
        }
        
        //  the last line of cube
        for (int i = 0; i < (n * 2) + 2; i++)
            if(i == 0 || i == (n * 2) + 1)
                mx_printchar('+');
            else 
                mx_printchar('-');

        mx_printchar('\n');
    }
}
