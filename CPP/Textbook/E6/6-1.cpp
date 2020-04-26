#include <iostream>

void swap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int matrix[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = i; j < 3; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            std::cout << matrix[i][j] << " ";
            if (j == 2)
            {
                std::cout << std::endl;
            }
        }
    }
}