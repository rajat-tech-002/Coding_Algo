#include<bits/stdc++.h>
#include<iostream>

using namespace std;



// Define a structure pos to store position of different pieces.

struct pos{
int x;
int y;
};

// vector of Rook's position

vector<pos>rook;//max 2 rook's are allowed, so stored in vector
pos King;
pos king;
pos queen;

// bishop's position vector

vector<pos>bishop; //max2

// function to check if position (x,y) can be attacked by bishop (l,m) or not.

int check_bishop(int l,int m, int x,int y)
{
    // if the absolute difference of x and y is same as that of l and m, it means position (x,y)
    //can be attacked.
    // If sum of x and y = sum l and m , then also bishop attacks (x,y) position

    if(abs(x-y)==abs(l-m)||(abs(x+y)==abs(l+m)))
        return 0;
    return 1;
}
// function to check whether position (x,y) is safe or not
// All checks are done. If any one of bishop, king, queen or rook attacks the position (x,y)
// ,it returns 0 else 1

int is_safe(int x,int y)
{
    //If the position (x,y) is out of chess board's bound, return 0.

    if(x>=8 ||x<0 || y>=8 || y<0)
        return 0;

    // If the position (x,y) is attacked by rook return 0.
    //for loop -> There may be 2 rooks, so check them both in a loop

    for(int i=0;i<rook.size();i++)
    {
        int l=rook[i].x;
        int m=rook[i].y;

    // Check if column or row of position (x,y) is same as that of Rook

        if(l==x || m==y)
            return 0;
    }

    // If the position (x,y) is attacked by rook return 0
    {

    int l=king.x;
    int m=king.y;

    // check all possible 8 positions where enemy's king can move and return 0 if any position
    // matches with (x,y)

    if((l+1==x && m+1==y)||(l-1==x && m-1==y)||(l+1==x && m-1==y)||(l-1==x && m+1==y)||
       (l==x && m+1==y)||(l==x && m-1==y)||(l+1==x && m==y)||(l-1==x && m==y))
        return 0;
    }

    // If the position (x,y) is attacked by bishop return 0
    //for loop -> There may be 2 bishops, so check them both in a loop

     for(int i=0;i<bishop.size();i++)
    {
        int l=bishop[i].x;
        int m=bishop[i].y;

        if(!check_bishop(l,m,x,y))
        return 0;
    }

    // If the position (x,y) is attacked by queen return 0

        {

    int l=queen.x;
    int m=queen.y;

    // Since queen behaves like rook

    if(l==x || m==y)
        return 0;

    //Since queen also behaves like bishop

    if(!check_bishop(l,m,x,y))
        return 0;
    }

    // if the new position (x,y) is safe, return 1

    return 1;


}

char* lastStand(char* ptr)
{




for(int i=0;i<8;i++)
{
    for(int j=0;j<8;j++)
    {

        //Save all positions of opponent pieces and your King.
        //arr[i][j]=  *((ptr + i*size of(columns))+j)
        // So arr[i][j]=*((ptr + i*8)+j)


        if(*((ptr + i*8)+j)=='K')
        {
            pos temp;
            temp.x=i;
            temp.y=j;
            King=temp;
        }
        else if(*((ptr + i*8)+j)=='k')
        {
            pos temp;
            temp.x=i;
            temp.y=j;
            king=temp;
        }
        else if(*((ptr + i*8)+j)=='q')
        {
            pos temp;
            temp.x=i;
            temp.y=j;
            queen=temp;
        }
        else if(*((ptr + i*8)+j)=='r')
        {
            pos temp;
            temp.x=i;
            temp.y=j;
            rook.push_back(temp);
        }
        else if(*((ptr + i*8)+j)=='b')
        {
            pos temp;
            temp.x=i;
            temp.y=j;
            bishop.push_back(temp);
        }

}

}
// Check all 8 positions whether king can move or not.

int a =is_safe(King.x+1,King.y);
int b =is_safe(King.x-1,King.y);
int c =is_safe(King.x,King.y+1);
int d =is_safe(King.x,King.y-1);
int e =is_safe(King.x+1,King.y+1);
int f =is_safe(King.x-1,King.y-1);
int g =is_safe(King.x+1,King.y-1);
int h =is_safe(King.x-1,King.y+1);

//Update king's position in the array with respect to whether the new position is safe or not.

if(a==1)
    {*((ptr + King.x*8)+King.y)='_';
     *((ptr + (King.x+1)*8)+King.y)='K';
    }

else if(b==1)

{*((ptr + King.x*8)+King.y)='_';
     *((ptr + (King.x-1)*8)+King.y)='K';
    }

else if(c==1)

    {*((ptr + King.x*8)+King.y)='_';
     *((ptr + King.x*8)+(King.y+1))='K';
    }
else if(d==1)

    {*((ptr + King.x*8)+King.y)='_';
     *((ptr + King.x*8)+(King.y-1))='K';
    }

else if(e==1)

    {*((ptr + King.x*8)+King.y)='_';
     *((ptr + (King.x+1)*8)+(King.y+1))='K';
    }

else if(f==1)
    {*((ptr + King.x*8)+King.y)='_';
     *((ptr + (King.x-1)*8)+(King.y-1))='K';
    }

else if(g==1)
    {*((ptr + King.x*8)+King.y)='_';
     *((ptr + (King.x+1)*8)+(King.y-1))='K';
    }

else if(h==1)
    {*((ptr + King.x*8)+King.y)='_';
     *((ptr + (King.x-1)*8)+(King.y+1))='K';
    }
    // If all 8 positions are not safe, Print King will lose
    else
        cout<<"King will lose\n";
        cout<<endl;

 return ptr;
}
int main()
{
// Declare a character array of chess where '_' represents empty space.
//  q- represents enemy's queen
//  K- represents our King
//  k- represents enemy's king
//  r- represents enemy's rook
//  b- represents enemy's bishop

char arr[8][8]={{'_','_','_','_','_','q','_','_'}
            ,   {'_','_','_','_','_','_','_','_'}
            ,   {'_','_','_','_','_','_','_','_'}
            ,   {'r','_','_','_','_','_','_','_'}
            ,   {'_','_','_','_','K','_','_','r'}
            ,   {'_','_','_','_','_','_','_','_'}
            ,   {'_','_','k','_','_','_','_','_'}
            ,   {'_','_','_','_','_','_','_','_'}};

// print previous array
cout<<"Previous Chess Board:\n";

char*ptr=&arr[0][0];

for(int i=0;i<8;i++)
{ cout<<'.';
    for(int j=0;j<8;j++)
    {
        //cout<<arr[i][j]<<" ";

        cout<<*(ptr+(i*8)+j)<<" ";
}
cout<<'.'<<endl;
}
// call lastStand function which return updated array
//pass character array as address of first element

char *temp= lastStand(&arr[0][0]);

cout<<"Updated Chess Board"<<endl;

// Update new safe position of king

for(int i=0;i<8;i++)
{ cout<<'.';
    for(int j=0;j<8;j++)
    {
        //cin>>arr[i][j];
        cout<<arr[i][j]<<" ";
        if(arr[i][j]=='K')
        {
            pos temp;
            temp.x=i;
            temp.y=j;
            King=temp;
        }
    }
    cout<<'.'<<endl;
}
 cout<<endl;
 cout<<"New King's Position is:"<<King.x+1<<" "<<King.y+1;


}


