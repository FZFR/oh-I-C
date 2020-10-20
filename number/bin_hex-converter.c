#include <stdio.h>
void konversi_base(int, int);

int main(void)
{
    int num, pil, base;   
    while(1)
    {
        printf("Pilih tipe konversi: \n\n");
        printf("1. Decimal -> binary (base 2). \n");    
        printf("2. Decimal -> hexadecimal (base 16). \n");              
        printf("3. Keluar. \n");
        printf("\nMasukkan Pilihan: ");
        scanf("%d", &pil); // %d untuk input angka desimal

        switch(pil)
        {
            case 1:
                base = 2; //binary
                break;                        
            case 2:
                base = 16; //hexadecimal
                break;
            case 3:
                printf("Keluar ...");
                exit(1);
            default:
                printf("Salah input.\n\n");
                continue;
        }

        printf("Masukkan Angka: ");
        scanf("%d", &num); // akan scan input angka desimal 
        printf("Hasil = "); // output
        konversi_base(num, base);                
        printf("\n\n");
    }        

    return 0;
}

void konversi_base(int num, int base)
{    
    int rem;    
    if (num == 0)
    {
        return;
    }

    else
    {                
        rem = num % base;     
        konversi_base(num/base, base);  // recursive call         
        if(base == 16 && rem >= 10)
        {
            printf("%c", rem+55);       // hexa     
        }

        else
        {                        
            printf("%d", rem);			// binary
        }
    }

}