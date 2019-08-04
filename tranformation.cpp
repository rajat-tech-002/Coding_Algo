#include<iostream>
using namespace std;
#include <fstream>
#include<string.h>
#include<bits/stdc++.h>

// Filter Class which contains 2 variables input and output file name

class Filter
{
    public:
        string input_f_name;
        string output_f_name;

};

// Class upper inherits Filter class and contains a function to convert all character to upper case.

class upper: public Filter{

 public:

 // Function to convert all characters in file to upper case

     to_uppercase()
     { // file stream objects
         ifstream IF;
         ofstream OF;

        // Open both files

         IF.open(input_f_name);
         OF.open(output_f_name);

        // String to get 1 line at a time
        string line;
         while(getline(IF,line))
         { // Read all character in line and if it is not a space, convert it to lowercase
             for ( int i=0; i< line.length(); i++)
                { if(line[i]!=' ')
                    line[i] = toupper(line[i]);
                }
                cout<<line<<endl;
            // Write the updated line to output file
              OF<<line;

         }
         //Close both file streams
         OF.close();
         IF.close();
     }

};

// Class lower inherits Filter class and contains a function to convert all character to lower case.

class lower: public Filter{

     public:
 // Function to convert all characters in file to lower case

     to_lowercase()
      { // file stream objects

         ifstream IF;
         ofstream OF;

         // Open both files

         IF.open(input_f_name);
         OF.open(output_f_name);


        string line;

         while(getline(IF,line))
         { // Read all characters and if it is not a space, convert it to lower case
             for ( int i=0; i< line.length(); i++)
                { if(line[i]!=' ')
                    line[i] = tolower(line[i]);
                }
                cout<<line<<endl;
                // Write modified line to output file
              OF<<line;

         }
         // close all file streams
         OF.close();
         IF.close();

     }


};

//  Class which contains function to convert all spaces to double spaces
class double_space: public Filter{

public:

    to_double_space()
     {
         ifstream IF;
         ofstream OF;

         IF.open(input_f_name);
         OF.open(output_f_name);

        string line;
        string temp;

         while(getline(IF,line))

         { // if character is space append 2 spaces to new string temp else write the character
             for ( int i=0; i< line.length(); i++)
                { if(line[i]==' ')
                    {
                        temp=temp+' ';
                        temp=temp+' ';
                    }
                  else
                        temp=temp+line[i];
                }
               cout<<temp<<endl;
                // write output to file
              OF<<temp;
              // rewrite temp to NULL string so that it can be filled again from beginning
              temp=' ';

         }
         //close all file streams
         OF.close();
         IF.close();
     }
};

// Encrypt Class which provides a function to encrypt a file
class encrypt: public Filter{

public:
    // encrypts abcd-> bcde IF has_num=1 , abcd-> cdef if hash_num=2

    to_encrypted(int hash_num)
    {
         ifstream IF;
         ofstream OF;

         IF.open(input_f_name);
         OF.open(output_f_name);

        string line;
         while(getline(IF,line))
         { //if character is not space add has_num to it else do nothing.
             for ( int i=0; i< line.length(); i++)
                { if(line[i]!=' ')
                    line[i] = line[i]+hash_num;
                }
              // Write output to file
              cout<<line<<endl;
              OF<<line;

         }
         // close all input output files

         OF.close();
         IF.close();


    }


};


int main()
{

int choice;

cout<<"Please enter the choices:\n";
cout<<"Choice 1: Convert File to Upper case\n";
cout<<"Choice 2: Convert File to Lower case\n";
cout<<"Choice 3: Double-Space in file\n";
cout<<"Choice 4: Encrypt File\n";
cin>>choice;
cout<<"Enter input and output file names\n";
string in,out;
cin>>in>>out;

//Create objects of all 4 classes
upper obj_1;
lower  obj_2;
double_space obj_3;
encrypt obj_4;

// switch cases based on choice

switch(choice)
{
    case 1:
        // take input and output file names in created object and call function to_uppercase
        obj_1.input_f_name=in;
        obj_1.output_f_name=out;
        obj_1.to_uppercase();

        break;

    case 2:
        // take input and output file names in created object and call function to_lowercase
        obj_2.input_f_name=in;
        obj_2.output_f_name=out;
        obj_2.to_lowercase();

        break;

    case 3:
        // take input and output file names in created object and call function to_double_space
        obj_3.input_f_name=in;
        obj_3.output_f_name=out;
        obj_3.to_double_space();
        break;

    case 4:
        // take input and output file names in created object and call function to_encrypted
        obj_4.input_f_name=in;
        obj_4.output_f_name=out;
        obj_4.to_encrypted(1);
        break;

    default: cout<<"Wrong Choice";
    break;
}

}
