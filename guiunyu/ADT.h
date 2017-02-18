#include <ctime>
#include <iostream>
#include <string.h>
#include <fstream>
#include <math.h>
using namespace std;

#define Nil NULL
long TotalChar = 0;
typedef struct {
    char cc;
    long f;
} Infotype;
typedef struct tNode *AddressTree;
typedef struct tNode
{
    Infotype Info;
    AddressTree Left;
    AddressTree Right;
}Node;
typedef AddressTree BinTree;
typedef struct {
    BinTree P[256];
    int Neff;
}Forest;
typedef struct {
    string *Arr;
    int Neff;
    long *read;
} input1;

#define Akar(P) P->Info
#define Char(P) P->Info.cc
#define Frek(P) P->Info.f
#define Left(P) P->Left
#define Right(P) P->Right

BinTree Tree (Infotype Akar, BinTree L, BinTree R);
void MakeTree (Infotype Akar, BinTree L, BinTree R, BinTree *P);
void PrintTree (BinTree P, int h);
bool SearchTree (BinTree P, char X);
bool IsDaun (BinTree P);
string Search (BinTree P, char X);
void HitungFrek (input1 *in, long *freq);
void Huffman (BinTree *T, long *frek);
void Geser (Forest *T);
void Sorting (Forest *T);
void TreeToArray (BinTree T, string *Code, long *frek);
void PrintArrayForest (Forest T);
void PrintCode (string Code[]);
unsigned char StringToBit (string S);
void Encode (input1 in, string Code[], long *frek);
string CharToString (char cc);
string CTSWI (char cc, int b);
long StringToInt (string S);
void Decode (string in);
void Compress(input1 file);
double Entropi (long frek[]);
void Decompress(string file, string dest);
double BitPerSymbol (long frek[]) ;
BinTree Tree (Infotype Akar, BinTree L, BinTree R) {
    AddressTree T;

    T = new Node;
    if (T != Nil) {
        Akar(T) = Akar;
        Left(T) = L;
        Right(T) = R;
    }
	return T;
}

void MakeTree (Infotype Akar, BinTree L, BinTree R, BinTree *P) {
    *P = Tree(Akar,L,R);
}

void PrintTree (BinTree P, int h) {
    int i;

    if (P == Nil) {
        cout << ".\n";
    } else {
        cout << (unsigned int)Char(P) << "-" << Frek(P) << endl;
        for (i = 1; i <= h; i++) {
            cout<<" ";
        }
        PrintTree(Left(P),h+1);
        for(i = 1; i <= h; i++) {
            cout<<" ";
        }
        PrintTree(Right(P),h+1);
    }
}

bool SearchTree (BinTree P, char X) {
    if (P == Nil) {
        return false;
    } else {
        if (Char(P) == X && IsDaun(P)) {
            return true;
        } else {
            return SearchTree(Left(P),X) || SearchTree(Right(P),X);
        }
    }
}

bool IsDaun (BinTree P) {
    return (Left(P) == Nil && Right(P) == Nil);
}

string Search (BinTree P, char X) {
    string S = "";

    if (Char(P) == X && IsDaun(P)) {
        S = S;
    } else {
        if (SearchTree(Left(P), X) ) {
            S = "0" + Search(Left(P), X);
        } else if (SearchTree(Right(P), X)) {
            S = "1" + Search(Right(P), X);
        } else S = S;
    }
	return S;
}

void HitungFrek (input1 *in, long *freq) {
    for(int i = 0;i < 256; i++) {
        freq[i] = 0;
    }

    int n = 0;
    while (n < (*in).Neff) {
        ifstream input((*in).Arr[n].c_str(), ios::binary | ios::in);
        char c;
        unsigned char ch;
        while (input.get(c)) {
            ch = (unsigned char) c;
            freq[ch]++;
        }
        input.close();
        n++;
    }
}

void Huffman (BinTree *T, long *frek) {
    int i,j;
    Forest A;
    Infotype X;

    i = 0;
    A.Neff = 0;
    for(j = 0; j < 256; j++) {
        if(frek[j] != 0) {
            X.cc = j;
            X.f = frek[j];
            MakeTree(X,Nil,Nil,&(A.P[i]));
            A.Neff++;
            i++;
        }
    }

    BinTree B, D;
    while(A.Neff != 0)
    {
        Sorting(&A);
        B = A.P[0];
        D = A.P[1];
        X.cc = '\0';
        X.f = Frek(B) + Frek(D);
        Geser(&A);
        MakeTree(X,B,D,&(A.P[A.Neff]));
        A.Neff++;
    }

    *T = A.P[0];
}

