#include <stdio.h>
#include <stdlib.h>

void tur()
	{
		
		int i=0;
	    for(i==0;i<=1;i++)
	{
		printf("asagidaki turlerden sevdiginiz birini seciniz.\n\n\n [1]-fantastik \n\n\n[2]-korku\n\n\n[3]-romantizm\n\n\n[4]-siir\n\n\n [5]-dunya klasikleri\n\n");
		scanf("\n\n %d",&i);
		if (i==2)
		{
			printf("fantastik turunde olan  kitaplar listeleniyor bekleyiniz lutfen.");
			 int c=0;
	       while(1)
	       {
	       	   c++;
	       	   printf("*******kitap araniyor*********\n*******ayisigi kitap evini tercih ettiginiz icin tesekkurler*****************");
	       	   
	       	   if(c=4)
				  	break;
		      else 
			      continue;
		
			}
				FILE *belge;
	char stok;
	belge=fopen("C:\\Users\\hp\\Desktop\\projem\\fantastikkitap.txt","r");
	
	do
	{
		stok=getc(belge);
		printf("%c",stok);
	}
	
	while(stok!=EOF);
	fclose(belge);
    }
	   
    }
		if(i==3)
		{
			printf("korku turu olan kitaplar listeleniyor bekleyiniz lutfen.");
			 int m=0;
	       while(1)
	       {
	       	   m++;
	       	   printf("*******kitap araniyor*********\n*******ayisigi kitap evini tercih ettiginiz icin tesekkurler********");
	       	   
	       	   if(m=4)
				  	break;
			else
				 	continue;	
			 	 	 	
		   }
		   FILE *belge;
	       char stok;
	       belge=fopen("C:\\Users\\hp\\Desktop\\projem\\korkukitaplari.txt","r");
	
	       do
	       {
		       stok=getc(belge);
		       printf("%c",stok);
	       }
	
	        while(stok!=EOF);
	        fclose(belge);
		   
	}
		if(i==4)
		{
			printf("romantizm turu olan kitaplar listeleniyor bekleyiniz lutfen.");
			 int n=0;
	       while(1)
	       {
	       	   n++;
	       	   printf("*******kitap araniyor*********\n*******ayisigi kitap evini tercih ettiginiz icin tesekkurler********");
	       	   
	       	   if(n=4)
				  	break;	 	
	            else
				 	continue;
			
		   }
		   FILE *belge;
	             char stok;
	             belge=fopen("C:\\Users\\hp\\Desktop\\projem\\romantizm.txt","r");
	
	             do
	             {
		            stok=getc(belge);
		            printf("%c",stok);
	             }
	
	            while(stok!=EOF);
	            fclose(belge);	 	
		         
	           }
		
		if(i==5)
		{
		printf("siir turu olankitaplar listeleniyor bekleyiniz lutfen."	);
		 int t=0;
	       while(1)
	       {
	       	   t++;
	       	   printf("*******kitap araniyor*********\n*******ayisigi kitap evini tercih ettiginiz icin tesekkurler********");
	       	   
	       	   if(t=4)
				  	break;	
        	else
				 	continue;
				 	
		   }
		   FILE *belge;
              char stok;
	          belge=fopen("C:\\Users\\hp\\Desktop\\projem\\siirkitaplari.txt","r");
	
            do
	          {
	           	stok=getc(belge);
	         	printf("%c",stok);
           	 }
	
           	while(stok!=EOF);
        	fclose(belge);	 
		   
		      
              }

		if(i==6)
		{
			printf("dunya klasigi turu olan kitaplar listeleniyor bekleyiniz lutfen.");
			 int j=0;
	       while(1)
	       {
	       	   j++;
	       	   printf("*******kitap araniyor*********\n*******ayisigi kitap evini tercih ettiginiz icin tesekkurler********");
	       	   
	       	   if(j=4)
				  	break;	
		    else
				 	continue; 	
				
		    }
		    FILE *belge;
          	char stok;
        	belge=fopen("C:\\Users\\hp\\Desktop\\projem\\dünyaklsikleri.txt","r");
	
	        do
	        {
		       stok=getc(belge);
		       printf("%c",stok);
	       }
	
	        while(stok!=EOF);
	        fclose(belge); 	
		    
		}
		else if(i==7)
		{
			printf("hatalý rakam girisi");
		}

        }
	

 
   

void durum()
{
    int istek;	
    printf("\n\n\n\nkitap bilgileriniz dogru mu(1), yanlis mi(0)?");
	scanf("\n\n\n\n %d",&istek);
	
    	switch(istek)
	   {
     	case 0:
	           printf("\n\n\n\nlutfen sayfayi yenileyip bilgileri tekrar giriniz\n\n\n\n");
	           break;
	
	    case 1: 
	           printf("\n\n\n\nBu bilgileri bizimle paylastiginiz icin tesekkurler.\n\n\n\n");
	           break;
	           
	           int k=0;
	       while(1)
	       {
	       	   k++;
	       	   printf("\n\n\n\n*******kitap zevkiniz zeka seviyeniz*********\n\n\n\n*******ayisigi kitapevini tercih ettiginiz icin tesekkurler********");
	       	   
	       	   if(k=4)
				  	break;
				  
	       	  else
				 	continue;
				 
	       }
	       
	  }
 }
	


int main() {
		
	
	    char kitapadi[70],yazaradi[40],sayfasayisi[5],basimtarihi[10],basimevi[25];
	    
	   
	printf("\n\n\n");   
	    
    printf("\n\n\n\n\n\n***********************HOS GELDINIZ************************\n\n\n\n");
    
	printf("\n En Son Okudugunuz Kitap Adi: \n");
	scanf("%[^\n]c",&kitapadi);
	
	
	printf("Yazarinin Adi: \n");
	scanf("%s",yazaradi);
	
	printf("Sayfa Sayisi:\n");
	scanf("%s",sayfasayisi);
	
	printf("Basim Tarihi:\n");
	scanf("%s",basimtarihi);
	
	printf("Basimevi: \n ");
	scanf("%s",basimevi);
	
	printf("\n\n\n");
	
	printf("En Son Okudugunuz Kitap Adi:%s \n-Yazarin Adi:%s\n",kitapadi,yazaradi);
	printf("Sayfa Sayisi:%s \n-Basim Tarihi:%s\n",sayfasayisi,basimtarihi);
	printf("Basimevi:%s\n",basimevi);
	
	printf("\n\n\n");
	
	
	durum();
	
	 tur();
	
	
	return 0;
}
