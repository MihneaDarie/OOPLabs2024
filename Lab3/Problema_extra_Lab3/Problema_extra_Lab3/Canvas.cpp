#include "Canvas.h"

void Canvas::clear()
{
    int i, j;
    for (i = 0; i < h; i++)
        for (j = 0; j < l; j++)
            DrawingTable[i][j] = ' ';
}

Canvas::Canvas(int lines, int columns)
{
    this->h = lines;
    this->l = columns;

    int i;
    DrawingTable = new char* [h + 5];
    for (i = 0; i < h; i++)
        DrawingTable[i] = new char[l + 5];
    this->clear();
}

void Canvas::set_pixel(int x, int y, char value)
{
    DrawingTable[y][x]=value;
}

// tuples of x, y, value
void Canvas::set_pixels(int count, ...)
{
    int x, y; char val;
    va_list param;
    va_start(param, count*3 );
    for (int i = 0; i < count; i++)
    {
        x = va_arg(param, int);
        y = va_arg(param, int);
        val = va_arg(param, char);
        DrawingTable[x][y] = val;
    }
    va_end(param);
}

void Canvas::print() const 
{
    int i, j;
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < l; j++)
            printf("%c",DrawingTable[i][j]);
        printf("\n");
    }
}