void Geser (Forest *T) {
    for (int i = 0; i < (*T).Neff-2; i++) {
        (*T).P[i] = (*T).P[i+2];
    }
    (*T).Neff -=2;
}

void Sorting (Forest *T) {
    int i, j;
    BinTree tmin;

    for(i = 0; i < (*T).Neff-1; i++) {
        tmin = (*T).P[i];
        for (j = i+1; j < (*T).Neff; j++) {
            if (Frek((*T).P[j]) < Frek(tmin)) {
                tmin = (*T).P[j];
                (*T).P[j] = (*T).P[i];
                (*T).P[i] = tmin;
            }
        }
    }
}

void TreeToArray (BinTree T, string *Code, long *frek) {
    char x;
    for(int i = 0; i < 256; i++) {
        if(frek[i] != 0) {
            x = (unsigned char) i;
            Code[i] = Search(T, x);
        } else {
            Code[i] = "";
        }
	}
}

void PrintArrayForest (Forest T) {
    for(int i = 0; i<T.Neff; i++) {
        cout << Char(T.P[i]) << "-" << Frek(T.P[i]) << " ";
    }
    cout << endl;
}

void PrintCode (string Code[]) {

    for (int i = 0; i < 256; i++) {
        if (Code[i] != "") {
            cout << i << " - " << Code[i] << endl;
        }
    }
}

unsigned char StringToBit (string S) {
    int x = 0;
    int n = 1;

    for (int i = 7; i >= 0; i--) {
        if (S[i] == '1') {
            x += n;
        }
        n *= 2;
    }
    return (unsigned char) x;
}

void Encode (input1 in, string Code[], long *frek, string dest, string nama, System::ComponentModel::BackgroundWorker^ progress) {
    //nama file .omo
	string out;
    out = dest + "\\"+ nama + ".omo";



    //mulai output
    ofstream output(out.c_str(), ios::binary | ios::out);
    //Neff output file
    output << in.Neff << ";";
    //frekuensi tiap char
    for (int i = 0; i < 256; i++) {
        if (frek[i] != 0) {
            output << frek[i];
        }
        output << ".";
    }
    //mulai baca tiap file yang dicompress
    int n = 0;
    while (n < in.Neff) {
        ifstream input(in.Arr[n].c_str(), ios::binary | ios::in);
		progress->ReportProgress(((n+1)/in.Neff*100));
		char c;
        unsigned char ch;
        unsigned char bitc;
        int x = 0;
        string bits;
        string bit;
        long a = 0;
        //panjang nama file
		string ouch = in.Arr[n];
		int i = in.Arr[n].length()-1;
		while(ouch[i] != '\\')
		{
			i--;
		}
		ouch = ouch.erase(0,i);
        bitc = (unsigned char) ouch.length();
        //tulis panjang file dan nama file
        output << bitc << ouch;
        //baca tiap char di file
        while (input.get(c)) {
			

            ch = (unsigned char) c;
            x = (int) ch;
            //masukkan code binary ke string
            bit += Code[x];
            //string > 8
            if (bit.length() >= 8) {
                bitc = StringToBit(bit);
                bit.erase(0,8);
                bits += bitc;
                a++;
            }
        }
        //excess string
        if (bit.length() < 8) {
            x = bit.length();
            for (int i = x; i < 8; i++) {
                bit += '0';
            }
            bitc = StringToBit(bit);
            bit.erase(0,8);
            bits += bitc;
            a++;
        }
        //masukkan jumlah char yang pada file
        in.read[n] = a;
        //output jumlah file dan semua encodingnya
        output << in.read[n] << ";" << x << ";";
        output << bits;
        input.close();
		n++;
    }
	
    output.close();
}

string CharToString (char cc) {
    string S = "";

    for (int i = 7; i >= 0; i--) {
        S += ((cc >> i) & 0x1) + '0';
    }
    return S;
}

string CTSWI (char cc, int b) {
    string S = "";

    for (int i = 7; i >= 8-b; i--) {
        S += ((cc >> i) & 0x1) + '0';
    }
    return S;
}

long StringToInt (string S) {
    long x = 0;
    for (int i = 0; i < (signed) S.length(); i++) {
        x *= 10;
        x += (long) (S[i] - '0');
    }
    return x;
}

