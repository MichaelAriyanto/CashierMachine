//https://github.com/cybereaper24/CashierMachine//

#include<stdio.h>
#include<stdlib.h>

int st1[100], st2[100];
int top1 = -1, top2 = -1;
int count = 0;
char imenu, iloop, pass[30] = "password", ipass[30], repass[30];
int ibarang[] = {10000, 7500, 3000, 6000, 8000};
int code, harga, uang, kembalian, count, elb, gharga;
struct listharga {
    int cbarang;
    char nbarang[50];
    int	hbarang;
};
struct listharga abarang[50];


//menu utama pada program kasir
int main()
{
	printf	("=============================================================\n");
	printf	("============== Selamat datang ke program kasir ==============\n");
	printf	("==============           Kelompok 18           ==============\n");
	printf	("=============================================================\n");	
		
	harga = 0;
	
	menu();	
	
	return 0;		
}


//menu awal
int menu()
{	
	printf	("\n\nMasukan angka sesuai menu yang ingin dipilih lalu tekan enter\n");
	printf	("=============================================================\n\n");
	printf	("[1] Menjalankan Program\n");
	printf	("[2] Masuk antrian\n");
	printf	("[3] Help\n");
	printf	("[4] Admin Login\n");
	printf	("[5] Exit\n");
		
	scanf	("%c", &imenu);	
	system("cls");
	
	if (imenu == '1')
	{
		prog();	
	}
	else if (imenu == '2')
	{
		howtoqueue();	
	}
	else if (imenu == '3')
	{
		helpa();
	}
	else if (imenu == '4')
	{
		admin();
	}
	else if (imenu == '5')
	{
		printf 	("Memberhentikan Program\n");

		return 0;
	}	
	else
	{	
		return menu();
	}
}


//list barang yang dapat dibeli
int read()
{
    int i;
    // Define a pointer to predefined structure type FILE
    FILE *fpt; 
 
    // Open data files
    if((fpt = fopen("test.txt", "r")) == NULL) 
	{
        printf("\nERROR - Cannot open the designated file\n");
    } 
	else 
	{
		// Read from file
    	for(i = 0; i < 20; i++) 
		{
        	fscanf(fpt, "%d %s %d", &abarang[i].cbarang, abarang[i].nbarang, &abarang[i].hbarang);
    	}
    }
 
	// Show data
    for(i = 0; i < 20; i++) 
	{
    	printf("%d	%s		%d\n", abarang[i].cbarang, abarang[i].nbarang, abarang[i].hbarang);
    }
    fclose(fpt);
}


int prog()
{	
	system("cls");
	printf	("Menu Input Barcode\n\n");
	
	read();
	
	printf	("\nHarga total			:Rp%d\n", harga);
	
	calc();
}


int calc()
{
	printf	("Masukkan Kode Barang yang Dibeli (masukan 0 untuk menghitung total): ");
	scanf	("%d", &code);
	
	//perhitungan total harga barang yang dibeli		
	if (code == 0)
	{	
		printf	("Harga total			:Rp%d\n", harga);
	}
	else
	{
		harga = harga + abarang[code-1].hbarang;

		system("cls");
			
		printf	("Harga total			:Rp%d\n", harga);
		
		return prog();			
	}
			
	printf	("Masukan jumlah uang pelanggan	:Rp");
	scanf	("%d", &uang);
	
	//perhitungan kembalian pembeli
	kembalian = uang - harga;
	
	printf	("Kembalian			:Rp%d\n", kembalian);
	
	printf	("Press anything to continue");
	
	getch();
	system("cls");
	main();
}

	
//menu bantuan pada menu utama		
int helpa()
{
	system("cls");
	
	printf	("Menu Help\n");

	printf	("Pada tahap ini, terdapat 2 menu yang dapat anda gunakan.\n");
	printf	("Tekan 1 lalu tekan enter untuk menjalankan program\n");
	printf	("Tekan 2 lalu tekan enter untuk meminta bantuan penggunaan program kasir\n");
	printf	("Tekan 3 lalu tekan enter untuk membuka menu admin\n");
	printf	("Tekan 4 lalu tekan enter untuk memberhentikan program\n\n");

	printf	("Press anything to continue\n");
		
	getch();

	return main();
}	


//menu yang hanya dapat digunakan oleh admin
int admin()
{
	system("cls");

	printf	("Menu Admin\n");
	printf	("Insert password to log in:\n");
	
	scanf	("%s", ipass);
	
	if (strcmp(pass, ipass) == 0)
	{
		printf	("login successful\n");
		printf	("Press anything to continue");
		getch();
		amenu();
	}
	else
	{
		printf	("incorrect password\n");
		printf	("Press anything to continue");
		getch();
	
		return admin();
	}	
}


//menu yang dapat diakses admin	
int amenu()
{
	system("cls");
	
	printf	("Masukan angka sesuai menu yang ingin dipilih lalu tekan enter\n");
	printf	("=============================================================\n\n");
	printf	("[1] Edit Harga barang\n");
	printf	("[2] Ganti Password\n");
	printf	("[3] Help\n");
	printf	("[4] Exit\n");
		
	scanf	(" %c", &imenu);	
			
	if (imenu == '1')
	{
		elist();	
	}
	else if (imenu == '2')
	{
		cpass();	
	}
	else if (imenu == '3')
	{
		ahelp();
	}
	else if (imenu == '4')
	{
		printf 	("Memberhentikan Program\n");
		
		return 0;
	}	
	else
	{	
		return menu();
	}
	
	return menu();
}


