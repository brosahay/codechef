//@author:ReVo
#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <cmath>
#include <cstring>
#include <map>
#include <algorithm>
#include <stack>
#include <list>
#include <vector>
#include <climits>
#include <set>

using namespace std;

typedef pair<int, int> coordinates;
typedef map<coordinates, int> MPI;

int T;

int main()
{
    scanf("%d",&T);
    while(T--)
    {
        int n;
        scanf("%d",&n);
        int x, y, xmin, xmax, ymin, ymax;
        int y_xmin, y_xmax;
        MPI seen;
        for(int i=0;i<n;i++){
            scanf("%d%d",&x,&y);
            seen[coordinates(x,y)]=i+1;
            if(i==0){
                xmin = xmax = x;
                ymin = y_xmax = y_xmin = y;
            }
            else{
                if(x <= xmin){
                    if(x == xmin)
                        y_xmin = min(y_xmin,y);
                    else
                        y_xmin = y;
                    xmin = x;
                }
                if(x >=  xmax){
                    if(x == xmax)
                        y_xmax = max(y_xmax,y);
                    else
                        y_xmax = y;
                    xmax = x;
                }
                ymin = min(y,ymin);
                ymax = max(y,ymax);
            }
        }
        if (seen[ coordinates(xmin, ymin) ] > 0)  printf("1\n%d NE\n", seen[ coordinates(xmin, ymin) ]);
        else if (seen[ coordinates(xmin, ymax) ] > 0) printf("1\n%d SE\n", seen[ coordinates(xmin, ymax) ]);
        else if (seen[ coordinates(xmax, ymax) ] > 0) printf("1\n%d SW\n", seen[ coordinates(xmax, ymax) ]);
        else if (seen[ coordinates(xmax, ymin) ] > 0) printf("1\n%d NW\n", seen[ coordinates(xmax, ymin) ]);
        else {
            printf("2\n");
            if (y_xmin <= y_xmax) {
                printf("%d NE\n", seen[ coordinates(xmin, y_xmin) ]);
                printf("%d SW\n", seen[ coordinates(xmax, y_xmax) ]);
            } else {
                printf("%d SE\n", seen[ coordinates(xmin, y_xmin) ]);
                printf("%d NW\n", seen[ coordinates(xmax, y_xmax) ]);
            }
        }
    }
    return 0;
}