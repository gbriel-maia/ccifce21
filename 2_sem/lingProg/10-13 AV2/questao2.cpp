#include<stdio.h>
#include<locale.h>
#include<math.h>
#define PI 3.14
float calculaVolume(float *r){
    float ax = (4.0/3.0) * (PI * powf(*r, 3));
    return ax;
}
void mostrar(float *v){
    printf("Volume: %.2f\n", *v);
}
int main(){
    setlocale(LC_ALL, "");
    float raio, volume;

    printf("Raio (em metros): ");
    scanf("%f", &raio);

    volume = calculaVolume(&raio);
    mostrar(&volume);

return 0;
}