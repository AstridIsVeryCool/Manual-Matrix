#include <stdio.h>
#include <stdlib.h>

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

    return m->data[row*col];
}

int main()
{

}