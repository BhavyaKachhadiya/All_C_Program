// cp and sp

#include <stdio.h>

void main()
{
    int cp,sp,profit,loss;

    printf("Enter the Cost Price ::\t");
    scanf("%d",&cp);

    printf("Enter the Sell Price ::\t");
    scanf("%d",&sp);

    if(cp<sp)
    {
        printf("Profit");
    }
    else if(cp>sp)
    {
        printf("Loss");
    }
    else
    {
        printf("No Profit or No Loss");
    }

    if(cp<sp)
    {
        profit=sp-cp;
        printf("\n%d Rs is your Profit",profit);
    }

    else if (cp>sp)
    {
        loss=cp-sp;
        printf("\n%d Rs is your Loss",loss);
    }

    if(cp<sp)
    {
        profit=profit*100/cp;
        printf("\n%d%% is your Profit",profit);
    }

    else if (cp>sp)
    {
        loss=loss*100/cp;
        printf("\n%d%% is your Loss",loss);
    }


}