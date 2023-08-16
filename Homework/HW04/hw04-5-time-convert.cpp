/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"
    
    Test case:
        Input Days : 
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days : 
            27
    Output:
        27 days = 2332800 seconds
*/
#include <stdio.h>
int main() {
    float day , hour , min , sec ;
    printf("Input Days : ");
    scanf( "%f" , &day );
    hour = 24 ;
    min = 60 ;
    sec = (day * hour * min)* 60 ;
    printf( "%.0f days = %.0f seconds", day , sec );
    return 0;

}