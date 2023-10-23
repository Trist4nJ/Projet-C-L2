//
// Created by benoi on 29/10/2023.
//
#include <stdlib.h>
#include <stdio.h>
#include "fichier.h"


p_cell createcell(int val, int level)
{   p_cell newcell = malloc(sizeof(t_d_cell));
    if ( level < 0) {
        level = 0;
    }
    newcell->value = val;
    newcell->level = level;
    newcell->next = (p_cell*)malloc((level+1) * sizeof(p_cell));
    for(int i = 0; i<level; i++)
    {
        newcell->next[i] = NULL;
    }

    return newcell;
}

t_d_list emptylist(int hauteur)
{
    t_d_list list;
    list.head = (t_d_cell**) malloc(sizeof(t_d_cell));
    list.max_level = hauteur;
    for (int i = 0; i<hauteur; i++)
    {
        list.head[i] = NULL;
    }
    return list;
}

void addheadcell(t_d_list* list, p_cell cell)
{
    if(list->head[level] == NULL)
        list->head[level] = cell;
    else
    {
        p_cell tmp;
        tmp = list->head[level];
        list->head[level] = cell;
        cell->next = tmp;
    }
}

void displaylist (t_d_list* list, int level)
{
    if (list->head[level] == NULL)
    {
        printf("[ list  head_%d @-] --> ", level );
        printf("NULL ");
    }
    else
    {
        printf("[ list  head_%d @-] --> ", level);
        for (p_cell cell = list->head[level]; cell != NULL; cell = cell->next[level]) {
            printf("[ %d | @- ] --> ",cell->value);
        }
        printf("NULL ");
    }
}

void displaylistlevel(t_d_list *list)
{
    for (int i = 0; i < list->max_level; i++)
    {
        displaylist(list, i);
    }
}

void insertcelllist(t_d_list* list, int level, p_cell newcell)
{
    if(list->head[level] == NULL)
    {
        list->head[level] = newcell;
    }

    p_cell tmp, ptmp;
    tmp = list->head[level];
    ptmp = tmp;

    while(tmp != NULL && newcell->value > tmp->value)
    {
        ptmp = tmp;
        tmp = tmp->next;
    }
    ptmp->next = newcell;
    newcell->next = tmp;
    return;
}



