#include<stdio.h>
#include<math.h>

#define WIDTH 60
#define HEIGHT 20
#define X WIDTH/2
#define Y HEIGHT/2
#define XMAX WIDTH-X-1
#define XMIN -(WIDTH-X)
#define YMAX HEIGHT-Y
#define YMIN -(HEIGHT-Y)+1


char grid[HEIGHT][WIDTH];

int plot_xy(int x, int y)
{

    if( x > XMAX || x < XMIN || y > YMAX || y < YMIN )
        return(-1);

    grid[Y-y][X+x] = '\'';

    return(1);
}

void initialize_grid(void)

{
    int x,y;

    for(y=0;y<HEIGHT;y++)

        for(x=0;x<WIDTH;x++)

            grid[y][x] = ' ';

    for(y=0;y<HEIGHT;y++)

        grid[y][X] = '|';

    for(x=0;x<WIDTH;x++)

        grid[Y][x] = '-';

    grid[Y][X] = '+';
}


void show_grid(void)

{
    int x,y;

    for(y=0;y<HEIGHT;y++)

    {
        for(x=0;x<WIDTH;x++)

            putchar(grid[y][x]);

        putchar('\n');
    }

}

void func1()

{
    double r1,r2,step;

    printf("From:\n ");

    scanf("%lf",&r1);

    printf("To: \n");

    scanf("%lf",&r2);

    printf("Step: \n");

    scanf("%lf",&step);
    // Calculate min and max y

    printf("Min y= %lf for x= %lf\n",r1,r1);

    printf("Max y= %lf for x= %lf\n",r2,r2);

    initialize_grid();

    for(double i=r1;i<=r2;i+=step)

    {

        double y = i;

        plot_xy(rintf(i),rintf(y));

        printf("x= %lf y = %lf \n",i,y);
    }

    show_grid();
}

void func2()

{double r1,r2,step;

    printf("From:\n ");

    scanf("%lf",&r1);
    printf("To: \n");

    scanf("%lf",&r2);

    printf("Step: \n");

    scanf("%lf",&step);
    // Calculate min and max y

    printf("Min y= %lf for x= %lf\n",-r2,r1);

    printf("Max y= %lf for x= %lf\n",-r1,r2);

    initialize_grid();

    for(double i=r1;i<=r2;i+=step)

    {

        double y = -i;

        plot_xy(rintf(i),rintf(y));

        printf("x= %lf y = %lf \n",i,y);
    }

    show_grid();
}

void func3()

{
    double r1,r2,step;

    printf("From:\n ");

    scanf("%lf",&r1);

    printf("To: \n");

    scanf("%lf",&r2);

    printf("Step: \n");

    scanf("%lf",&step);
    // Calculate min and max y

    initialize_grid();

    double min_y=0;

    double max_y=0;

    double x_min=0;

    double x_max=0;

    for(double i=r1;i<=r2;i+=step)
    {

        double y = i*i;

        if(y>max_y)

        {max_y=y;

        x_max=i;

        }


        if(y<min_y)

        {min_y=y;

        x_min=i;

        }


        plot_xy(rintf(i),rintf(y));

        printf("x= %lf y = %lf \n",i,y);
    }


    printf("Min y= %lf for x= %lf\n",min_y,x_min);

    printf("Max y= %lf for x= %lf\n",max_y,x_max);

    show_grid();
}

void func4()

{double r1,r2,step;

    printf("From:\n ");

    scanf("%lf",&r1);

    printf("To: \n");

    scanf("%lf",&r2);

    printf("Step: \n");

    scanf("%lf",&step);
    // Calculate min and max y

    initialize_grid();

    double min_y=0;

    double max_y=0;

    double x_min=0;

    double x_max=0;

    for(double i=r1;i<=r2;i+=step)

    {

        double y =- i*i*i;

        if(y>max_y)

        {max_y=y;

        x_max=i;

        }

        if(y<min_y)

        {min_y=y;

        x_min=i;

        }

        plot_xy(rintf(i),rintf(y));

        printf("x= %lf y = %lf \n",i,y);
    }


    printf("Min y= %lf for x= %lf\n",min_y,x_min);

    printf("Max y= %lf for x= %lf\n",max_y,x_max);

    show_grid();
}

void func5()

{double r1,r2,step;

    printf("From:\n ");

    scanf("%lf",&r1);

    printf("To: \n");

    scanf("%lf",&r2);

    printf("Step: \n");

    scanf("%lf",&step);

    // Calculate min and max y

    printf("Min y= %lf for x= %lf\n",r1,r1);

    printf("Max y= %lf for x= %lf\n",r2,r2);

    initialize_grid();

    double min_y=0;

    double max_y=0;

    double x_min=0;

    double x_max=0;

    for(double i=r1;i<=r2;i+=step)

    {

        double y =(3*cos(i)-2*sin(4*i)-1)/2;

        if(y>max_y)

        {max_y=y;

        x_max=i;

        }



        if(y<min_y)

        {min_y=y;

        x_min=i;

        }

        plot_xy(rintf(i*10),rintf(y*10));

        printf("x= %lf y = %lf \n",i,y);
    }


    printf("Min y= %lf for x= %lf\n",min_y,x_min);

    printf("Max y= %lf for x= %lf\n",max_y,x_max);

    printf("\n");

    show_grid();
}


int main()



{
    int flag=1;

    while(flag)

    {

    printf("Please Enter your choice:\n");

    printf("1. f(x)=x;\n");

    printf("2. f(x)=-x;\n");

    printf("3. f(x)=x*x;\n");

    printf("4. f(x)=-x*x*x;\n");

    printf("5. f(x)=(3*cos(x)-2*sin(4*x)-1)/2;\n");

    printf("0. Exit\n");



    int input;


    scanf("%d",&input);

    switch(input)

    {

        case 1: printf("Function to print:  f(x)=x;\n");

            func1();

        break;

        case 2: printf("Function to print:  f(x)=-x;\n");

            func2();


        break;

        case 3: printf("Function to print:  f(x)=x*x;\n");

            func3();

        break;

        case 4: printf("Function to print:  f(x)=-x*x*x;\n");

            func4();

        break;

        case 5: printf("Function to print:  f(x)=(3*cos(x)-2*sin(4*x)-1)/2);\n");

            func5();

        break;

        case 0:flag=0;

            printf("Exit:");

            break;

    }

    }
return 0;

}


