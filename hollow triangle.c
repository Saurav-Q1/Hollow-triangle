#include<stdio.h>
#include<math.h>
main()
{
    int index;
    loop:
    printf("Enter 1 for rectangle \nEnter 2 for hollow triangle \nEnter 3 for straight line\nEnter 4 for Rhombus\nEnter 5 for terminate the program");
    printf("\nPlease enter your decision:");
    scanf("%d",&index);

     if(index==1)
     {
        int size,i,j,height,wide;
        printf("\n\n");
        printf("enter the height of the rectangle:");
        scanf("%d",&height);
        printf("enter the wide of the rectangle:");
        scanf("%d",&wide);
        printf("\n\n");

        for(i=1;i<=height;i++)
        {
            for(j=1;j<=wide;j++)
            {
                if(i==1||i==height||j==1||j==wide)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        goto loop;

     }
     else if(index==2)
     {
      int x,y,size2;
      printf("\n\n");
      printf("Enter the hight of the triangle:");
      scanf("%d",&size2);
      printf("\n\n");

    for(x=1;x<=size2;x++)
    {
        for(y=x;y<size2;y++)
        {
            printf(" ");
        }
        for(y=1;y<=(2*x-1);y++)
        {
            if(x==size2||y==1||y==(2*x-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    goto loop;
  }
   else if(index==3)
    {
    int z,size3;
    printf("\n\n");
    printf("Enter the size of the line:");
    scanf("%d",&size3);
    printf("\n\n");

    printf("\n\n");
    for(z=1;z<=size3;z++)
    {
        printf("*");
    }
   printf("\n\n");
   goto loop;
    }


   else  if(index==4)
    {
    int x,hight,wide,star,space;
    printf("Enter the hight of Rhombus:");
    scanf("%d",&hight);
    printf("Enter the wide Rhombus:");
    scanf("%d",&wide);


   for(x=1;x<=hight;x++)
    {
        for(space=1;space<=hight-x;space++)
        {
            printf(" ");
        }
       for(space=1; space<=wide;space++)
        {

               if(x==1||x==hight||space==1||space==wide)
                printf("*");
                else
                    printf(" ");
        }


        printf("\n");
     }
     goto loop;

   }
    else
    {
        if(index==5)
        printf("\n\n");
        printf("please try again,  THANK YOU");
    }
    getch();

}

