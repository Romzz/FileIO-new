#include <iostream>
#include <fstream>
#include <sstream>
#include <string>



using namespace std;

int main()
{

    int x = 0;
    int number[10000];
    int length = 10000;
    //int array[10000];
    int temp;
    int y, z;
    string line;
    fstream myfile;
    myfile.open("data10k.txt");
    while(myfile.good())
    {
        getline(myfile,line);
        stringstream(line) >> number[x];
        x++;
    }
        //cout << x;
        for (y=0; y < length; y++)
        {
            for(z=0; z < length; z++)   // rest of the elements
         {
                if (number[y] < number[z])          // descending order
               {
                        temp= number[y];          // swap
                        number[y] = number[z];
                        number[z] = temp;
               }
          }
        }
        for (y = 0; y < length; y++)
        {
		cout << number[y] << endl;
        }
        //cout << y << endl;


    myfile.close();

    return 0;

}


