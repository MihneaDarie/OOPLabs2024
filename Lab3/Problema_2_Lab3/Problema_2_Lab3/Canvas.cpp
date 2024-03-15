#include "Canvas.h"
#include <stdio.h>
#include <cmath>

/*Canvas(int w, int h);
    void DrawCircle(int x, int y, int ray, char ch);
    void FillCircle(int x, int y, int ray, char ch);
    void DrawRect(int left, int top, int right, int bottom, char ch);
    void FillRect(int left, int top, int right, int bottom, char ch);
    void SetPoint(int x, int y, char ch);
    void DrawLine(int x1, int y1, int x2, int y2, char ch);
    void Print(); // shows what was printed
    void Clear(); // clears the canvas*/

Canvas::Canvas(int w,int h)
{
    this->w = w;
    this->h = h;

    DrawingTable = new char*[h + 5];
    for (int i = 0; i < h; i++)
        DrawingTable[i] = new char[w + 5];

    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            DrawingTable[i][j] = ' ';
    
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
    int i, j;
    for (i = 0; i < 500; i++)
    {
        for (j = 0; j < 500; j++)
            if ((i - x)*(i - x) + (j - y)*(j - y) >= ray*(ray - 1) && (i - x)*(i - x) + (j - y)*(j - y) <= ray*(ray + 1))
                DrawingTable[j][i] = ch;
    }
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
    int i, j;
    for (i = 0; i < 500; i++)
    {
        for (j = 0; j < 500; j++)
            if ((i - x) * (i - x) + (j - y) * (j - y) <= ray * ray || ((i - x) * (i - x) + (j - y) * (j - y) >= ray * (ray - 1) && (i - x) * (i - x) + (j - y) * (j - y) <= ray * (ray + 1)))
                DrawingTable[j][i] = ch;
    }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
    int i, j;
    
    for (i = left; i <= right; i++) DrawingTable[top][i]=ch;
    for (i = left; i <= right; i++) DrawingTable[bottom][i]=ch; 
        
    for (i = top; i <= bottom; i++) DrawingTable[i][left]=ch;
    for (i = top; i <= bottom; i++) DrawingTable[i][right]=ch; 
    
}
void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
    int i, j;
    for (int i = left; i <= right; i++)
        for (j = top; j <= right; j++)
            DrawingTable[j][i] = ch;
}
void Canvas::SetPoint(int x, int y, char ch)
{
    DrawingTable[y][x] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    
    int sx, sy;

    if (x1 < x2) sx = 1;
    else sx = -1;

    if (y1 < y2) sy = 1;
    else sy = -1;

    int check1 = dx - dy;

    while (true)
    {
        DrawingTable[y1][x1] = ch;
        if (x1 == x2 && y1 == y2) break;
        int check2 = 2 * check1;
        if (check2 > -dy)
        {
            check1 += -dy;
            x1 += sx;
        }
        if (check2 < dx)
        {
            check1 += dx;
            y1 += sy;
        }
    }

}

void Canvas::Print() // shows what was printed
{
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            printf("%c",DrawingTable[i][j]);
        printf("%c",'\n');
    }
}
void Canvas::Clear()
{
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            DrawingTable[i][j] = ' ';
}