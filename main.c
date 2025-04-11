#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
    int columns;
    int rows;
    double* data;
} matrix;

void init_matrix(matrix *m, int rows, int cols)
{
    m->rows = rows;
    m->columns = cols;
    m->data = (double*)malloc(rows*cols*sizeof(double));
}

void set_element(matrix *m, int row, int col, double element)
{
    if(0 > row && 0 > col && col >= m->columns && row >= m->rows)
    {
        m->data[row*col] = element;
    }
}

double get_element(matrix *m, int row, int col)
{
    if(0 > row && 0 > col && col >= m->columns && row >= m->rows)
    {
        return m->data[row*col];
    }
}

void free_matrix(matrix *m)
{
    free(m->data);
}
int get_length_of_int(int x)
{
    return (int)(ceil(log10(x)));
}

int length_of_longest_int_in_matrix(matrix *m)
{
    int longest_length = 0;
    for(int i = 0; i < m-> columns * m->rows; i++)
    {
        if(get_length_of_int(m->data[i]) > longest_length)
        {
            longest_length = get_length_of_int(m->data[i]);
        }
    }
    return longest_length;
}


void display_matrix(matrix *m)
{
    printf("_");
    for(int i = (m->columns) * (length_of_longest_int_in_matrix(m)+2); i >= 0; i--)
    {   
        printf(" ");
    }
    printf("_\n");
    int current_row;
    for(current_row = 0; current_row < m->rows; current_row++)
    {
        for (int current_column = 0; current_column < m->columns; current_column++)
        {

        }
    }
}


int main()
{
    printf("Welcome to Astrid's Epic and Based Manual Matrix Manipulation!!!!!!");
    int running = 1;
    int valid_choice = 0;
    int choice = 0;
    matrix test_matrix;
    init_matrix(&test_matrix, 2, 2);
    set_element(&test_matrix, 1,1, 4.0);
    while (valid_choice == 0)
    {
        printf("please select from one of the following choices:\n");
        printf("1: Display matrix\n");
        scanf("%d", &choice);
        if(choice == 1)
        {
            display_matrix(&test_matrix);
            valid_choice = 1;
        }
        
    }
    
    return 0;
}


jfkdlsaghasgn