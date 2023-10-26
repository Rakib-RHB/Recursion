#include<stdio.h>
void pnumber(int start,int end)
{
    if (start < end)
    {
        return 0;
    }
    printf("%d ",start);
    pnumber(start - 1,end);
}




int main()
{
    int start = 10;
    int end = 0;
    printf("%d to %d : ",start,end);
    pnumber(start,end);

}
