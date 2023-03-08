#include <stdio.h>
//#include <time.h>


int main()
{
    int time = 7;
    char todo[80];
   int days;
   
    printf("Enter the weekday\n", days);
    printf("Use any number, e.g 1, 2, 3..........\n");
    scanf("%d", &days);

    switch (days)
    {
    case 1:
        printf("Monday\n");
        printf(" NOTE: use only UNDERSCORE"" ( _ ) " " \n");
        printf("Enter list of things to do:\n");
        printf("\n");
        scanf("%s", &todo);
        printf("\n");
        printf("Be patient\n");
    sleep(time);

     printf("Program running after the wait of %d seconds\n", time);
     printf("\n");
        {
        printf("This are list of things u have to do: %s\n", todo);
        };

        printf("You have 7 seconds to view your Todo list before it close\n");

        sleep(time);
        printf("Program running after the wait of %d seconds would now close\n", time);
        break;
    case 2:
        printf("Tuesday");
        
        printf(" NOTE: use only UNDERSCORE ""( _ )"" \n");
        printf("Enter list of things to do:\n");
        printf("\n");
        scanf("%s", &todo);
        printf("\n");
        printf("Be patient\n");

    sleep(time);

        printf("Program running after the wait of %d seconds\n", time);
        printf("\n");
        {
        printf("This are list of things u have to do: %s\n", todo);
        };

        printf("You have 7 seconds to view your Todo list before it close\n");

        sleep(time);
        printf("Program running after the wait of %d seconds would now close\n", time);
        break;
    case 3:
        printf("Wednesday");
        
        printf(" NOTE: use only UNDERSCORE ""( _ )"" \n");
        printf("Enter list of things to do:\n");
        printf("\n");
        scanf("%s", &todo);
        printf("\n");
        printf("Be patient\n");
        sleep(time);

     printf("Program running after the wait of %d seconds\n", time);
     printf("\n");
        {
        printf("This are list of things u have to do: %s\n", todo);
        };

        printf("You have 7 seconds to view your Todo list before it close\n");

        sleep(time);
        printf("Program running after the wait of %d seconds would now close\n", time);
        break;
    case 4:
        printf("Thursday"); 
        
        printf(" NOTE: use only UNDERSCORE ""( _ )"" \n");
        printf("Enter list of things to do:\n");
        printf("\n");
        scanf("%s", &todo);
        printf("\n");
        printf("Be patient\n");
        sleep(time);

     printf("Program running after the wait of %d seconds\n", time);
     printf("\n");
        {
        printf("This are list of things u have to do: %s\n", todo);
        };

        printf("You have 7 seconds to view your Todo list before it close\n");

        sleep(time);
        printf("Program running after the wait of %d seconds would now close\n", time);
        break;
    case 5:
        printf("Friday");
        
        printf(" NOTE: use only UNDERSCORE ""( _ )"" \n");
        printf("Enter list of things to do:\n");
        printf("\n");
        scanf("%s", &todo);
        printf("\n");
        printf("Be patient\n");
        sleep(time);

     printf("Program running after the wait of %d seconds\n", time);
     printf("\n");
        {
        printf("This are list of things u have to do: %s\n", todo);
        };

        printf("You have 7 seconds to view your Todo list before it close\n");

        sleep(time);
        printf("Program running after the wait of %d seconds would now close\n", time);
        break;
    case 6:
        printf("Saturday");
        
        printf("\nNOTE: use only UNDERSCORE ""( _ )"" \n");
        printf("Enter list of things to do:\n");
        printf("\n");
        scanf("%s", &todo);
        printf("\n");
        printf("Be patient\n");
        sleep(time);

     printf("Program running after the wait of %d seconds\n", time);
     printf("\n");
        {
        printf("\nThis are list of things u have to do: %s\n", todo);
        };

        printf("You have 7 seconds to view your Todo list before it close\n");

        sleep(time);
        printf("Program running after the wait of %d seconds would now close\n", time);
        break;
        
    
    default:
    printf("You are to input a value between 1-6\n");
        break;
    } 
    /**if (days==1)
    
       printf("enter things to do\n");
       //scanf("%s", &todo);
       gets(todo);*/
    
    
    return 0;
}