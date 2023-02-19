// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int bn;
    while (a % b != 0){
        bn = a % b;
        a = b;
        b = bn;
    }
    return b;
}
