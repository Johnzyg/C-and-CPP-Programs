
//http://www.hackerearth.com/cryptex/algorithm/fun-with-factorial/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include<assert.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define MOD 1000000007
#define gc getchar_unlocked

int main(){

	int t, n, fact;
	scanf("%d", &t);
	REP(tc, t){
		fact = 1;
		scanf("%d", &n);
		FOR(i, 2, n)
			fact = (fact*i) % 100000;
		printf("%05d\n", fact);
	}
	return 0;
}

//Solved