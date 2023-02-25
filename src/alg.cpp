// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int bn;
    if (a == 0 || b == 0)
        return a + b;
    else {
        while (a % b != 0){
            bn = a % b;
            a = b;
            b = bn;
        }
        return b;
    }
}
