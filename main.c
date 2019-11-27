#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
long int rekening;
int saldo, bahasa = 1, pilihan,hasil,nominal,nominalt,pilihanlain;
int saldo1 = 5000000, saldo2=2000000, saldo3=4000000, saldo4=6000000,pin;



/*
if(bahasa==2){}
else if (bahasa==1){}
*/

void apakah()
{if(bahasa==2){printf("\n\n\n\n\t\t\t\tAPAKAH ANDA INGIN MELAKUKAN TRANSAKSI LAINANYA?\n\n");}
else if (bahasa==1){    printf("\n\n\n\n\t\t\t\tDO YOU WANT TO DO OTHER TRANSACTION?\n\n");}
}

void keyakinan()
{if(bahasa==2){printf("\n\t\t\t\t\t\t\t\t\t   SETUJU------------> 1\n\n\n");printf("\t\t\t\t\t\t\t\t\t   TIDAK-------------> 2\n\n\n\t\t\t\t");}
else if (bahasa==1){printf("\n\t\t\t\t\t\t\t\t\t   YES------------> 1\n\n\n");printf("\t\t\t\t\t\t\t\t\t   NO-------------> 2\n\n\n\t\t\t\t");}
}

void keyakinan2()
{if(bahasa==2){ printf("\n\t\t\t\t\t\t\t\t\t\tBENAR-------------> 1\n\n");printf("\t\t\t\t\t\t\t\t\t\tSALAH-------------> 2\n\n");}
else if (bahasa==1){ printf("\n\t\t\t\t\t\t\t\t\t\tYES-------------> 1\n\n");printf("\t\t\t\t\t\t\t\t\t\tNO-------------> 2\n\n");}
}

int log_out()
{if(bahasa==2){  printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t                 ATM MANDIRI\n");
    printf("\t\t\t\t       ================================================\n\n\n\n\n");
    printf("\t\t\t\t\t   TERIMAKASI TELAH MENGGUNAKAN LAYANAN KAMI\n\n\n\n"); Sleep(2000);
    printf("\t\t\t\t\t\t SILAHKAN AMBIL KARTU ANDA\n\n\n"); Sleep(4000);}
else if (bahasa==1){        printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t                 MANDIRI BANK ATM\n");
    printf("\t\t\t\t       ================================================\n\n\n\n\n");
    printf("\t\t\t\t\t   THANKYOU FOR USING OUR SERVICES\n\n\n\n"); Sleep(2000);
    printf("\t\t\t\t\t\t PLEASE TAKE YOUR CARD\n\n\n"); Sleep(4000);}

    system("cls");main();
}

int namaoper()
{
    switch (pilihanlain)
    {
        case 1 : printf("XL BEBAS");break;
        case 2 : printf("MENTARI");break;
        case 3 : printf("IM3");break;
        case 4 : printf("SIMPATI");break;
    }
}

