#include <stdlib.h>
#include <stdio.h>


#include "fichier.h"

int main()
{
    p_cell cell = createcell(18, 1);
    p_cell cell2 = createcell(2, 0);

    t_d_list list = emptylist(7);
    addheadcell(&list, cell,1);
    addheadcell(&list, cell2,0);

    displaylistlevel(&list);

    return 0;
}