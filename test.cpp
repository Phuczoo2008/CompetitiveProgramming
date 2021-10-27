//given a string s and a number k
//return the max number after k removals in string s

#include<bits/stdc++.h>
using namespace std;
int findmax(int a[1000], int pos, int k) {
	int max = a[pos];
	for (int i=pos+1;i<=strlen(s)-k;i++) {
		if (a[i]>a[pos]) {
			max = a[i];
		}
	}
	return max;
}
int position(int a[1000], int pos, int k) {
	int p = a[pos];
	for (int i=pos+1;i<=strlen(s)-k;i++) {
		if (a[i]>a[pos]) {
			p = a[i];
		}
	}
	return max;
}
int main()
{
	char s[255];
	cin>>s;
	int k;
	cin>>k;
	//turn to array
	int a[1000];
	for (int i=0;i<strlen(s);i++) {
		a[i] = int(s[i]) - 48;
	}
	int pos = 0;
	while (true) {
		cout<<findmax(a,pos,k);
		pos = postion(a,pos,k);
		k--;
		if (k==0) {
			break;
		}
		
	}
}