int masuk()
{
    char telp[12];
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t             PILIH NILAI VOUCHER HP\n");
    printf("\t\t\t\t       ================================================\n\n\n");
    printf("\t\t  \t      1 <---------25.000 \t\t\t\t 50.000-----------> 2\n\n\n");
    printf("\t\t  \t      3 <---------75.000 \t\t\t\t 100.000----------> 4\n\n\n");
    printf("\t\t  \t      5 <---------150.000 \t\t\t\t 200.000---------> 6\n\n\n");
    printf("\t\t  \t      7 <---------300.000 \t\t\t\t 500.000---------> 8\n\n\n");
    printf("\t\t  \t      9 <---------CANCEL\n\n\n");
    scanf("%d",&pilihan);system("cls");
           switch (pilihan)
    {
        case 1 :        printf("\t\t\t\t       ================================================\n");
                        printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                        printf("\t\t\t\t\t\t     MASUKAN NOMOR HP ANDA\n\n\t\t\t\t\t\t");
                        scanf("%s",&telp);
                        printf("\n\n\n\t\t\t\tAPAKAH ANDA SETUJU?\n\n");keyakinan();scanf("%d",&pilihan); system("cls");
                            if (pilihan == 1){
                            printf("\t\t\t\t       ================================================\n");
                            printf("\t\t\t\t\t              KONFIRMASI PEMBAYARAN\n");
                            printf("\t\t\t\t       ================================================\n\n\n");
                            printf("\t\t         NOMOR HP \t: \t %s\n\n",telp);
                            printf("\t\t         VOUCHER \t:\t "); namaoper();puts("");puts("");
                            printf("\t\t         JUMLAH TAGIHAN :\t %d\n\n\n\n",25000);
                            printf("\t\t         APAKAH ANDA YAKIN?");keyakinan2();
                            scanf("%d",&pilihan);
                            system("cls");
                        if(pilihan==1){
                        saldo=saldo-25000;
                        switch (pin)
                        {
                            case 123456 : saldo1=saldo;
                            break;
                            case 121212 : saldo2=saldo;
                            break;
                            case 123123 : saldo3=saldo;
                            break;
                            case 131313 : saldo4=saldo;
                            break;
                        }


                        if(saldo>0){
                            printf("\t\t\t\t       ================================================\n");
                                printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  TRANSAKSI ANDA BERHASIL\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   SISA SALDO ANDA %d",saldo);
                    apakah();keyakinan();
                    scanf("%d",&pilihan);
                    system("cls");
                    if (pilihan==1){
                        menu();
                    } else { int log_out();}
                    }
                     else if (saldo<0){
                        saldo= saldo+25000;
                        printf("MAAF SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI\n\n\n\n");
                        system("pause");
                        system("cls");
                        menu();}
                        }else{ menu();}
                         }else{ menu();} break;




        case 2 :printf("\t\t\t\t       ================================================\n");
                        printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                        printf("\t\t\t\t\t\t     MASUKAN NOMOR HP ANDA\n\n\t\t\t\t\t\t");
                        scanf("%s",&telp);
                        printf("\n\n\n\t\t\t\tAPAKAH ANDA SETUJU?\n\n");keyakinan();scanf("%d",&pilihan); system("cls");
                            if (pilihan == 1){
                            printf("\t\t\t\t       ================================================\n");
                            printf("\t\t\t\t\t              KONFIRMASI PEMBAYARAN\n");
                            printf("\t\t\t\t       ================================================\n\n\n");
                            printf("\t\t         NOMOR HP \t: \t %s\n\n",telp);
                            printf("\t\t         VOUCHER \t:\t "); namaoper();puts("");puts("");
                            printf("\t\t         JUMLAH TAGIHAN :\t %d\n\n\n\n",50000);
                            printf("\t\t         APAKAH ANDA YAKIN?");keyakinan2();
                            scanf("%d",&pilihan);
                            system("cls");
                        if(pilihan==1){
                        saldo=saldo-50000;
                        switch (pin)
                        {
                            case 123456 : saldo1=saldo;
                            break;
                            case 121212 : saldo2=saldo;
                            break;
                            case 123123 : saldo3=saldo;
                            break;
                            case 131313 : saldo4=saldo;
                            break;
                        }


                        if(saldo>0){
                            printf("\t\t\t\t       ================================================\n");
                                printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  TRANSAKSI ANDA BERHASIL\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   SISA SALDO ANDA %d",saldo);
                    apakah();keyakinan();
                    scanf("%d",&pilihan);
                    system("cls");
                    if (pilihan==1){
                        menu();
                    } else { int log_out();}
                    }
                     else if (saldo<0){
                        saldo= saldo+50000;
                        printf("MAAF SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI\n\n\n\n");
                        system("pause");
                        system("cls");
                        menu();}
                        }else{ menu();}
                         }else{ menu();} break;


        case 3 :printf("\t\t\t\t       ================================================\n");
                        printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                        printf("\t\t\t\t\t\t     MASUKAN NOMOR HP ANDA\n\n\t\t\t\t\t\t");
                        scanf("%s",&telp);
                        printf("\n\n\n\t\t\t\tAPAKAH ANDA SETUJU?\n\n");keyakinan();scanf("%d",&pilihan); system("cls");
                            if (pilihan == 1){
                            printf("\t\t\t\t       ================================================\n");
                            printf("\t\t\t\t\t              KONFIRMASI PEMBAYARAN\n");
                            printf("\t\t\t\t       ================================================\n\n\n");
                            printf("\t\t         NOMOR HP \t: \t %s\n\n",telp);
                            printf("\t\t         VOUCHER \t:\t "); namaoper();puts("");puts("");
                            printf("\t\t         JUMLAH TAGIHAN :\t %d\n\n\n\n",100000);
                            printf("\t\t         APAKAH ANDA YAKIN?");keyakinan2();
                            scanf("%d",&pilihan);
                            system("cls");
                        if(pilihan==1){
                        saldo=saldo-100000;
                        switch (pin)
                        {
                            case 123456 : saldo1=saldo;
                            break;
                            case 121212 : saldo2=saldo;
                            break;
                            case 123123 : saldo3=saldo;
                            break;
                            case 131313 : saldo4=saldo;
                            break;
                        }


                        if(saldo>0){
                            printf("\t\t\t\t       ================================================\n");
                                printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  TRANSAKSI ANDA BERHASIL\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   SISA SALDO ANDA %d",saldo);
                    apakah();keyakinan();
                    scanf("%d",&pilihan);
                    system("cls");
                    if (pilihan==1){
                        menu();
                    } else { log_out();}
                    }
                     else if (saldo<0){
                        saldo= saldo+100000;
                        printf("MAAF SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI\n\n\n\n");
                        system("pause");
                        system("cls");
                        menu();}
                        }else{ menu();}
                         }else{ menu();} break;

        case 4 :printf("\t\t\t\t       ================================================\n");
                        printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                        printf("\t\t\t\t\t\t     MASUKAN NOMOR HP ANDA\n\n\t\t\t\t\t\t");
                        scanf("%s",&telp);
                        printf("\n\n\n\t\t\t\tAPAKAH ANDA SETUJU?\n\n");keyakinan();scanf("%d",&pilihan); system("cls");
                            if (pilihan == 1){
                            printf("\t\t\t\t       ================================================\n");
                            printf("\t\t\t\t\t              KONFIRMASI PEMBAYARAN\n");
                            printf("\t\t\t\t       ================================================\n\n\n");
                            printf("\t\t         NOMOR HP \t: \t %s\n\n",telp);
                            printf("\t\t         VOUCHER \t:\t "); namaoper();puts("");puts("");
                            printf("\t\t         JUMLAH TAGIHAN :\t %d\n\n\n\n",100000);
                            printf("\t\t         APAKAH ANDA YAKIN?");keyakinan2();
                            scanf("%d",&pilihan);
                            system("cls");
                        if(pilihan==1){
                        saldo=saldo-100000;
                        switch (pin)
                        {
                            case 123456 : saldo1=saldo;
                            break;
                            case 121212 : saldo2=saldo;
                            break;
                            case 123123 : saldo3=saldo;
                            break;
                            case 131313 : saldo4=saldo;
                            break;
                        }


                        if(saldo>0){
                            printf("\t\t\t\t       ================================================\n");
                                printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  TRANSAKSI ANDA BERHASIL\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   SISA SALDO ANDA %d",saldo);
                    apakah();keyakinan();
                    scanf("%d",&pilihan);
                    system("cls");
                    if (pilihan==1){
                        menu();
                    } else { log_out();}
                    }
                     else if (saldo<0){
                        saldo= saldo+100000;
                        printf("MAAF SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI\n\n\n\n");
                        system("pause");
                        system("cls");
                        menu();}
                        }else{ menu();}
                         }else{ menu();} break;

        case 5 :printf("\t\t\t\t       ================================================\n");
                        printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                        printf("\t\t\t\t\t\t     MASUKAN NOMOR HP ANDA\n\n\t\t\t\t\t\t");
                        scanf("%s",&telp);
                        printf("\n\n\n\t\t\t\tAPAKAH ANDA SETUJU?\n\n");keyakinan();scanf("%d",&pilihan); system("cls");
                            if (pilihan == 1){
                            printf("\t\t\t\t       ================================================\n");
                            printf("\t\t\t\t\t              KONFIRMASI PEMBAYARAN\n");
                            printf("\t\t\t\t       ================================================\n\n\n");
                            printf("\t\t         NOMOR HP \t: \t %s\n\n",telp);
                            printf("\t\t         VOUCHER \t:\t "); namaoper();puts("");puts("");
                            printf("\t\t         JUMLAH TAGIHAN :\t %d\n\n\n\n",150000);
                            printf("\t\t         APAKAH ANDA YAKIN?");keyakinan2();
                            scanf("%d",&pilihan);
                            system("cls");
                        if(pilihan==1){
                        saldo=saldo-150000;
                        switch (pin)
                        {
                            case 123456 : saldo1=saldo;
                            break;
                            case 121212 : saldo2=saldo;
                            break;
                            case 123123 : saldo3=saldo;
                            break;
                            case 131313 : saldo4=saldo;
                            break;
                        }


                        if(saldo>0){
                            printf("\t\t\t\t       ================================================\n");
                                printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  TRANSAKSI ANDA BERHASIL\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   SISA SALDO ANDA %d",saldo);
                    apakah();keyakinan();
                    scanf("%d",&pilihan);
                    system("cls");
                    if (pilihan==1){
                        menu();
                    } else { log_out();}
                    }
                     else if (saldo<0){
                        saldo= saldo+150000;
                        printf("MAAF SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI\n\n\n\n");
                        system("pause");
                        system("cls");
                        menu();}
                        }else{ menu();}
                         }else{ menu();} break;

        case 6 : printf("\t\t\t\t       ================================================\n");
                        printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                        printf("\t\t\t\t\t\t     MASUKAN NOMOR HP ANDA\n\n\t\t\t\t\t\t");
                        scanf("%s",&telp);
                        printf("\n\n\n\t\t\t\tAPAKAH ANDA SETUJU?\n\n");keyakinan();scanf("%d",&pilihan); system("cls");
                            if (pilihan == 1){
                            printf("\t\t\t\t       ================================================\n");
                            printf("\t\t\t\t\t              KONFIRMASI PEMBAYARAN\n");
                            printf("\t\t\t\t       ================================================\n\n\n");
                            printf("\t\t         NOMOR HP \t: \t %s\n\n",telp);
                            printf("\t\t         VOUCHER \t:\t "); namaoper();puts("");puts("");
                            printf("\t\t         JUMLAH TAGIHAN :\t %d\n\n\n\n",200000);
                            printf("\t\t         APAKAH ANDA YAKIN?");keyakinan2();
                            scanf("%d",&pilihan);
                            system("cls");
                        if(pilihan==1){
                        saldo=saldo-200000;
                        switch (pin)
                        {
                            case 123456 : saldo1=saldo;
                            break;
                            case 121212 : saldo2=saldo;
                            break;
                            case 123123 : saldo3=saldo;
                            break;
                            case 131313 : saldo4=saldo;
                            break;
                        }


                        if(saldo>0){
                            printf("\t\t\t\t       ================================================\n");
                                printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  TRANSAKSI ANDA BERHASIL\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   SISA SALDO ANDA %d",saldo);
                    apakah();keyakinan();
                    scanf("%d",&pilihan);
                    system("cls");
                    if (pilihan==1){
                        menu();
                    } else { log_out();}
                    }
                     else if (saldo<0){
                        saldo= saldo+200000;
                        printf("MAAF SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI\n\n\n\n");
                        system("pause");
                        system("cls");
                        menu();}
                        }else{ menu();}
                         }else{ menu();} break;
        case 7 : printf("\t\t\t\t       ================================================\n");
                        printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                        printf("\t\t\t\t\t\t     MASUKAN NOMOR HP ANDA\n\n\t\t\t\t\t\t");
                        scanf("%s",&telp);
                        printf("\n\n\n\t\t\t\tAPAKAH ANDA SETUJU?\n\n");keyakinan();scanf("%d",&pilihan); system("cls");
                            if (pilihan == 1){
                            printf("\t\t\t\t       ================================================\n");
                            printf("\t\t\t\t\t              KONFIRMASI PEMBAYARAN\n");
                            printf("\t\t\t\t       ================================================\n\n\n");
                            printf("\t\t         NOMOR HP \t: \t %s\n\n",telp);
                            printf("\t\t         VOUCHER \t:\t "); namaoper();puts("");puts("");
                            printf("\t\t         JUMLAH TAGIHAN :\t %d\n\n\n\n",300000);
                            printf("\t\t         APAKAH ANDA YAKIN?");keyakinan2();
                            scanf("%d",&pilihan);
                            system("cls");
                        if(pilihan==1){
                        saldo=saldo-300000;
                        switch (pin)
                        {
                            case 123456 : saldo1=saldo;
                            break;
                            case 121212 : saldo2=saldo;
                            break;
                            case 123123 : saldo3=saldo;
                            break;
                            case 131313 : saldo4=saldo;
                            break;
                        }


                        if(saldo>0){
                            printf("\t\t\t\t       ================================================\n");
                                printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  TRANSAKSI ANDA BERHASIL\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   SISA SALDO ANDA %d",saldo);
                    apakah();keyakinan();
                    scanf("%d",&pilihan);
                    system("cls");
                    if (pilihan==1){
                        menu();
                    } else { log_out();}
                    }
                     else if (saldo<0){
                        saldo= saldo+300000;
                        printf("MAAF SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI\n\n\n\n");
                        system("pause");
                        system("cls");
                        menu();}
                        }else{ menu();}
                         }else{ menu();} break;
        case 8 : printf("\t\t\t\t       ================================================\n");
                        printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                        printf("\t\t\t\t\t\t     MASUKAN NOMOR HP ANDA\n\n\t\t\t\t\t\t");
                        scanf("%s",&telp);
                        printf("\n\n\n\t\t\t\tAPAKAH ANDA SETUJU?\n\n");keyakinan();scanf("%d",&pilihan); system("cls");
                            if (pilihan == 1){
                            printf("\t\t\t\t       ================================================\n");
                            printf("\t\t\t\t\t              KONFIRMASI PEMBAYARAN\n");
                            printf("\t\t\t\t       ================================================\n\n\n");
                            printf("\t\t         NOMOR HP \t: \t %s\n\n",telp);
                            printf("\t\t         VOUCHER \t:\t "); namaoper();puts("");puts("");
                            printf("\t\t         JUMLAH TAGIHAN :\t %d\n\n\n\n",500000);
                            printf("\t\t         APAKAH ANDA YAKIN?");keyakinan2();
                            scanf("%d",&pilihan);
                            system("cls");
                        if(pilihan==1){
                        saldo=saldo-500000;
                        switch (pin)
                        {
                            case 123456 : saldo1=saldo;
                            break;
                            case 121212 : saldo2=saldo;
                            break;
                            case 123123 : saldo3=saldo;
                            break;
                            case 131313 : saldo4=saldo;
                            break;
                        }


                        if(saldo>0){
                            printf("\t\t\t\t       ================================================\n");
                                printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  TRANSAKSI ANDA BERHASIL\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PEMBAYARAN VOUCHER HP\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   SISA SALDO ANDA %d",saldo);
                    apakah();keyakinan();
                    scanf("%d",&pilihan);
                    system("cls");
                    if (pilihan==1){
                        menu();
                    } else { log_out();}
                    }
                     else if (saldo<0){
                        saldo= saldo+500000;
                        printf("MAAF SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI\n\n\n\n");
                        system("pause");
                        system("cls");
                        menu();}
                        }else{ menu();}
                         }else{ menu();} break;
        case 9 : menu(); system("cls");
    }
}

