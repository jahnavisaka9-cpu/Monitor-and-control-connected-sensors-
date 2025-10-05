#include <stdio.h>
#include <stdlib.h>  
#include <time.h>
#include <unistd.h>  

int main() {
    srand(time(NULL)); 

    while(1) {
        int temperature = rand() % 51; 
        int humidity = rand() % 101;   

        printf("Temperature: %d°C, Humidity: %d%%\n", temperature, humidity);

        
        if(temperature > 40) {
            printf("Alert: Temperature too high!\n");
        }
        if(humidity > 80) {
            printf("Alert: Humidity too high!\n");
        }

        sleep(2); 
    }

    return 0;
}

