#include "Form1.h"
#include <ctime>





int main()
{
    /*int n, i = 0;
    cin >> n;

    input1 file;
    file.Neff = n;
    file.Arr = new string [file.Neff];
    file.read = new long [file.Neff];

    while (i < file.Neff) {
        cin >> file.Arr[i];
        i++;
    }
    Compress(file);

    */
    string file;
    cin>>file;
    Decompress(file);
    return 0;
}

