#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int x1, x2, x3, y1, y2, y3;
	scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
	int d1 = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
	int d2 = (x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2);
	int d3 = (x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3);
	printf("%d", min(min(d1, d2), d3));
    return 0;
}