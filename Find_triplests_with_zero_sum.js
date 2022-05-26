function findTriplets(arr, n) {

    arr.sort((a, b) => a - b);
    if (arr[0] > 0) {
        return 0;
    }
    let i = 0;

    for (i = 0; i < n - 2; i++) {

        let start = i + 1;
        let end = n - 1;

        while (start < end) {
            if (arr[i] + arr[start] + arr[end] == 0) {
                return 1;
            }
            else if (arr[i] + arr[start] + arr[end] < 0) {
                start++;
            }
            else {
                end--;
            }
        }

    }
}