int voucer()
{
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t                 PILIH NILAI VOUCHER HP\n");
    printf("\t\t\t\t       ================================================\n\n\n");
    printf("\t\t  \t   1 <---------XL BEBAS \t\t\t MENTARI---------> 2\n\n\n");
    printf("\t\t  \t   3 <---------IM3 \t\t\t\t SIMPATI---------> 4\n\n\n");
    printf("\t\t  \t   5 <---------CANCEL\n\n");
    scanf("%d",&pilihanlain);system("cls");
       switch (pilihanlain)
    {
        case 1 : masuk();break;
        case 2 : masuk();break;
        case 3 : masuk();break;
        case 4 : masuk();break;
        case 5 : menu();
    }
}

int data()
{
    if (rekening==221022){
        printf("LUQMAN");
    } else if(rekening==221021){
      printf("HAYYU");
    } else if (rekening==221023){
    printf("EKY");
    } else if (rekening==221024){
    printf("MAHAPUTRA");
    }

}

int pilihan2()
{
    int notagih[10];
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t                 PEMBAYARAN LISTRIK\n");
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t           MASUKAN NOMOR TAGIHAN ANDA\n\n\t\t\t\t\t                  ");
    scanf("%d",&notagih[10]);
    printf("\n\n\n\t\t\t\t APAKAH ANDA YAKIN?\n\n");keyakinan2();
    scanf("%d",&pilihan);
    system("cls");
    if (pilihan==1){
    if(notagih[10]==987654321){
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t              KONFIRMASI PEMBAYARAN\n");
    printf("\t\t\t\t       ================================================\n\n\n");
            printf("\t\t         NOMOR TAGIHAN \t: \t %d\n\n",notagih[10]);
            printf("\t\t         NAMA \t\t:\t MAS RESAH\n\n");
            printf("\t\t         JUMLAH TAGIHAN :\t %d\n\n\n\n",150000);
            printf("\t\t         APAKAH ANDA YAKIN?");keyakinan2();
            scanf("%d",&pilihan);
            system("cls");
            if(pilihan==1){
        saldo = saldo-150000;
                        switch (pin)
                        {
                            case 123456 : saldo1=saldo;
                            break;
                            case 121212 : saldo2=saldo;
                            break;
                            case 123123 : saldo3=saldo;
                            break;
                            case 131313 : saldo4=saldo;
                            break;
                        }

        if (saldo>0){
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t                 PEMBAYARAN LISTRIK\n");
    printf("\t\t\t\t       ================================================\n");
              printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);printf("\t\t\t\t\t\t     TRANSAKSI SUKSES\n\n\n\n\n");Sleep(3000);system("cls");
              apakah();keyakinan();
              scanf("%d",&pilihan);
              if (pilihan==1){system("cls");menu();}
              else {system("cls");log_out();}
        }else {saldo=saldo+150000; printf("TRANSAKSI GAGAL");menu();}
 }else {menu();system("cls");}
    }else{printf("MAAF NOMOR TAGIHAN TIDAK ADA");Sleep(3000);system("cls");menu();}

    }else {menu();system("cls");}

}

