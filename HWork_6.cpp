
#include <iostream>

using namespace std;

// 1.

/*int main()
{
    
    
    cout << "Enter a positive number: ";
    int a;
    cin >> a;

    int* array = new int[a];


    for (int i = 1; i <= a; i*=2)
    
    {
     
     cout << i << endl;
    }

    delete[] array;

    return 0;

}

*/


// 2.

/*int main()
{

    int** dynamic;
    const int width = 4;
    const int length = 4;

    dynamic = new int* [width];

    for (int i = 0; i < width; i++)
    {

        dynamic[i] = new int[length];

    }

    srand(time(NULL));

    for (int a = 0; a < 4; a++)
        for (int b = 0; b < 4; b++)
        {


            dynamic[a][b] = rand();

            cout << dynamic[a][b] << endl;
        }

}  */
        


// 3. 


#include <string>
#include <fstream>

int main()
{
    int array[70] = { 1, 2, 5, 7, 9, 0, 15 };
    int arraytext[52] = { 11, 22, 55, 77, 99, 44, 1717 }; 

    string fname1;
    cin >> fname1;

    string fname2;
    cin >> fname2; 

    ofstream fout(fname1);

    for (int i = 0; i <= 70; i++)
    {

        cout << i << endl;
        fout << i << endl;


    }

    fout.close();

    ofstream fout2(fname2);

    for (int c = 0; c < 52; c++)
    {

        cout << c << endl;
        fout2 << c << endl;


        }

    fout2.close();


}


