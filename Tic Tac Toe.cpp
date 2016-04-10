#include<stdio.h>
#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void gotoxy(int x, int y)
{
	HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}
main(void)
{
 int Player,h,v,T1,T2,T3,T4,T5,T6,T7,T8,T9,J1,J2,c1,c2,c3,c4,c5,c6,c7,c8,c9;
 int cont=1;
    system("color 16");                                         
 while(cont==1)                             
      {            
       gotoxy(25,5);cout<<"Let's play tic tac toe";
       getch();
       gotoxy(22,7);cout<<"You'll need a partner to play";
       gotoxy(18,8);cout<<"Do You want to be player 1 or player 2?:";
       gotoxy(65,2);cout<<"J1=X J2=O \n";           
       gotoxy(58,8);cin>>Player;             
       gotoxy(58,8);printf("%i",Player); 
     if(Player==1||Player==2)
       {             
        gotoxy(20,10);cout<<"OK, press Enter to begin";
        getch();
        system("cls");                          
        gotoxy(65,2);cout<<"J1=X J2=O \n";
        for(h=21;h<=47;h++)
            {
  	         gotoxy(h,10);cout<<"-";
  	         gotoxy(h,14);cout<<"-";
  	         Sleep(20);
            }  
		for(v=7;v<=18;v++)
            {
    	     gotoxy(29,v);printf("*");
    	     gotoxy(39,v);printf("*");
    	     Sleep(20);
            }  
        for(h=5;h<=18;h++)
            {
  	         gotoxy(h,3);cout<<"-";
  	         gotoxy(h,5);cout<<"-";
            } 
		for(v=1;v<=7;v++)
            {
    	     gotoxy(9,v);printf("*");
    	     gotoxy(14,v);printf("*");                                                                                                                      
    	     Sleep(20);
            }  
		 gotoxy(7,2);cout<<"1";
		 gotoxy(11,2);cout<<"2";	
		 gotoxy(16,2);cout<<"3";	
		 gotoxy(7,4);cout<<"4";	
		 gotoxy(11,4);cout<<"5";	
		 gotoxy(16,4);cout<<"6";	
		 gotoxy(7,6);cout<<"7";	
		 gotoxy(11,6);cout<<"8";	
		 gotoxy(16,6);cout<<"9";	
		     gotoxy(1,23);printf("Choose where throw using the example");	
			 gotoxy(60,4);printf("J1 Turn 1:"); 
			 gotoxy(70,4);cin>>T1;
		    while(T1>9||T1<1)
		     {
		      gotoxy(58,5);cout<<"choose from 1 to 9  ";
		      gotoxy(70,4);cout<<"             ";
		      gotoxy(70,4);cin>>T1;
		     }
		    if(T1>=1&&T1<=9)
		       {
		         if(T1==1)
		           {
		            gotoxy(25,8);cout<<"X";
		            c1=1;
		           }
		         if(T1==2)
		           {
		            gotoxy(34,8);cout<<"X";
		            c2=1; 
		           }
				 if(T1==3)
		           {
		            gotoxy(43,8);cout<<"X";
		            c3=1;
		           }
				 if(T1==4)
		           {
		            gotoxy(25,12);cout<<"X";
		            c4=1;
		           }
				 if(T1==5)
		           {
		            gotoxy(34,12);cout<<"X";
		            c5=1;
		           }
				 if(T1==6)
		           {
		            gotoxy(43,12);cout<<"X";
		            c6=1;
		           }
				 if(T1==7)
		           {
		            gotoxy(25,16);cout<<"X";
		            c7=1;
		           }    
		         if(T1==8)
		           {
		            gotoxy(34,16);cout<<"X";
		            c8=1;
		           }
		         if(T1==9)
		           {
		            gotoxy(43,16);cout<<"X";
		            c9=1;
		           }
		         gotoxy(50,5);cout<<"                            ";
		         gotoxy(70,4);printf("%i              ",T1); 
		        }
			 gotoxy(60,6);printf("J2 Turn 1:"); 
		     gotoxy(70,6);cin>>T2;
		       	while(T2==T1||T2<1||T2>9)
		             {
		              while(T2<1||T2>9)
		                   {
		       	            gotoxy(58,7);cout<<"choose from 1 to 9  ";
		       	            gotoxy(70,6);cout<<"             ";
		       	            gotoxy(70,6);cin>>T2;
		                   }
		              while(T2==T1)
		                   {
		                    gotoxy(58,7);cout<<"this box isn't empty";
		                    gotoxy(70,6);cout<<"             ";
		                    gotoxy(70,6);cin>>T2;
		                   }
		             }
		        if(T2>=1&&T2<=9)
		           {
		            if(T2==1)
		               {
		                gotoxy(25,8);cout<<"O";
		                c1=0;
		               }
		            if(T2==2)
		               {
		                gotoxy(34,8);cout<<"O";
		                c2=0;
		               }
				    if(T2==3)
		               {
		                gotoxy(43,8);cout<<"O";
		                c3=0;
		               }
				    if(T2==4)
		               {
		                gotoxy(25,12);cout<<"O";
		                c4=0;
		               }
				    if(T2==5)
		               {
		                gotoxy(34,12);cout<<"O";
		                c5=0;
		               }
				    if(T2==6)
		               {
		                gotoxy(43,12);cout<<"O";
		                c6=0;
		               }
				    if(T2==7)
		               {
		                gotoxy(25,16);cout<<"O";
		                c7=0;
		               }    
		            if(T2==8)
		               {
		                gotoxy(34,16);cout<<"O";
		                c8=0;
		               }
		            if(T2==9)
		               {
		                gotoxy(43,16);cout<<"O";
		                c9=0;
		               }
		            gotoxy(50,7);cout<<"                             ";  
					gotoxy(70,6);printf("%i              ",T2); 
		           }
		     gotoxy(60,8);printf("J1 Turn 2:"); 
		     gotoxy(70,8);cin>>T3;
		     while(T3==T1||T3==T2||T3<1||T3>9)
		       {
		       	while(T3<1||T3>9)
		             {
		       	      gotoxy(58,9);cout<<"choose from 1 to 9  ";
		       	      gotoxy(70,8);cout<<"             ";
		       	      gotoxy(70,8);cin>>T3;
		       	     }
		        while(T3==T1||T3==T2)
		             {
		              gotoxy(58,9);cout<<"this box isn't empty";
		              gotoxy(70,8);cout<<"             ";
		              gotoxy(70,8);cin>>T3;
		             }
		        }
		        if(T3>=1&&T3<=9)
		          {
		            if(T3==1)
		               {
		                gotoxy(25,8);cout<<"X";
		                c1=1;
		               }
		            if(T3==2)
		               {
		                gotoxy(34,8);cout<<"X";
		                c2=1;
		               }
				    if(T3==3)
		               {
		                gotoxy(43,8);cout<<"X";
		                c3=1;
		               }
				    if(T3==4)
		               {
		                gotoxy(25,12);cout<<"X";
		                c4=1;
		               }
				    if(T3==5)
		               {
		                gotoxy(34,12);cout<<"X";
		                c5=1;
		               }
				    if(T3==6)
		               {
		                gotoxy(43,12);cout<<"X";
		                c6=1;
		               }
				    if(T3==7)
		               {
		                gotoxy(25,16);cout<<"X";
		                c7=1;
		               }    
		            if(T3==8)
		               {
		                gotoxy(34,16);cout<<"X";
		                c8=1;
		               }
		            if(T3==9)
		               {
		                gotoxy(43,16);cout<<"X";
		                c9=1;
		               }
		            gotoxy(50,9);cout<<"                            ";
		            gotoxy(70,8);printf("%i              ",T3);
			   }
			 gotoxy(60,10);printf("J2 Turn 2:"); 
		     gotoxy(70,10);cin>>T4;
		     while(T4==T1||T4==T2||T4==T3||T4<1||T4>9)
		       {
		       	while(T4==T1||T4==T2||T4==T3)
		             { 
		              gotoxy(58,11);cout<<"this box isn't empty";
		              gotoxy(70,10);cout<<"             ";
		              gotoxy(70,10);cin>>T4;
		             }
		       	while(T4<1||T4>9)
		             { 
		       	      gotoxy(58,11);cout<<"choose from 1 to 9  ";
		       	      gotoxy(70,10);cout<<"             ";
		       	      gotoxy(70,10);cin>>T4;
		             }
		       }
		    if(T4>=1&&T4<=9)
		       {
		            if(T4==1)
		               {
		                gotoxy(25,8);cout<<"O";
		                c1=0;
		               }
		            if(T4==2)
		               {
		                gotoxy(34,8);cout<<"O";
		                c2=0;
		               }
				    if(T4==3)
		               {
		                gotoxy(43,8);cout<<"O";
		                c3=0;
		               }
				    if(T4==4)
		               {
		                gotoxy(25,12);cout<<"O";
		                c4=0;
		               }
				    if(T4==5)
		               {
		                gotoxy(34,12);cout<<"O";
		                c5=0;
		               }
				    if(T4==6)
		               {
		                gotoxy(43,12);cout<<"O";
		                c6=0;
		               }
				    if(T4==7)
		               {
		                gotoxy(25,16);cout<<"O";
		                c7=0;
		               }    
		            if(T4==8)
		               {
		                gotoxy(34,16);cout<<"O";
		                c8=0;
		               }
		            if(T4==9)
		               {
		                gotoxy(43,16);cout<<"O";
		                c9=0;
		               }
		            gotoxy(50,11);cout<<"                            ";   
		            gotoxy(70,10);printf("%i              ",T4);   
			   }
			 gotoxy(60,12);printf("J1 Turn 3:"); 
		     gotoxy(70,12);cin>>T5;
		    while(T5==T1||T5==T2||T5==T3||T5==T4||T5<1||T5>9)
		         {
		           while(T5==T1||T5==T2||T5==T3||T5==T4)
		                {
		                 gotoxy(58,13);cout<<"this box isn't empty";
		                 gotoxy(70,12);cout<<"             ";
		                 gotoxy(70,12);cin>>T5;
		                }
		           while(T5<1||T5>9)
		                {
		       	         gotoxy(58,13);cout<<"choose from 1 to 9  ";
		       	         gotoxy(70,12);cout<<"             ";
		       	         gotoxy(70,12);cin>>T5;
		                }
		         }
		    if(T5>=1&&T5<=9)
		       {
		            if(T5==1)
		               {
		                gotoxy(25,8);cout<<"X";
		                c1=1;
		               }
		            if(T5==2)
		               {
		                gotoxy(34,8);cout<<"X";
		                c2=1;
		               }
				    if(T5==3)
		               {
		                gotoxy(43,8);cout<<"X";
		                c3=1;
		               }
				    if(T5==4)
		               {
		                gotoxy(25,12);cout<<"X";
		                c4=1;
		               }
				    if(T5==5)
		               {
		                gotoxy(34,12);cout<<"X";
		                c5=1;
		               }
				    if(T5==6)
		               {
		                gotoxy(43,12);cout<<"X";
		                c6=1;
		               }
				    if(T5==7)
		               {
		                gotoxy(25,16);cout<<"X";
		                c7=1;
		               }    
		            if(T5==8)
		               {
		                gotoxy(34,16);cout<<"X";
		                c8=1;
		               }
		            if(T5==9)
		               {
		                gotoxy(43,16);cout<<"X";
		                c9=1;
		               }
		            gotoxy(50,13);cout<<"                            ";
		            gotoxy(70,12);printf("%i              ",T5);   
			   }
		if(c1==c2&&c2==c3&&c1==c3||c4==c5&&c5==c6&&c4==c6||c7==c8&&c8==c9&&c7==c9||c1==c4&&c4==c7&&c1==c7||c2==c5&&c5==c8&&c2==c8||c3==c6&&c6==c9&&c3==c9||c1==c5&&c5==c9&&c1==c9||c3==c5&&c5==c7&&c3==c7)
		    {
		     Sleep(1000);
		     system("cls");
		     gotoxy(25,15);cout<<"Congratulations P1, YOU WIN!";	
			}
		else
		    {
		     gotoxy(60,14);printf("J2 Turn 3:"); 
		     gotoxy(70,14);cin>>T6;
		     while(T6==T1||T6==T2||T6==T3||T6==T4||T6==T5||T6<1||T6>9)
		       {
		       	while(T6==T1||T6==T2||T6==T3||T6==T4||T6==T5)
		             { 
		              gotoxy(58,15);cout<<"this box isn't empty";
		              gotoxy(70,14);cout<<"             ";
		              gotoxy(70,14);cin>>T6;
		             }
		       	while(T6<1||T6>9)
		             { 
		       	      gotoxy(58,15);cout<<"choose from 1 to 9  ";
		       	      gotoxy(70,14);cout<<"             ";
		       	      gotoxy(70,14);cin>>T6;
		             }
		       }
		    if(T6>=1&&T6<=9)
		       {
		            if(T6==1)
		               {
		                gotoxy(25,8);cout<<"O";
		                c1=0;
		               }
		            if(T6==2)
		               {
		                gotoxy(34,8);cout<<"O";
		                c2=0;
		               }
				    if(T6==3)
		               {
		                gotoxy(43,8);cout<<"O";
		                c3=0;
		               }
				    if(T6==4)
		               {
		                gotoxy(25,12);cout<<"O";
		                c4=0;
		               }
				    if(T6==5)
		               {
		                gotoxy(34,12);cout<<"O";
		                c5=0;
		               }
				    if(T6==6)
		               {
		                gotoxy(43,12);cout<<"O";
		                c6=0;
		               }
				    if(T6==7)
		               {
		                gotoxy(25,16);cout<<"O";
		                c7=0;
		               }    
		            if(T6==8)
		               {
		                gotoxy(34,16);cout<<"O";
		                c8=0;
		               }
		            if(T6==9)
		               {
		                gotoxy(43,16);cout<<"O";
		                c9=0;
		               }
		            gotoxy(50,15);cout<<"                            ";   
		            gotoxy(70,14);printf("%i              ",T6);   
			   }
		if(c1==c2&&c2==c3&&c1==c3||c4==c5&&c5==c6&&c4==c6||c7==c8&&c8==c9&&c7==c9||c1==c4&&c4==c7&&c1==c7||c2==c5&&c5==c8&&c2==c8||c3==c6&&c6==c9&&c3==c9||c1==c5&&c5==c9&&c1==c9||c3==c5&&c5==c7&&c3==c7)
		    {
		     Sleep(1000);
		     system("cls");
		     gotoxy(25,15);cout<<"Congratulations P2, YOU WIN!";	
			}
		else
		    {
			 gotoxy(60,16);printf("J1 Turn 4:"); 
		     gotoxy(70,16);cin>>T7;
		    while(T7==T1||T7==T2||T7==T3||T7==T4||T7==T5||T7==T6||T7<1||T7>9)
		         {
		           while(T7==T1||T7==T2||T7==T3||T7==T4||T7==T5||T7==T6)
		                {
		                 gotoxy(58,17);cout<<"this box isn't empty";
		                 gotoxy(70,16);cout<<"             ";
		                 gotoxy(70,16);cin>>T7;
		                }
		           while(T7<1||T7>9)
		                {
		       	         gotoxy(58,17);cout<<"choose from 1 to 9  ";
		       	         gotoxy(70,16);cout<<"             ";
		       	         gotoxy(70,16);cin>>T7;
		                }
		         }
		    if(T7>=1&&T7<=9)
		       {
		            if(T7==1)
		               {
		                gotoxy(25,8);cout<<"X";
		                c1=1;
		               }
		            if(T7==2)
		               {
		                gotoxy(34,8);cout<<"X";
		                c2=1;
		               }
				    if(T7==3)
		               {
		                gotoxy(43,8);cout<<"X";
		                c3=1;
		               }
				    if(T7==4)
		               {
		                gotoxy(25,12);cout<<"X";
		                c4=1;
		               }
				    if(T7==5)
		               {
		                gotoxy(34,12);cout<<"X";
		                c5=1;
		               }
				    if(T7==6)
		               {
		                gotoxy(43,12);cout<<"X";
		                c6=1;
		               }
				    if(T7==7)
		               {
		                gotoxy(25,16);cout<<"X";
		                c7=1;
		               }    
		            if(T7==8)
		               {
		                gotoxy(34,16);cout<<"X";
		                c8=1;
		               }
		            if(T7==9)
		               {
		                gotoxy(43,16);cout<<"X";
		                c9=1;
		               }
		            gotoxy(50,17);cout<<"                            ";
		            gotoxy(70,16);printf("%i              ",T7);       	
		       }  
		if(c1==c2&&c2==c3&&c1==c3||c4==c5&&c5==c6&&c4==c6||c7==c8&&c8==c9&&c7==c9||c1==c4&&c4==c7&&c1==c7||c2==c5&&c5==c8&&c2==c8||c3==c6&&c6==c9&&c3==c9||c1==c5&&c5==c9&&c1==c9||c3==c5&&c5==c7&&c3==c7)
		    {
		     Sleep(1000);
		     system("cls");
		     gotoxy(25,15);cout<<"Congratulations P1, YOU WIN!";	
			}
		else 
		    {
			 gotoxy(60,18);printf("J2 Turn 4:"); 
		     gotoxy(70,18);cin>>T8;
		     while(T8==T1||T8==T2||T8==T3||T8==T4||T8==T5||T8==T6||T8==T7||T8<1||T8>9)
		       {
		       	while(T8==T1||T8==T2||T8==T3||T8==T4||T8==T5||T8==T6||T8==T7)
		             { 
		              gotoxy(58,19);cout<<"this box isn't empty";
		              gotoxy(70,18);cout<<"             ";
		              gotoxy(70,18);cin>>T8;
		             }
		       	while(T8<1||T8>9)
		             { 
		       	      gotoxy(58,19);cout<<"choose from 1 to 9  ";
		       	      gotoxy(70,18);cout<<"             ";
		       	      gotoxy(70,18);cin>>T8;
		             }
		       }
		    if(T8>=1&&T8<=9)
		       {
		            if(T8==1)
		               {
		                gotoxy(25,8);cout<<"O";
		                c1=0;
		               }
		            if(T8==2)
		               {
		                gotoxy(34,8);cout<<"O";
		                c2=0;
		               }
				    if(T8==3)
		               {
		                gotoxy(43,8);cout<<"O";
		                c3=0;
		               }
				    if(T8==4)
		               {
		                gotoxy(25,12);cout<<"O";
		                c4=0;
		               }
				    if(T8==5)
		               {
		                gotoxy(34,12);cout<<"O";
		                c5=0;
		               }
				    if(T8==6)
		               {
		                gotoxy(43,12);cout<<"O";
		                c6=0;
		               }
				    if(T8==7)
		               {
		                gotoxy(25,16);cout<<"O";
		                c7=0;
		               }    
		            if(T8==8)
		               {
		                gotoxy(34,16);cout<<"O";
		                c8=0;
		               }
		            if(T8==9)
		               {
		                gotoxy(43,16);cout<<"O";
		                c9=0;
		               }
		            gotoxy(50,19);cout<<"                            ";   
		            gotoxy(70,18);printf("%i              ",T8);   
			   } 
	    if(c1==c2&&c2==c3&&c1==c3||c4==c5&&c5==c6&&c4==c6||c7==c8&&c8==c9&&c7==c9||c1==c4&&c4==c7&&c1==c7||c2==c5&&c5==c8&&c2==c8||c3==c6&&c6==c9&&c3==c9||c1==c5&&c5==c9&&c1==c9||c3==c5&&c5==c7&&c3==c7)
		    {
		     Sleep(1000);
		     system("cls");
		     gotoxy(25,15);cout<<"Congratulations P2, YOU WIN!";	
			}  
		else
		    {
			 gotoxy(60,20);printf("J1 Turn 5:"); 
		     gotoxy(70,20);cin>>T9;
		    while(T9==T1||T9==T2||T9==T3||T9==T4||T9==T5||T9==T6||T9==T7||T9==T8||T9<1||T9>9)
		         {
		           while(T9==T1||T9==T2||T9==T3||T9==T4||T9==T5||T9==T6||T9==T7||T9==T8)
		                {
		                 gotoxy(58,21);cout<<"this box isn't empty";
		                 gotoxy(70,20);cout<<"             ";
		                 gotoxy(70,20);cin>>T9;
		                }
		           while(T9<1||T9>9)
		                {
		       	         gotoxy(58,21);cout<<"choose from 1 to 9  ";
		       	         gotoxy(70,20);cout<<"             ";
		       	         gotoxy(70,20);cin>>T9;
		                }
		         }
		    if(T9>=1&&T9<=9)
		       {
		            if(T9==1)
		               {
		                gotoxy(25,8);cout<<"X";
		                c1=1;
		               }
		            if(T9==2)
		               {
		                gotoxy(34,8);cout<<"X";
		                c2=1;
		               }
				    if(T9==3)
		               {
		                gotoxy(43,8);cout<<"X";
		                c3=1;
		               }
				    if(T9==4)
		               {
		                gotoxy(25,12);cout<<"X";
		                c4=1;
		               }
				    if(T9==5)
		               {
		                gotoxy(34,12);cout<<"X";
		                c5=1;
		               }
				    if(T9==6)
		               {
		                gotoxy(43,12);cout<<"X";
		                c6=1;
		               }
				    if(T9==7)
		               {
		                gotoxy(25,16);cout<<"X";
		                c7=1;
		               }    
		            if(T9==8)
		               {
		                gotoxy(34,16);cout<<"X";
		                c8=1;
		               }
		            if(T9==9)
		               {
		                gotoxy(43,16);cout<<"X";
		                c9=1;
		               }
		            gotoxy(50,21);cout<<"                            ";
		            gotoxy(70,20);printf("%i              ",T9);       	
		       }
		if(c1==c2&&c2==c3&&c1==c3||c4==c5&&c5==c6&&c4==c6||c7==c8&&c8==c9&&c7==c9||c1==c4&&c4==c7&&c1==c7||c2==c5&&c5==c8&&c2==c8||c3==c6&&c6==c9&&c3==c9||c1==c5&&c5==c9&&c1==c9||c3==c5&&c5==c7&&c3==c7)
		   {
		   	 Sleep(1000);
		     system("cls");
		     gotoxy(25,15);cout<<"Congratulations P1, YOU WIN!";	
		   }
		else{
			Sleep(1000);
			 system("cls");
	         gotoxy(25,15);cout<<"It's a tie'";
		    }
	       }
	       }
	       }
	       }
	    c1=10;
        c2=11;
        c3=12;
        c4=13;
        c5=14;
        c6=15;
        c7=16;
        c8=17;
        c9=18;
       }
        else
        {
         system("cls");
         gotoxy(25,15);cout<<"There are only 2 players, choose 1 o 2";
	    }
	    getch();
	    system("cls");
        gotoxy(20,16);printf("Do You want to play again? 1=Yes / 0=No ");
	    scanf("%d", &cont);
	    system("cls");
	  }
}
