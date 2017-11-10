#include<iostream>
#include<cstdlib>
#include<ctime>



void fill_array(int array[],int size)
{
    for(int i=0;i < size;i++)
        array[i] = rand() % 10 + 1;
}

void print_array(int array[],int size)
{
    for(int i=0;i < size;i++)
        std::cout << array[i] << std::endl;
}

int main()
{
    const int ITEMS = 10;
    srand(time(0));

    int array[ITEMS];

    fill_array(array,ITEMS);
    print_array(array,ITEMS);

    return 0;
}












