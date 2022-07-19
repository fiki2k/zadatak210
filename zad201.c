/*  Program treba ispisat na kojem mjestu u stringu se zadnji put pojavljuje zadano slovo.  */

#include <stdio.h>
#include <string.h>

#define MAX_VELICINA 100




int zadnji(const char * text, const char pronaci);



int main()
{
    char text[MAX_VELICINA];
    char pronaci;
    int index;

    printf("Unesi neki string : ");
    gets(text);
    printf("\nUnesi koji znak da trazi : ");
    pronaci = getchar();

    index = zadnji(text, pronaci);

    printf("\nZadnji index od [ %c ] je [ %d ]\n", pronaci, index);

    return 0;
}




int zadnji(const char * text, const char pronaci)
{
    int index = -1;
    int i, duljina;

    duljina = strlen(text);

    for(i=0; i<duljina; i++)
    {
        if(text[i] == pronaci)
        {
            index = i;
        }
    }

    return index;
}