int pilihan1()
{
    int notagih[10];
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t                 PEMBAYARAN PAM\n");
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t           MASUKAN NOMOR TAGIHAN ANDA\n\n\t\t\t\t\t                  ");
    scanf("%d",&notagih[10]);
    printf("\n\n\n\t\t\t\t APAKAH ANDA YAKIN?\n\n");keyakinan2();
    scanf("%d",&pilihan);
    system("cls");
    if (pilihan==1){
    if(notagih[10]==123456789){
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t              KONFIRMASI PEMBAYARAN\n");
    printf("\t\t\t\t       ================================================\n\n\n");
            printf("\t\t         NOMOR TAGIHAN \t: \t %d\n\n",notagih[10]);
            printf("\t\t         NAMA \t\t:\t LEK TO\n\n");
            printf("\t\t         JUMLAH TAGIHAN :\t %d\n\n\n\n",200000);
            printf("\t\t         APAKAH ANDA YAKIN?");keyakinan2();
            scanf("%d",&pilihan);
            system("cls");
            if(pilihan==1){
        saldo = saldo-200000;
                        switch (pin)
                        {
                            case 123456 : saldo1=saldo;
                            break;
                            case 121212 : saldo2=saldo;
                            break;
                            case 123123 : saldo3=saldo;
                            break;
                            case 131313 : saldo4=saldo;
                            break;
                        }

        if (saldo>0){
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t                 PEMBAYARAN PAM\n");
    printf("\t\t\t\t       ================================================\n");
              printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);printf("\t\t\t\t\t\t     TRANSAKSI SUKSES\n\n\n\n\n");Sleep(3000);system("cls");
              apakah();keyakinan();
              scanf("%d",&pilihan);
              if (pilihan==1){system("cls");menu();}
              else {system("cls");log_out();}
        }else {saldo=saldo+200000; printf("TRANSAKSI GAGAL");menu();}
 }else {menu();system("cls");}
    }else{printf("MAAF NOMOR TAGIHAN TIDAK ADA");Sleep(3000);system("cls");menu();}

    }else {menu();system("cls");}
}


int pilihan4()
{
    int notagih[10];
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t                 PEMBAYARAN GAS\n");
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t           MASUKAN NOMOR TAGIHAN ANDA\n\n\t\t\t\t\t                  ");
    scanf("%d",&notagih[10]);
    printf("\n\n\n\t\t\t\t APAKAH ANDA YAKIN?\n\n");keyakinan2();
    scanf("%d",&pilihan);
    system("cls");
    if (pilihan==1){
    if(notagih[10]==123123123){
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t              KONFIRMASI PEMBAYARAN\n");
    printf("\t\t\t\t       ================================================\n\n\n");
            printf("\t\t         NOMOR TAGIHAN \t: \t %d\n\n",notagih[10]);
            printf("\t\t         NAMA \t\t:\t PLI TOD\n\n");
            printf("\t\t         JUMLAH TAGIHAN :\t %d\n\n\n\n",50000);
            printf("\t\t         APAKAH ANDA YAKIN?");keyakinan2();
            scanf("%d",&pilihan);
            system("cls");
            if(pilihan==1){
        saldo = saldo-50000;
                        switch (pin)
                        {
                            case 123456 : saldo1=saldo;
                            break;
                            case 121212 : saldo2=saldo;
                            break;
                            case 123123 : saldo3=saldo;
                            break;
                            case 131313 : saldo4=saldo;
                            break;
                        }

        if (saldo>0){
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t                 PEMBAYARAN GAS\n");
    printf("\t\t\t\t       ================================================\n");
              printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);printf("\t\t\t\t\t\t     TRANSAKSI SUKSES\n\n\n\n\n");Sleep(3000);system("cls");
              apakah();keyakinan();
              scanf("%d",&pilihan);
              if (pilihan==1){system("cls");menu();}
              else {system("cls");log_out();}
        }else {saldo=saldo+50000; printf("TRANSAKSI GAGAL");menu();}
 }else {menu();system("cls");}
    }else{printf("MAAF NOMOR TAGIHAN TIDAK ADA");Sleep(3000);system("cls");menu();}

    }else {menu();system("cls");}

}

