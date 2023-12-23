#include <stdio.h>
int main() {
    
	int n, i; 
	scanf("%d", &n);
	int arr[n];
	for (i = 0; i < n; i++) {

		scanf("%d", &arr[i]);
	}
    int cnt = 0;
    for (i = 1; i < n - 1; i++) {

        int ln = arr[i - 1];

        int rn = arr[i + 1];

        if (ln%2==0&&rn%2!=0 || ln%2!=0&&rn%2==0) {
            cnt++;
        }
    }
    printf("%d", cnt);
}