#include <stdlib.h>
#include <stdio.h>


#include "fichier.h"

int main()
{
    p_cell cell = createcell(2, 2);
    p_cell cell2 = createcell(18, 3);
    t_d_list list = emptylist(5);

    addheadcell(&list, cell);
    addheadcell(&list, cell2);


    displaylistlevel(&list);

    return 0;
}