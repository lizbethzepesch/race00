void mx_printchar(char c);

void mx_pyramid(int n){
    if (n > 1 || n % 2 == 0){
        int spaces = n - 1;
        int in_spaces1 = 1;
        int in_spaces2 = 1;

        for (int i = 0; i < n / 2; i++){
            for (int i = 0; i < spaces; i++)
                mx_printchar(" ");
            spaces--;
            if (i == 0)
                mx_printchar("/\\");
            else {
                mx_printchar("/");
                for (int i = 0; i < in_spaces1; i++) 
                    mx_printchar(" ");
                in_spaces1 += 2;
                mx_printchar("\\");
                for (int i = 0; i < in_spaces2; i++)
                    mx_printchar(" ");
                in_spaces2++;
                mx_printchar("\\");
            }
            mx_printchar("\n");
        }
        in_spaces2--;
        for (int i = 0; i < n / 2; i++){
            for (int i = 0; i < spaces; i++)
                mx_printchar(" ");
            spaces--;
            mx_printchar("/");
                if(i != n / 2 - 1)
                    for (int i = 0; i < in_spaces1; i++)
                        mx_printchar(" ");
                else
                    for (int i = 0; i < 2 * n - 3; i++)
                        mx_printchar("_");
                
                in_spaces1 += 2;
                mx_printchar("\\");
                for (int i = 0; i < in_spaces2; i++) 
                    mx_printchar(" ");
                in_spaces2--;
                mx_printchar("|\n");
        }
    }
}
