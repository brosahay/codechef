    #include <stdio.h>
    #define MIN(a,b) (a<b ? a:b)

    int main()
    {
    long long int k, n, p, y, x, z, m, a, b, tmp;
    int	i, input;

    scanf ("%d", &input);

    for (i=0; i<input; i++) {
    scanf ("%lld %lld", &n, &k);

    if (k==n) {
    printf ("1\n");
    continue;
    }

    y = n-1;
    z = MIN ((k-1), (n-k));

    p = 1;

    for (m=1; m<=z; m++) {
    p *= y--;
    p /= m;
    }

    printf ("%lld\n", p);
    }
    return 0;
    }

