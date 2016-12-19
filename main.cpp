#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j,k;
    //clrscr();
   //masukkan matrix A
    cout<<"Silahkan input matrik A : \n";
    cout<<"------------------------- \n";
   for(i=0;i<3;i++)
   {
        for(j=0;j<3;j++)
        {
        cout<<"Elemen ke "<<(i+1)<<","<<(j+1)<<" : ";
        cin>>A[i][j];
        }
   }
   //masukkan matriks B
   cout<<"Silahkan input matrik B : \n";
   cout<<"------------------------- \n";
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
        {
        cout<<"Elemen ke "<<(i+1)<<","<<(j+1)<<" : ";
      cin>>B[i][j];
        }
   }

    //Operasi Perkalian
  for (i=0;i<3;i++)
  {
    for (j=0;j<3;j++)
    {
    C[i][j]=0;
        for (k=0;k< 3;k++)
      {
        C[i][j]+= A[i][k]*B[k][j];
      }
    }
  }
  //Menampilkan hasil
    cout<<endl;
    cout<<"Hasil Perkalian Matriks : \n";
    cout<<"------------------------- \n";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        cout<<setw(4)<<C[i][j];
    }
    cout<<endl;
  }
    cout<<endl;0
    cout<<"Diatas adalah hasil perkalian matriks A&B yang anda inputkan tadi"<<endl;
    getch();
    return 0;
}
