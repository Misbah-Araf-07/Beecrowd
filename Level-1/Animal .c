/* In this problem, your job is to read three Portuguese words. These words define an animal according to the table below, from left to right. After, print the chosen animal defined by these three words.
​
The table is:
['->' means print it: ]

vertebrade = ave /mamifero
invertebrado = inseto/anelideo 

ave= carnivaro -> aguia / onivoro -> pomba
mamifero= onivoro-> homem / herbivoro-> vaca

inseto = hematofago->pulga / herbivoro->lagarta
anelideo=hematofago->sanguessuga / onivoro->minhoca


Input The input contains 3 words, one by line, that will be used to identify the animal, according to the above table, with all letters in lowercase.
Output Print the animal name according to the given input.

*/

#include <stdio.h>
#include <string.h>
int main ()
{
    char type[20], name1[20], name2[20];
    scanf("%s %s %s", type, name1, name2);  // Removed &

    if(strcmp(type, "vertebrado") == 0)  // Use strcmp()
    {
        if (strcmp(name1, "ave") == 0)
        {
            if (strcmp(name2, "carnivoro") == 0) printf("aguia\n");
            else if (strcmp(name2, "onivoro") == 0) printf("pomba\n");
        }
        else if (strcmp(name1, "mamifero") == 0)
        {
            if (strcmp(name2, "onivoro") == 0) printf("homem\n");
            else if (strcmp(name2, "herbivoro") == 0) printf("vaca\n");
        }
    }
    else if(strcmp(type, "invertebrado") == 0)
    {
        if (strcmp(name1, "inseto") == 0)
        {
            if (strcmp(name2, "hematofago") == 0) printf("pulga\n");
            else if (strcmp(name2, "herbivoro") == 0) printf("lagarta\n");
        }
        else if (strcmp(name1, "anelideo") == 0)
        {
            if (strcmp(name2, "hematofago") == 0) printf("sanguessuga\n");
            else if (strcmp(name2, "onivoro") == 0) printf("minhoca\n");
        }
    }

    return 0;
}
