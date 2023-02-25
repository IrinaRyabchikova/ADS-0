// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    if (a == 0 || b == 0)
        return a + b;
    else {
        while (a > 0 && b > 0) {
            if (a > b)
                a %= b;
            else
                b %= a;
        }
        return a + b;
    }
}
