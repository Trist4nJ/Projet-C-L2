//
// Created by benoi on 30/10/2023.
//

#ifndef UNTITLED_FICHIER_H
#define UNTITLED_FICHIER_H


typedef struct s_d_cell
{
    int value;
    struct s_d_cell **next;
    int level;
} t_d_cell, *p_cell;

typedef struct s_d_list
{
    t_d_cell **head;
    int max_level;
} t_d_list;

p_cell createcell(int , int );

t_d_list emptylist(int );

void addheadcell(t_d_list * list, p_cell cell);

void displaylistl//
// Created by benoi on 30/10/2023.
//

#ifndef UNTITLED_FICHIER_H
#define UNTITLED_FICHIER_H


typedef struct s_d_cell
{
    int value;
    struct s_d_cell **next;
    int level;
} t_d_cell, *p_cell;

typedef struct s_d_list
{
    t_d_cell **head;
    int max_level;
} t_d_list;

p_cell createcell(int , int );

t_d_list emptylist(int );

void addheadcell(t_d_list * list, p_cell cell);

void displaylistlevel(t_d_list*);

void displaylist (t_d_list*, int );

void insertcelllist(t_d_list*, int, p_cell);



#endif //UNTITLED_FICHIER_H
evel(t_d_list*);

void displaylist (t_d_list*, int );

void insertcelllist(t_d_list*, int, p_cell);



#endif //UNTITLED_FICHIER_H
