#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int errorPrint(char s[], int len, int initial, int final)
{
    char temp[100];
    for (int k = 0; k < final; k++)
    {
        temp[k] = s[k + initial];
    }
    printf("\nInvalid Input:\t\t\t%s", temp);
    return 0;
}

void scanner(char s[], int len)
{
    int i = 0;
    while (i < len)
    {

        if (s[i] == '?')
        {
            printf("\nQMark:\t\t\t?");
            i++;
        }

        else if (s[i] == '.')
        {
            printf("\nEOS:\t\t\t.");
            i++;
        }

        else if (s[i] == ' ')
        {
            printf("\nWhitespace:\t\t ");
            i++;
        }
        else if (s[i] == ',')
        {
            printf("\nseparator:\t\t,");
            i++;
        }
//-----------------------------------------------

        else if (s[i] == 'c')///
        {
            int j = i;
            i++;

            if (s[i] == 'e')//
            {
                i++;
                if (s[i] == 'n' && s[i + 1] == 't' && s[i + 2] == 'i' && s[i + 3] == 'm' && s[i + 4] == 'e' && s[i + 5] == 't' && s[i + 6] == 'e' && s[i + 7] == 'r')
                {
                    i += 8;


                    printf("\nKeyword:\t\tcentimeter");

                }
                else
                {
                    errorPrint(s, len, j, i);
                }
            }
            else if (s[i] == 'h')//
            {
                i++;

                if ( s[i] == 'h' && s[i+1] == 'e')
                {
                    printf("\nKeyword:\t\tchhe");
                    i += 2;
                }
                else if ( s[i] == 'o' && s[i+1] == 'r' && s[i+2] == 'a' && s[i+3] == 's'  )
                {
                    printf("\nKeyword:\t\tchoras");
                    i += 4;
                }
                else
                {
                    errorPrint(s, len, j, i);
                }
            }


        }

//-----------------------------------------------


        else if (s[i] == 'n')///
        {
            int j = i;
            i++;

            if (s[i] == 'i')//
            {
                i++;
                if (s[i] == ' ' && s[i + 1] == 'l' && s[i + 2] == 'a' && s[i + 3] == 'm' && s[i + 4] == 'b' && s[i + 5] == 'a' && s[i + 6] == 'i')
                {
                    i += 7;


                    printf("\nKeyword:\t\tni lambai");

                }
                else if (s[i] == ' ' && s[i + 1] == 'p' && s[i + 2] == 'a' && s[i + 3] == 'r' && s[i + 4] == 'i' && s[i + 5] == 'm' && s[i + 6] == 'i' && s[i + 7] == 't'  && s[i + 8] == 'i')
                {
                    i += 9;


                    printf("\nKeyword:\t\tni parimiti");

                }
                else if (s[i] == ' ' && s[i + 1] == 't' && s[i + 2] == 'r' && s[i + 3] == 'i' && s[i + 4] == 'j' && s[i + 5] == 'i' && s[i + 6] == 'y' && s[i + 7] == 'a')
                {
                    i += 8;


                    printf("\nKeyword:\t\tni trijiya");

                }
                else
                {
                    errorPrint(s, len, j, i);
                }
            }
            else if (s[i] == 'u')//
            {
                i++;

                if ( s[i] == ' ' && s[i+1] == 'x' && s[i+2] == 'e' && s[i+3] == 't'   && s[i+4] == 'r' && s[i+5] == 'a' && s[i+6] == 'f'  && s[i+7] == 'a' && s[i+8] == 'l'     )
                {
                    printf("\nKeyword:\t\tnu xetrafal");
                    i += 9;
                }
                else
                {
                    errorPrint(s, len, j, i);
                }
            }


        }

        else if (s[i] == 's')///
        {
            int j = i;
            i++;

            if (s[i] == 'q')//
            {
                i++;
                if (s[i] == 'a' && s[i + 1] == 'r' && s[i + 2] == 'e' )
                {
                    i += 3;
                    if (s[i] == 'm')
                    {
                        i++;
                        if (s[i] == 'e' && s[i + 1] == 't' && s[i + 2] == 'e' && s[i + 3] == 'r')
                        {
                            printf("\nKeyword:\t\tsquaremeter");
                            i += 4;
                        }

                    }
                    else if (s[i] == 'c')
                    {
                        i++;
                        if (s[i] == 'e' && s[i + 1] == 'n' && s[i + 2] == 't' && s[i + 3] == 'i' && s[i + 4] == 'm' && s[i + 5] == 'e' && s[i + 6] == 't' && s[i + 3] == '7' && s[i + 3] == '8')
                        {
                            i += 9;
                            printf("\nKeyword:\t\tsquarecentimeter");
                        }

                    }
                    else
                    {
                        errorPrint(s, len, j, i);
                    }
                }

                else
                {
                    errorPrint(s, len, j, i);
                }
            }
        }

        else if (s[i] == 'v')
        {
            int j = i;
            i++;
            if (s[i] == 'a' && s[i + 1] == 'r' && s[i + 2] == 't' && s[i + 3] == 'u' && s[i + 4] == 'l')
            {
                i += 5;
                printf("\nKeyword:\t\tvartul");

            }
            else
            {
                errorPrint(s, len, j, i);
            }
        }

//------------------------------------------------------

        else if (s[i] == 't')
        {
            int j = i;
            i++;
            if (s[i] == 'h' && s[i + 1] == 'a' && s[i + 2] == 's' && s[i + 3] == 'e')
            {
                printf("\nKeyword:\t\tthase");
                i += 4;
            }
            else
            {
                errorPrint(s, len, j, i);
            }
        }
//--------------------------------------------------------------

        else if (s[i] == 'm')
        {
            int j = i;
            i++;
            if (s[i] == 'e' && s[i + 1] == 't' && s[i + 2] == 'e' && s[i + 3] == 'r'&& s[i + 4] == 's')
            {
                printf("\nKeyword:\t\tmeters");
                i += 5;
            }
            else
            {
                errorPrint(s, len, j, i);
            }
        }
//----------------------------------------------------------------

        else if (s[i] == 's')
        {
            int j = i;
            i++;
            if (s[i] == 'h' && s[i + 1] == 'u')
            {
                printf("\nKeyword:\t\tshu");
                i += 2;
            }
            else
            {
                errorPrint(s, len, j, i);
            }
        }
//----------------------------------------------------------
        else if (s[i] == 't')
        {
            int j = i;
            i++;
            if (s[i] == 'o')
            {
                printf("\nKeyword:\t\tto");
                i++;
            }
            else
            {
                errorPrint(s, len, j, i);
            }
        }
//-------------------------------------------------------------

        else if (isdigit(s[i]) != 0)
        {
            bool isFloat = false;
            int j = i;
            i++;
            while (s[i] != ' ')
            {
                if (isdigit(s[i]) != 0)
                {
                    i++;
                }
                else if (s[i] == '.')
                {
                    i++;
                    while (s[i] != ' ')
                    {
                        if (isdigit(s[i]) != 0)
                        {
                            i++;
                        }
                        if (s[i] == '\0')
                        {
                            break;
                        }
                    }
                    isFloat = true;
                    break;
                }

                if (s[i] == '\0')
                {
                    break;
                }
            }
            if (!isFloat)
            {
                char temp[100];
                for (int k = 0; k < i-j; k++)
                {
                    temp[k] = s[k + j];
                }
                printf("\nint:\t\t\t\t%s", temp);
            }

            if (isFloat)
            {
                char temp[100];
                for (int k = 0; k < i-j; k++)
                {
                    temp[k] = s[k + j];
                }
                printf("\nfloat:\t\t\t\t%s", temp);
            }
        }
        //--------------------------------------------------------------------------------------------------

        //--------------------------------------------------------------------------------------------------
    }
}

int main()
{
    char string[100];
    printf("\nEnter Your Sentence: ");
    gets(string);

    int length = strlen(string);

    scanner(string, length);

    return 0;
}

/*
vartul ni trijiya 5 meters chhe , vartul nu xetrafal shu thase ?
vartul ni trijiya 5.55 meters chhe , vartul ni parimiti shu thase ?
choras ni lambai 6.666 meters chhe , choras nu xetrafal shu thase ?
choras ni lambai 5 meters chhe , choras nu xetrafal shu thase ?
*/
