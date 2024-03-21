#include <stdio.h>

int find_nth_term(int n, int a, int b, int c) {
    if (n == 1) {
        return a;
    } else if (n == 2) {
        return b;
    } else if (n == 3) {
        return c;
    } else {
        return find_nth_term(n - 1, a, b, c) +
               find_nth_term(n - 2, a, b, c) +
               find_nth_term(n - 3, a, b, c);
    }
}

int main() {
    int n, a, b, c, ans;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    
    if (n == 1) {
        ans = a;
    } else if (n == 2) {
        ans = b;
    } else if (n == 3) {
        ans = c;
    } else {
        ans = find_nth_term(n, a, b, c);
    }
    
    printf("%d\n", ans); 
    return 0;
}