int pembelian()
{
        printf("\t\t\t\t       ================================================\n");
        printf("\t\t\t\t\t\t\t    BAYAR/BELI\n\t\t\t\t       ================================================\n\n\n\n");
        printf("\t\t  \t   1 <---------PAM \t\t\t\t\tLISTRIK---------> 2\n\n\n");
        printf("\t\t  \t   3 <---------VOUCHER HP \t\t\t\tGAS--------> 4\n\n\n");
        printf("\t\t  \t   5 <---------CANCEL\n\n\n");
        printf("SILAHKAN MASUKKAN PILIHAN:\n\n");
        scanf("%d",&pilihan);

 system("cls");
    switch (pilihan)
    {
        case 1 : pilihan1();break;
        case 2 : pilihan2();break;
        case 3 : voucer();break;
        case 4 : pilihan4();break;
        case 5 : system("cls");menu ();
}
    }

int akun(){
    int validoper=1;
    extern int saldo;
    if (bahasa==2){
        printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t\t    SELAMAT DATANG DI ATM \n \t\t\t\t\t\t\tBANK MANDIRI\n\t\t\t\t       ================================================\n\n\n\n\n");
    printf("\t\t\t\t\t\t      MASUKAN PIN ANDA\n\n\n\n\t\t\t\t\t\t\t   ");}
    else if (bahasa==1){        printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t\t    WELCOME TO MANDIRI \n \t\t\t\t\t\t\tBANK ATM\n\t\t\t\t       ================================================\n\n\n\n\n");
    printf("\t\t\t\t\t\t      PLEASE INSERT YOUR PIN\n\n\n\n\t\t\t\t\t\t\t   ");}
    scanf("%d",&pin);
    switch (pin)
    {
        case 123456 :if(saldo1>=0) {saldo1 = saldo1;//rekeningnya 221021//
                            saldo=saldo1;}
                        break;
        case 121212 :
                            if(saldo2>=0) {saldo2 = saldo2;//rekeningnya 221022//
                            saldo=saldo2;}
                        break;
        case 123123 : if(saldo3>=0) {saldo3 = saldo3;//rekeningnya 221023//
                            saldo=saldo3;}
                        break;
        case 131313 : if(saldo4>=0) {saldo4 = saldo4;//rekeningnya 221024//
                            saldo=saldo4;}
                        break;
        default : validoper = 0;
    }
    if(validoper==1){
        system("cls");
        menu();
    }else {if(bahasa==2){printf("Password Salah"); system("pause"); system("cls");
        main();}
        else if (bahasa==1){printf("\nINCORECT PASSWORD"); system("pause"); system("cls");
    main();}
    }
}
int opsi1()
{
                if(bahasa==2){ printf("\t\t\t\t       ================================================\n");
                printf("\t\t\t\t\t\t     PENARIKAN UANG TUNAI\n\t\t\t\t       ================================================");
                printf("\n\n\n\t\t\t\tAPAKAH ANDA SETUJU?\n\n");}
            else if (bahasa==1){   printf("\t\t\t\t       ================================================\n");
                printf("\t\t\t\t\t\t     MONEY WITHDRAWAL\n\t\t\t\t       ================================================");
                printf("\n\n\n\t\t\t\tARE YOU SURE?\n\n");}
                keyakinan();scanf("%d",&pilihan); system("cls");
                    if (pilihan == 1){
                        saldo=saldo-50000;
                        switch (pin)
                        {
                            case 123456 : saldo1=saldo;
                            break;
                            case 121212 : saldo2=saldo;
                            break;
                            case 123123 : saldo3=saldo;
                            break;
                            case 131313 : saldo4=saldo;
                            break;
                        }

                        if(saldo>0){
                                if(bahasa==2){
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PENARIKAN UANG TUNAI\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  SILAHKAN AMBIL UANG ANDA\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PENARIKAN UANG TUNAI\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   SISA SALDO ANDA %d",saldo);}
                                else if (bahasa==1){
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     MONEY WITHDRAWAL\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSACTION IS BEING PROCESSED\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  PLEASE TAKE YOUR MONEY\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     MONEY WITHDRAWAL\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   YOUR CURRENT SALDO %d",saldo);}

                    apakah();keyakinan();
                    scanf("%d",&pilihan);
                    system("cls");
                    if (pilihan==1){
                        menu();
                    } else { log_out();}
                    }else if (saldo<0){
                        saldo= saldo+50000;
                        if(bahasa==2){printf("MAAF SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI\n\n\n\n");}
                        else if (bahasa==1){printf("SORRY YOUR SALDO DOESN'T ENOUGH TO DO THIS TRANSACTION\n\n\n\n");}
                        system("pause");
                        system("cls");
                        menu();}

                    }else{ menu();}

}

int opsi2()
{
                if(bahasa==2){ printf("\t\t\t\t       ================================================\n");
                printf("\t\t\t\t\t\t     PENARIKAN UANG TUNAI\n\t\t\t\t       ================================================");
                printf("\n\n\n\t\t\t\tAPAKAH ANDA SETUJU?\n\n");}
            else if (bahasa==1){   printf("\t\t\t\t       ================================================\n");
                printf("\t\t\t\t\t\t     MONEY WITHDRAWAL\n\t\t\t\t       ================================================");
                printf("\n\n\n\t\t\t\tARE YOU SURE?\n\n");}
                keyakinan();scanf("%d",&pilihan); system("cls");
                    if (pilihan == 1){
                        saldo=saldo-100000;
                        switch (pin)
                        {
                            case 123456 : saldo1=saldo;
                            break;
                            case 121212 : saldo2=saldo;
                            break;
                            case 123123 : saldo3=saldo;
                            break;
                            case 131313 : saldo4=saldo;
                            break;
                        }

                        if(saldo>0){
                                if(bahasa==2){
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PENARIKAN UANG TUNAI\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  SILAHKAN AMBIL UANG ANDA\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PENARIKAN UANG TUNAI\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   SISA SALDO ANDA %d",saldo);}
                                else if (bahasa==1){
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     MONEY WITHDRAWAL\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSACTION IS BEING PROCESSED\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  PLEASE TAKE YOUR MONEY\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     MONEY WITHDRAWAL\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   YOUR CURRENT SALDO %d",saldo);}

                    apakah();keyakinan();
                    scanf("%d",&pilihan);
                    system("cls");
                    if (pilihan==1){
                        menu();
                    } else { log_out();}
                    }else if (saldo<0){
                        saldo= saldo+100000;
                        if(bahasa==2){printf("MAAF SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI\n\n\n\n");}
                        else if (bahasa==1){printf("SORRY YOUR SALDO DOESN'T ENOUGH TO DO THIS TRANSACTION\n\n\n\n");}
                        system("pause");
                        system("cls");
                        menu();}

                    }else{ menu();}

}


int opsi3()
{
                if(bahasa==2){ printf("\t\t\t\t       ================================================\n");
                printf("\t\t\t\t\t\t     PENARIKAN UANG TUNAI\n\t\t\t\t       ================================================");
                printf("\n\n\n\t\t\t\tAPAKAH ANDA SETUJU?\n\n");}
            else if (bahasa==1){   printf("\t\t\t\t       ================================================\n");
                printf("\t\t\t\t\t\t     MONEY WITHDRAWAL\n\t\t\t\t       ================================================");
                printf("\n\n\n\t\t\t\tARE YOU SURE?\n\n");}
                keyakinan();scanf("%d",&pilihan); system("cls");
                    if (pilihan == 1){
                        saldo=saldo-300000;
                        switch (pin)
                        {
                            case 123456 : saldo1=saldo;
                            break;
                            case 121212 : saldo2=saldo;
                            break;
                            case 123123 : saldo3=saldo;
                            break;
                            case 131313 : saldo4=saldo;
                            break;
                        }

                        if(saldo>0){
                                if(bahasa==2){
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PENARIKAN UANG TUNAI\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  SILAHKAN AMBIL UANG ANDA\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PENARIKAN UANG TUNAI\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   SISA SALDO ANDA %d",saldo);}
                                else if (bahasa==1){
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     MONEY WITHDRAWAL\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSACTION IS BEING PROCESSED\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  PLEASE TAKE YOUR MONEY\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     MONEY WITHDRAWAL\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   YOUR CURRENT BALANCE %d",saldo);}

                    apakah();keyakinan();
                    scanf("%d",&pilihan);
                    system("cls");
                    if (pilihan==1){
                        menu();
                    } else { log_out();}
                    }else if (saldo<0){
                        saldo= saldo+300000;
                        if(bahasa==2){printf("MAAF SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI\n\n\n\n");}
                        else if (bahasa==1){printf("SORRY YOUR SALDO DOESN'T ENOUGH TO DO THIS TRANSACTION\n\n\n\n");}
                        system("pause");
                        system("cls");
                        menu();}

                    }else{ menu();}

}


int opsi4()
{
                        if(bahasa==2){
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t\t     PENARIKAN UANG TUNAI\n\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t      MASUKAN NOMINAL YANG ANDA INGINKAN\n");
    printf("\t\t\t\t\t\t (DALAM KELIPATAN RP 50.000\)\n");
    printf("\t\t\t\t      NOMINAL MAKSIMUM PENARIKAN ADALAH RP 1.250.000\n\n\n\t\t\t\t\t\t\t   ");}
                        else if(bahasa==1){
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t\t     MONEY WITHDRAWAL\n\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t      INSERT NOMINALS YOU WANT\n");
    printf("\t\t\t\t\t\t  (IN THE COST RP 50.000\)\n");
    printf("\t\t\t\t      NOMINAL MAXIMUM WITHDRAWAL IS RP 1.250.000\n\n\n\t\t\t\t\t\t\t   ");}

                    scanf("%d",&nominal);
                    keyakinan();scanf("%d",&pilihan); system("cls");
                    if (pilihan == 1){
                            if(nominal%50000==0){
                                    if(nominal<=1250000){
                        saldo=saldo-nominal;
                        switch (pin)
                        {
                            case 123456 : saldo1=saldo;
                            break;
                            case 121212 : saldo2=saldo;
                            break;
                            case 123123 : saldo3=saldo;
                            break;
                            case 131313 : saldo4=saldo;
                            break;
                        }
                        if(saldo>=0){
                                if(bahasa==2){
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PENARIKAN UANG TUNAI\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  SILAHKAN AMBIL UANG ANDA\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     PENARIKAN UANG TUNAI\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   SISA SALDO ANDA %d",saldo);}
                                else if(bahasa==1){
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     MONEY WITHDRAWAL\n\t\t\t\t       ================================================");
                    printf("\n\n\n \t\t\t\t\t\t  TRANSACTION IS BEING PROCESSED\n\n\n\n\n");Sleep(3000);
                    printf("\t\t\t\t\t\t  PLEASE TAKE YOUR MONEY\n");Sleep(3000);
                    system("cls");
                    printf("\t\t\t\t       ================================================\n");
                    printf("\t\t\t\t\t\t     MONEY WITHDRAWAL\n\t\t\t\t       ================================================");
                    printf("\n\n\n\n\t\t\t\t\t\t   YOUR CURRENT BALANCE %d",saldo);}

                    apakah();keyakinan();
                    scanf("%d",&pilihan);
                    system("cls");
                    if (pilihan==1){
                        menu();
                    } else { log_out();}
                    }
                     else if (saldo<=0){
                        saldo= saldo+nominal;
                      if (bahasa==2){ printf("MAAF SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI\n\n\n\n");}
                     else if (bahasa==1){ printf("SORRY YOUR SALDO DOESN'T ENOUGH TO DO THIS TRANSACTION\n\n\n\n");}
                        system("pause");
                        system("cls");
                        menu();}
                                    }else {
                                        if (bahasa==2){printf("MAAF TRANSAKSI ANDA TIDAK DAPAT DIPROSES\n\n");}
                                        else {printf("SORRY YOUR TRANSACTION ISN'T PROCESSED\n\n");};
                                        system("pause");system("cls"); opsi4();};
                            }else {printf("MAAF ANDA SALAH\n\n");system("pause");system("cls");opsi4();}

                    }else{ menu();}

}

int menu()
{
if(bahasa==2){
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t       SELAMAT DATANG DI ATM BANK MANDIRI \n      \t\t\t\t\t\t\tMENU UTAMA\n\t\t\t\t       ================================================");
    printf("\t\t\t\t\t\t\t\t\t\t\t     <PECAHAN RP 50.000>\n\n\n\n\n");
    printf("\t\t  \t   1 <---------50.000 \t\t\t\t\t100.000---------> 2\n\n\n");
    printf("\t\t  \t   3 <---------300.000 \t\t\t\t PENARIKAN LAIN---------> 4\n\n\n");
    printf("\t\t  \t   5 <---------BAYAR/ BELI \t\t      TRANSAKSI LAINNYA---------> 6\n\n\n");
    printf("\t\t  \t   7 <---------CANCEL\n\n");}
else if (bahasa==1){
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t       WELCOME TO MANDIRI BANK ATM \n      \t\t\t\t\t\t\tMAIN MENU\n\t\t\t\t       ================================================");
    printf("\t\t\t\t\t\t\t\t\t\t\t     <RP 50.000>\n\n\n\n\n");
    printf("\t\t  \t   1 <---------50.000 \t\t\t\t\t100.000---------> 2\n\n\n");
    printf("\t\t  \t   3 <---------300.000 \t\t\t\t OTHER WITHDRAWAL---------> 4\n\n\n");
    printf("\t\t  \t   5 <---------PAY/BUY \t\t      OTHER TRANSACTION---------> 6\n\n\n");
    printf("\t\t  \t   7 <---------CANCEL\n\n");}

    scanf("%d",&pilihan);

    system("cls");
    switch (pilihan)
    {
        case 1 : opsi1();break;
        case 2 : opsi2();break;
        case 3 : opsi3();break;
        case 4 : opsi4();break;
        case 5 : pembelian();break;
        case 6 : lainya();break;
        case 7 : log_out();



    }
}


int tranfer()
{
                                if (bahasa==2){

    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t                 MENU TRANSFER\n");
    printf("\t\t\t\t       ================================================\n\n\n");}
    else {
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t                 TRANSFER MENU\n");
    printf("\t\t\t\t       ================================================\n\n\n");}
    int validoper=1;
                                if (bahasa==2){
    printf("\t\t\t\t\t\t\t\ MASUKKAN NOMOR\n\t\t\t\t\t\t   REKENING TUJUAN\n\n\t\t\t\t\t\t\t     ");}
                                else{
    printf("\t\t\t\t\t\t\t\ INSERT DESTINATION\n\t\t\t\t\t\t\t    BILLS NUMBER\n\n\t\t\t\t\t\t\t     ");}

    scanf("%d",&rekening);
    keyakinan2();
    scanf("%d",&pilihan);
    system("cls");
    if(pilihan==1){

    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t                 MENU TRANSFER\n");
    printf("\t\t\t\t       ================================================\n\n\n");
        printf("\t\t\t\t\t      MASUKKAN JUMLAH (MINIMUM RP 50.000)\n\n\t\t\t\t\t\t\t     ");
        scanf("%d",&nominalt);
        keyakinan2();
        scanf("%d",&pilihan);
        if(nominalt>=50000){
        if(pilihan==1){
                 system("cls");
        if (rekening==221021||rekening==221022||rekening==221023||rekening==221024){

    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t              KONFIRMASI TRANSFER\n");
    printf("\t\t\t\t       ================================================\n\n\n");
            printf("\t\t\t\tREKENING TUJUAN : %d\n",rekening);
            printf("\t\t\t\tNAMA \t: ");data();puts("");
            printf("\t\t\t\tJUMLAH \t: %d\n\n\n",nominalt);


            keyakinan2();
            scanf("%d",&pilihan);system("cls");
            if(pilihan==1){

  switch (rekening)
    {
        case 221022 :
                switch (pin){
                    case 123456 : if(nominalt<saldo1){saldo2=saldo2+nominalt; saldo1=saldo1-nominalt; saldo = saldo1;
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\t\t\t\t\t                 TRANSFER\n");
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);printf("\t\t\t\t\t\t     TRANSAKSI SUKSES\n\n\n\n\n");Sleep(3000);system("cls");
                                    apakah();keyakinan();
                                    scanf("%d",&pilihan);system("cls");
                                        if(pilihan==1){
                                            menu();
                                        }else {log_out();}
                                    }
                                    else if(nominalt>=saldo1){
                                        printf("SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI INI");Sleep(3000);system("cls"); tranfer();
                            }break;

                   case 123123 : if(nominalt<saldo3){saldo2=saldo2+nominalt; saldo3=saldo3-nominalt; saldo = saldo3;
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\t\t\t\t\t                 TRANSFER\n");
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);printf("\t\t\t\t\t\t     TRANSAKSI SUKSES\n\n\n\n\n");Sleep(3000);system("cls");
                                    apakah();keyakinan();
                                    scanf("%d",&pilihan);system("cls");
                                        if(pilihan==1){
                                            menu();
                                        }else {log_out();}
                                    }
                                    else if(nominalt>=saldo3){
                                        printf("SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI INI");Sleep(3000);system("cls"); tranfer();
                            }break;
                    case 131313 : if(nominalt<saldo4){saldo2=saldo2+nominalt; saldo4=saldo4-nominalt; saldo = saldo4;
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\t\t\t\t\t                 TRANSFER\n");
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);printf("\t\t\t\t\t\t     TRANSAKSI SUKSES\n\n\n\n\n");Sleep(3000);system("cls");
                                    apakah();keyakinan();
                                    scanf("%d",&pilihan);system("cls");
                                        if(pilihan==1){
                                            menu();
                                        }else {log_out();}
                                    }
                                    else if(nominalt>=saldo4){
                                        printf("SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI INI");Sleep(3000);system("cls"); tranfer();
                            }break;
                    default : validoper =0;
                    }
                    if(validoper==0){
                            system("cls");
                    printf("MAAF TRANSAKSI ANDA TIDAK BISA DILAKUKAN");system("pause");system("cls");
                    menu();
                    }
                    break;


        case 221021 :
                switch (pin){
                    case 121212 : if(nominalt<saldo2){saldo1=saldo1+nominalt; saldo2=saldo2-nominalt; saldo = saldo2;
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\t\t\t\t\t                 TRANSFER\n");
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);printf("\t\t\t\t\t\t     TRANSAKSI SUKSES\n\n\n\n\n");Sleep(3000);system("cls");
                                    apakah();keyakinan();
                                    scanf("%d",&pilihan);system("cls");
                                        if(pilihan==1){
                                            menu();
                                        }else {log_out();}
                                    }
                                    else if(nominalt>=saldo2){
                                        printf("SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI INI");Sleep(3000);system("cls"); tranfer();
                            }break;

                   case 123123 : if(nominalt<saldo3){saldo1=saldo1+nominalt; saldo3=saldo3-nominalt; saldo = saldo3;
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\t\t\t\t\t                 TRANSFER\n");
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);printf("\t\t\t\t\t\t     TRANSAKSI SUKSES\n\n\n\n\n");Sleep(3000);system("cls");
                                    apakah();keyakinan();
                                    scanf("%d",&pilihan);system("cls");
                                        if(pilihan==1){
                                            menu();
                                        }else {log_out();}
                                    }
                                    else if(nominalt>=saldo3){
                                        printf("SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI INI");Sleep(3000);system("cls"); tranfer();
                            }break;

                    case 131313 : if(nominalt<saldo4){saldo1=saldo1+nominalt; saldo4=saldo4-nominalt; saldo = saldo4;
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\t\t\t\t\t                 TRANSFER\n");
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);printf("\t\t\t\t\t\t     TRANSAKSI SUKSES\n\n\n\n\n");Sleep(3000);system("cls");
                                    apakah();keyakinan();
                                    scanf("%d",&pilihan);system("cls");
                                        if(pilihan==1){
                                            menu();
                                        }else {log_out();}
                                    }
                                    else if(nominalt>=saldo4){
                                        printf("SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI INI");Sleep(3000);system("cls"); tranfer();
                            }break;
                    default : validoper =0;
                    }
                    if(validoper==0){
                            system("cls");
                    printf("MAAF TRANSAKSI ANDA TIDAK BISA DILAKUKAN");system("pause");system("cls");
                    menu();
                    }
                    break;

        case 221023 :
                switch (pin){
                    case 123456 : if(nominalt<saldo1){saldo3=saldo3+nominalt; saldo1=saldo1-nominalt; saldo = saldo1;
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\t\t\t\t\t                 TRANSFER\n");
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);printf("\t\t\t\t\t\t     TRANSAKSI SUKSES\n\n\n\n\n");Sleep(3000);system("cls");
                                    apakah();keyakinan();
                                    scanf("%d",&pilihan);system("cls");
                                        if(pilihan==1){
                                            menu();
                                        }else {log_out();}
                                    }
                                    else if(nominalt>=saldo1){
                                        printf("SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI INI");Sleep(3000);system("cls"); tranfer();
                            }break;

                   case 121212 : if(nominalt<saldo2){saldo3=saldo3+nominalt; saldo2=saldo2-nominalt; saldo = saldo2;
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\t\t\t\t\t                 TRANSFER\n");
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);printf("\t\t\t\t\t\t     TRANSAKSI SUKSES\n\n\n\n\n");Sleep(3000);system("cls");
                                    apakah();keyakinan();
                                    scanf("%d",&pilihan);system("cls");
                                        if(pilihan==1){
                                            menu();
                                        }else {log_out();}
                                    }
                                    else if(nominalt>=saldo2){
                                        printf("SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI INI");Sleep(3000);system("cls"); tranfer();
                            }break;
                    case 131313 : if(nominalt<saldo4){saldo3=saldo3+nominalt; saldo4=saldo4-nominalt; saldo = saldo4;
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\t\t\t\t\t                 TRANSFER\n");
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);printf("\t\t\t\t\t\t     TRANSAKSI SUKSES\n\n\n\n\n");Sleep(3000);system("cls");
                                    apakah();keyakinan();
                                    scanf("%d",&pilihan);system("cls");
                                        if(pilihan==1){
                                            menu();
                                        }else {log_out();}
                                    }
                                    else if(nominalt>=saldo4){
                                        printf("SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI INI");Sleep(3000);system("cls"); tranfer();
                            }break;
                    default : validoper =0;
                    }
                    if(validoper==0){
                            system("cls");
                    printf("MAAF TRANSAKSI ANDA TIDAK BISA DILAKUKAN");system("pause");system("cls");
                    menu();
                    }
                    break;

        case 221024 :
                switch (pin){
                    case 123456 : if(nominalt<saldo1){saldo4=saldo4+nominalt; saldo1=saldo1-nominalt; saldo = saldo1;
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\t\t\t\t\t                 TRANSFER\n");
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);printf("\t\t\t\t\t\t     TRANSAKSI SUKSES\n\n\n\n\n");Sleep(3000);system("cls");
                                    apakah();keyakinan();
                                    scanf("%d",&pilihan);system("cls");
                                        if(pilihan==1){
                                            menu();
                                        }else {log_out();}
                                    }
                                    else if(nominalt>=saldo1){
                                        printf("SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI INI");Sleep(3000);system("cls"); tranfer();
                            }break;

                   case 123123 : if(nominalt<saldo3){saldo4=saldo4+nominalt; saldo3=saldo3-nominalt; saldo = saldo3;
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\t\t\t\t\t                 TRANSFER\n");
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);printf("\t\t\t\t\t\t     TRANSAKSI SUKSES\n\n\n\n\n");Sleep(3000);system("cls");
                                    apakah();keyakinan();
                                    scanf("%d",&pilihan);system("cls");
                                        if(pilihan==1){
                                            menu();
                                        }else {log_out();}
                                    }
                                    else if(nominalt>=saldo3){
                                        printf("SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI INI");Sleep(3000);system("cls"); tranfer();
                            }break;
                    case 121212 : if(nominalt<saldo2){saldo4=saldo4+nominalt; saldo2=saldo2-nominalt; saldo = saldo2;
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\t\t\t\t\t                 TRANSFER\n");
                                    printf("\t\t\t\t       ================================================\n");
                                    printf("\n\n\n \t\t\t\t\t\t  TRANSAKSI SEDANG DIPROSES\n\n\n\n\n");Sleep(3000);printf("\t\t\t\t\t\t     TRANSAKSI SUKSES\n\n\n\n\n");Sleep(3000);system("cls");
                                    apakah();keyakinan();
                                    scanf("%d",&pilihan);system("cls");
                                        if(pilihan==1){
                                            menu();
                                        }else {log_out();}
                                    }
                                    else if(nominalt>=saldo2){
                                        printf("SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSAKSI INI");Sleep(3000);system("cls"); tranfer();
                            }break;
                    default : validoper =0;
                    }
                    if(validoper==0){
                            system("cls");
                    printf("MAAF TRANSAKSI ANDA TIDAK BISA DILAKUKAN");system("pause");system("cls");
                    menu();
                    }
                    break;

    }

            }else {menu();}
            }else {printf("MAAF REKENING YANG ANDA MASUKKAN TIDAK TERDAFTAR\n");system("pause");system("cls");tranfer();}
            }else{system("cls");menu();}
                }else {printf("TANSAKSI GAGAL\n");system("pause");system("cls");tranfer();}


    }else{system("cls");menu();}

}

