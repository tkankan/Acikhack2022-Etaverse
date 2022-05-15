#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct kargo
{
    int hash[30];
    int modelnumber;
    int serialnumber;
};

int main()
{
    srand(time(NULL));
    struct kargo block;
    
    for(int i = 0; i < 20; i++)
    {
        int x = rand()%10;
        block.hash[i] = x;
    }

//başlangıç seviyesi olarak hash kodunun kalan kısmını oluşturma şekli aşağıdaki gibidir.
    printf("Model number: ");
    scanf("%d", &block.modelnumber);
    printf("Serial number: ");
    scanf("%d", &block.serialnumber);

    block.hash[20] = block.modelnumber;
    block.hash[21] = block.serialnumber;

    for(int i = 0; i < 22; i++)
    {
        printf("%d", block.hash[i]);
    }
    return 0;
}