#include <stdio.h>

long convert(long h, long m, long s);


int main(){
    int hour, minute, second;
    long converted;
    scanf("%d %d %d", &hour, &minute, &second);
    converted = convert(hour, minute, second);
    printf("Convert to %d seconds", converted);
}


long convert(long h, long m, long s){
    long conv;
    conv = (h * 3600) + (m * 60) + s;
	
    return conv;
}
