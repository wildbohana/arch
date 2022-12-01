/*
 o   \ o /  _ o         __|    \ /     |__        o _  \ o /   o
/|\    |     /\   ___\o   \o    |    o/    o/__   /\     |    /|\
/ \   / \   | \  /)  |    ( \  /o\  / )    |  (\  / |   / \   / \
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Frame 0
const char state0[] =
"        \n\
    o    \n\
   /|\\  \n\
   / \\  \n\
         \n\
";

// Frame 1
const char state1[] =
"        \n\
  \\ o / \n\
    |    \n\
   / \\  \n\
         \n\
";

// Frame 2
const char state2[] =
"         \n\
    _ o   \n\
     /\\  \n\
    / \\  \n\
          \n\
";

// Frame 3
const char state3[] =
"          \n\
           \n\
     ___\\o\n\
    /)  |  \n\
           \n\
";

// Frame 4
const char state4[] =
"           \n\
     __/    \n\
       \\o  \n\
       ( \\ \n\
            \n\
";

// Frame 5
const char state5[] =
"            \n\
       \\ /  \n\
        |    \n\
       /o\\  \n\
             \n\
";

// Frame 6
const char state6[] =
"             \n\
          /__ \n\
        o/    \n\
       / )    \n\
              \n\
";

// Frame 7
const char state7[] =
"              \n\
               \n\
        o/__   \n\
        |  (\\ \n\
               \n\
";

// Frame 8
const char state8[] =
"               \n\
           o _  \n\
          / \\  \n\
           / |  \n\
                \n\
";

// Frame 9
const char state9[] =
"                \n\
          \\ o / \n\
            |    \n\
           / \\  \n\
                 \n\
";

// Frame 10 (same as Frame 0)
const char state10[] =
"                \n\
            o    \n\
           /|\\  \n\
           / \\  \n\
                 \n\
";

int main()
{
    int i = 0;
    int x;

    for (;;)
    {
        if (++i > 20) i = 0;

	    x = abs(-10 + i);

        switch (x)
        {
            case 0: fputs(state0, stdout); break;
            case 1: fputs(state1, stdout); break;
            case 2: fputs(state2, stdout); break;
            case 3: fputs(state3, stdout); break;
            case 4: fputs(state4, stdout); break;
            case 5: fputs(state5, stdout); break;
            case 6: fputs(state6, stdout); break;
            case 7: fputs(state7, stdout); break;
            case 8: fputs(state8, stdout); break;
            case 9: fputs(state9, stdout); break;
            case 10: fputs(state10, stdout); break;
            default: printf("ERROR!"); break;
        }

        // Forsiraj ispis ako ga do sada nije ispisao
        /* fflush(stdout); */

        // Nek odstoji na ekranu malo
        usleep(300000);

        // Brisanje prikazanog - 5 linija

        // ANSI Escape Sequence
        for (int x = 0; x < 5; x++)
        {
            printf("%c[2K%c[1F", 27, 27);
        }
    }

    return 0;
}