void Decode (string in,string dest, System::ComponentModel::BackgroundWorker^ progress) {
    //mulai baca file
    ifstream input(in.c_str(), ios::binary | ios::in);
    input1 file;
    string frek;
	
    char chz;
    BinTree P, Pt;
    //baca banyaknya file yang dicompress
    while (input.get(chz) && chz != ';') {
        frek += chz;
    }
    file.Neff = StringToInt(frek);
    file.Arr = new string [file.Neff];
    file.read = new long [file.Neff];
	string *bits = new string[file.Neff];
    //baca semua frekuensi yang dicompress
    long freq[256];
    for(int j = 0; j < 256; j++) {
        frek = "";
        while(input.get(chz) && chz != '.') {
            frek += chz;
        }
        freq[j] = StringToInt(frek);
    }
    //mulai baca tiap file
    int n = 0;
	long totalChar  = 0;
    while (n < file.Neff) {
		progress->ReportProgress(((n+1)/file.Neff*100));
        frek = "";
        file.read[n] = 0;
        //baca panjang nama file
        chz = input.get();
        int y = (int) chz;
        string read = "";
        //baca nama file dan masukkan ke array
        for(int i = 0; i < y; i++) {
            chz = input.get();
            read += chz;
        }
        file.Arr[n] = read;
        //baca banyak char untuk dibaca
        while (input.get(chz) && chz != ';') {
            frek += chz;
        }
        file.read[n] = StringToInt(frek);
        //baca banyak bit pada char terakhir
        frek = "";
        while (input.get(chz) && chz != ';') {
            frek += chz;
        }
        int b = (int) StringToInt(frek);
        //baca semua string, convert ke string biner, dan masukkan ke array
        string bit = "";
        char c;
        unsigned char ch;
        for (long x = 0; x < file.read[n]-1; x++) {
            c = input.get();
            ch = (unsigned char) c;
            bit += CharToString(ch);
        }
        //excess char
        c = input.get();
        ch = (unsigned char) c;
        bit += CTSWI(ch, b);
        bits[n] = bit;
        n++;
    }
    input.close();
    //end baca file
    n = 0;
    //build tree
    Huffman(&P, freq);
    Pt = P;
    //mulai decompressing
    //tulis nama file output
    while (n < file.Neff) {
		string out = dest + "\\" + file.Arr[n];
        ofstream output(out.c_str(), ios::binary | ios::out);
		int i = 0;
        //tulis char asli hasil dekompresi
        while (i < (signed)bits[n].length()) {
            if (IsDaun(Pt)) {
                output << Char(Pt);
                Pt = P;
            } else {
                if (bits[n][i] == '0') {
                    Pt = Left(Pt);
                } else if (bits[n][i] == '1') {
                    Pt = Right(Pt);
                }
                i++;
            }

        }
		if (i == (signed)bits[n].length ()) {
			if (IsDaun(Pt)) {
                output << Char(Pt);
                Pt = P;
            } else {
                if (bits[n][i] == '0') {
                    Pt = Left(Pt);
                } else if (bits[n][i] == '1') {
                    Pt = Right(Pt);
                }
            }
		}
		output.close();
        //end baca tiap file
		;
		n++;
    }
}
void Compress(input1 file, string dest, string nama, System::ComponentModel::BackgroundWorker^ progress,double *entropy, double *bitpersimbol) {
    string *Code = new string [512];
    BinTree T;
    long *frek = new long [256];

    //int a = clock();
    HitungFrek(&file, frek);
    Huffman(&T, frek);
		TreeToArray(T, Code, frek);
    Encode(file, Code, frek, dest, nama, progress);
	*entropy = Entropi(frek);
	*bitpersimbol = BitPerSymbol(frek);
    //int b = clock();
    //cout << "Compress : " << b - a << "ms" << endl;
}

void Decompress(string file, string dest, System::ComponentModel::BackgroundWorker^ progress) {
    int a = clock();
    Decode(file,dest,progress);
    int b = clock();
}

double Entropi (long frek[]) {
    int i;
    double a = 0, b;
    double frektot = 0;
    for (i = 0; i < 256; i++) {
        frektot += (double) frek[i];
    }

    for (i = 0; i < 256; i++) {
        if (frek[i] != 0) {
            b = ((double) frek[i] / frektot);
            a -= b * (log(b) / log(2.0));
        }
    }
    return a;
}

double BitPerSymbol (long frek[]) {
    int i;
    double a = 0, b;
    double frektot;
    BinTree T;
    Huffman(&T, frek);
    string S;
    char cc;
    for (i = 0; i < 256; i++) {
        frektot += (double) frek[i];
    }
    for (i = 0; i < 256; i++) {
        if (frek[i] != 0) {
            b = ((double) frek[i] / frektot);
            cc = (char) i;
            S = Search(T, cc);
            a += S.length() * b;
        }
    }
    return a;
}
