#include<stdio.h>
int main(){
	int Allsec = 25300;
	int hours, mins, secs;
	printf ("Input seconds = 25300\n");
	hours = Allsec/3600;
	mins = (Allsec - hours * 3600) / 60;
	secs = Allsec - hours * 3600 - mins * 60;
	printf("H:M:S - %d:%d:%d" ,hours ,mins ,secs);
	return 0;
}
