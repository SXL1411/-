#include <stdio.h>
char a[2333];
char b[2333];
int main() {
	int ta = 0 , tb = 0;
	while((a[ta++]=getchar())!='\n');
	while((b[tb++]=getchar())!='\n');
	ta--;tb--;
	int t1 = ta-1,t2 = tb-1;
	int cnt = 0;
	while(t1>=0 && t2>=0) {
		if(a[t1]==b[t2]) {
			cnt++;
			t1--;
			t2--;
		} else break;
	}
	if(!cnt) printf("null\n"); 
	else {
		for(int i = ta-cnt ; i < ta ; ++i) {
			printf("%c",a[i]);
		}
		printf("\n");
	}
}