int lainya()
{
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t                 TRANSAKSI LAINNYA\n");
    printf("\t\t\t\t       ================================================\n\n\n");
 printf("\n\t\t\t\t\t\t\t\tINFORMASI SALDO-------------> 1\n\n");
 printf("\t\t\t\t\t\t\t\tTRANSFER--------------------> 2\n\n");
 printf("\t\t\t\t\t\t\t\tCANCEL----------------------> 3\n\n");
 scanf("%d",&pilihan);system("cls");
 if(pilihan==1){
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t               INFORMASI SALDO\n");
    printf("\t\t\t\t       ================================================\n\n\n");
    printf("\t\t\t\t              JUMLAH SALDO ANDA ADALAH %d\n\n\n",saldo);Sleep(3000);system("cls");
    apakah();keyakinan();
    scanf("%d",&pilihan);
    system("cls");
    if(pilihan==1)
        menu();
    else log_out();
 } else if (pilihan==2){
     tranfer();
 } else {
     menu();system("cls");
 }
}


int main()
{
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t\t    SELAMAT DATANG DI ATM \n \t\t\t\t\t\t\tBANK MANDIRI\n\t\t\t\t       ================================================\n\n\n\n\n");
    printf("\t\t\t\t\t\tSILAHKAN MASUKAN KARTU ANDA\n\t\t\t\t\t\t      UNTUK PELAYANAN");

    getch();
    system("cls");
    printf("\t\t\t\t       ================================================\n");
    printf("\t\t\t\t\t\t    SELAMAT DATANG DI ATM \n \t\t\t\t\t\t\tBANK MANDIRI\n\t\t\t\t       ================================================\n\n\n\n\n");
    printf("\t\t\t\tPILIH BAHASA\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\tENGLISH---------> 1\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\tINDONESIA-------> 2\n\n\t\t\t\t");

    scanf("%d",&bahasa);
    if(bahasa==2){

    system("cls");

    akun();
    }else {system("cls");akun();}
}