//menu untuk menggubah harga barang (menu khusus admin)	
int elist()
{
	
	FILE *fpt;
	
	system("cls");
	printf	("Menu Edit list barang\n");
		
	read();
		
	printf	("Input nomor barang yang ingin diubah harganya	:");
	scanf	("%d", &elb);
	printf	("Input harga baru :");
	scanf	("%d", &gharga);
	
	abarang[elb-1].cbarang = elb;
    abarang[elb-1].hbarang = gharga;
	
	if((fpt = fopen("test.txt", "r+")) == NULL) {
        printf("\nERROR - Cannot open the designated file\n");
    } else {
        // Read from file
    for(count = 0; count < 20; count++) {
        fscanf(fpt, "%d %s %d", &abarang[count].cbarang, abarang[count].nbarang, &abarang[count].hbarang);
    }
    }
	
	abarang[elb-1].cbarang = elb;
    abarang[elb-1].hbarang = gharga;
	
	fseek(fpt, 0, SEEK_SET);
    
    for(count=0;count<20;count++){
    
		fprintf(fpt, "%d ", abarang[count].cbarang);
		fprintf(fpt, "%s ", abarang[count].nbarang);
		fprintf(fpt, "%d\n", abarang[count].hbarang);
	
	}
	fclose(fpt);
	
	system("cls");
	
	read();	
	getch();
	amenu();	
}


//sistem untuk memasukkan password untuk masuk ke menu admin
int cpass()
{
	system("cls");
		
	printf	("Menu ganti password\n");
	printf	("Insert current password\n");
	scanf	("%s", ipass);
	
	if (strcmp(pass, ipass) == 0)
	{
		printf("login successful\n");
		printf	("Press anything to continue");
		getch();
		change();
	}
		
	else
	{
		printf("incorrect password\n");
		printf	("Press anything to continue");
		getch();
	
		return cpass();
	}	
}


//menu untuk mengubah password untuk menu admin
int change()
{
	system("cls");
	
	printf	("Input new password :");
	scanf	("%s", &ipass);
	printf	("re-Input new password :");
	scanf	("%s", &repass);
	
	if (strcmp(ipass, repass) == 0)
	{
		printf("change successful\n");
		
		for(count = 0; count < 8; count++)
		{
			pass[count] = ipass[count];
		}
		
		printf	("new password is :%s", pass);
		getch();
	}	
	else
	{
		printf("incorrect password\n");
		printf	("Press anything to continue");
		getch();

		return change();
	}	
}


//menu bantuan pada menu admin
int ahelp()
{	
	system("cls");
	
	printf	("Menu Help Admin\n");
	
	printf	("Pada tahap ini, terdapat 2 menu yang dapat anda gunakan.\n");
	printf	("Tekan 1 lalu tekan enter untuk mengubah harga barang\n");
	printf	("Tekan 2 lalu tekan enter untuk meminta bantuan menu admin\n");
	printf	("Tekan 3 lalu tekan enter untuk mengubah password\n");
	printf	("Tekan 4 lalu tekan enter untuk menghentikan program\n\n");
	
	printf	("Press anything to continue");
	
	getch();
		
	return amenu();
}	


int howtoqueue()
{
    int ch;
    
	system("cls");
    
    printf("\n1 - Enter queue");
    printf("\n2 - Next queue(admin only)");
    printf("\n3 - Display queue");
    printf("\n4 - Exit");
    
	create();
    
    while (1)
    {
        printf("\nEnter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            menu();
        default:
            printf("Wrong choice");
        }
    }
}


/*Function to create a queue*/
int create()
{
    top1 = top2 = -1;
}

 
/*Function to push the element on to the stack*/
int push1(int data)
{
    st1[++top1] = data;
}

 
/*Function to pop the element from the stack*/
int pop1()
{
    return(st1[top1--]);
}

 
/*Function to push an element on to stack*/
void push2(int data)
{
    st2[++top2] = data;
}
 
 
/*Function to pop an element from th stack*/ 
int pop2()
{
    return(st2[top2--]);
}
 
 
/*Function to add an element into the queue using stack*/
int enqueue()
{
    int data, i;
 
    printf("Enter shopper id into queue : ");
    scanf("%d", &data);
    push1(data);
    count++;
}
 

/*Function to delete an element from the queue using stack*/
int dequeue()
{
    int i;
    
    printf	("Insert password\n");
	scanf	("%s", ipass);
	
	if (strcmp(pass, ipass) == 0)
	{
		printf("login successful\n");
		printf	("Press anything to continue\n");
		getch();
	}		
	else
	{
		printf("incorrect password\n");
		printf	("Press anything to continue\n");
		getch();
	
		return howtoqueue();
	}	
	
	printf	("\n%d please come to the cashier\n", st1[i]);
 
    for (i = 0;i <= count;i++)
    {
        push2(pop1());
    }
    
    pop2();
    count--;
    
    for (i = 0;i <= count;i++)
    {
        push1(pop2());
    }
}
 

/*Function to display the elements in the stack*/ 
int display()
{
    int i;
 	
 	printf	("current queue is\n");
 	
 	printf	("-");
 	
    for (i = 0;i <= top1;i++)
    {
        printf("  %d  ", st1[i]);
    }
    
    printf	("-\n");
}


