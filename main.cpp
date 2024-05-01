#include<iostream>
#include<conio.h>
using namespace std;
int main( )
{
 cout<<"                                         FINAL PROJECT OF LINEAR ALGEBRA"<<endl;
 cout<<"                                         SUBMIT TO: SIR ABDUL MANAN"<<endl;
 cout<<"                                         Name:AHMED SHAHBAZ"<<endl;
 cout<<"                                         ROLL#:BCSM-S21-022"<<endl;
 system("color 3");
 int mat1 [3][3], mat2[3][3],mat3[3][3], i ,j, k, sum;

 cout<<"Enter Values For First 3 x 3 Matrix:"<<endl;
 for ( i = 0 ; i <= 2 ; i++ )
{
 for (j = 0 ; j <= 2 ; j++ )
 cin>>mat1 [i][j] ;
}
 cout<<"Enter Values For Second 3 x 3 Matrix:"<<endl;
 for ( i = 0 ; i <= 2 ; i++ )
{
 for ( j = 0 ; j <= 2 ; j++ )
 cin>>mat2[i][j] ;
}
 cout<<"The First 3 x 3 Matrix Entered:"<<endl;
 for ( i = 0 ; i <= 2 ; i++ )
{
 for ( j = 0 ; j <= 2 ; j++ )
 cout<<"\t"<< mat1[i][j] ;
 cout<<"\n";
}
 cout<<"The Second 3 x 3 Matrix Entered:"<<endl;
 for ( i = 0 ; i <= 2 ; i++ )
{
 for ( j = 0 ; j <= 2 ; j++ )
 cout<<"\t"<< mat2[i][j] ;
 cout<<"\n";
}
 for ( i = 0 ; i <= 2 ; i++ )
{
 for ( j = 0 ; j <= 2 ; j++ )
{
 sum = 0;
 for ( k = 0 ; k <=2 ; k++ )
 sum = sum + mat1 [i][k] * mat2[k][j];
 mat3[i][j] = sum ;
}
}
 cout<<"The Product Of The Above Two Matrices Is:"<<endl;
 for ( i = 0 ;i<= 2 ; i++ )
{
 for ( j = 0 ; j <= 2 ; j++ )
 cout<<"\t"<<mat3[i][j] ;
 cout<<endl<<endl;
}
 cout<<"************************************************Press any key to exit***************************************************"<<endl;
 getch( ) ;
}

