#include <stdio.h>
#include <stddef.h>

void duplicateEliminator(int arr[], size_t *size);
int main(void) {

    //int arr[7] = {4, 3, 2, 4, 3, 5, 1};
    //int arr[7] = {4, 4, 4, 4, 4, 4, 4};
    int arr[7] = {5, 3, 21, 3, 5, 3, 21};
    size_t N = 7;

    duplicateEliminator(arr, &N);

    printf("not_dup: ");
    int notDupArr[N];
    for(size_t i = 0; i < N; ++i){
        notDupArr[i] = arr[i];
        printf("%d ", notDupArr[i]);
    }puts("");

    return 0;
}

void duplicateEliminator(int arr[], size_t *size){
    size_t i, j, k;

    for(i = 0; i < *size; ++i) {
    // diziyi dönen ilk döngü
        for(j = i + 1; j < *size;) {
        // her i. elemanın sağındaki elemanı dönen döngü
            if (arr[i] == arr[j] ) {
            // j. eleman i. eleman ile aynı
                for(k = j; k < *size - 1; ++k) {
                // j. elemanı yok etmek için sağındaki her
                // eleman bir sola kaydırılıyor.
                    arr[k] = arr[k + 1];
                }
                // kaydırma sonucu en sağda bir kopya oluştu
                // onu yok saymak için boyut düşürülüyor
                --(*size);
            } else {
            // j kopya olmayan durumlarda artırılıyor.
            // böylece sola kaydırılan ilk eleman
            // atlanmadan eşitlik için sınanabiliyor.
                ++j;
            }
        }
    }
        
    

}

void removeDuplicates(int arr[], int *size) {

    size_t i, j, k;

    // array'i dönen döngü
    for (i = 0; i < *size; ++i) {
    // her i. elemandan sonraki elemanları dönen döngü
        for (j = i + 1; j < *size;) {
        // eğer j. eleman i.ile aynıysa 
            if (arr[j] == arr[i]) {
            //j. eleman yok edilmek için sağındaki her eleman
            // bir solundaki elemana kaydırılır.
                for (k = j; k < *size - 1; ++k) {
                    arr[k] = arr[k + 1];
                }
            // önceki döngüden sonra en sağda bir eleman
            // kopya olacağından dizi uzunluğu azaltılıyor.
                --(*size);
            } else {
            // eğer eşitli yoksa devam ediliyor.
                ++j;
            }
        // j artırılmayarak sola kaydırılan ilk eleman
        // karşılaştırmaya katılır.
        }
    }
}