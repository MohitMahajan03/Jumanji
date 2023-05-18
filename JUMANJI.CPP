// TOTALLY MESSED UP//
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
class data
{
	protected:

		 // fill in the blanks
		 char s1[25], q1[25], q2[25], s2[25], q3[25], s3[25],
		      s4[25], q4[25], s5[25], q5[25], s6[25], q6[25],
		      s7[25], q7[25], s8[25], q8[25], s9[25], q9[25],
		      s10[25], q10[25], s11[25], q11[25], s12[25], q12[25],
		      s13[25], q13[25], s14[25], q14[25], s15[25], q15[25],
		      s16[25], q16[25], s17[25], q17[25], s18[25], q18[25],
		      s19[25], q19[25], s20[25], q20[25], s21[25], q21[25],
		      s22[25], q22[25], s23[25], q23[25], s24[25], q24[25],
		      s25[25], q25[25], s26[25], q26[25], s27[25], q27[25],
		      s28[25], q28[25], s29[25], q29[25], s30[25], q30[25];

		      // guess the brand
		 char a1[25], w1[25], w2[25], a2[25], w3[25], a3[25],
		      a4[25], w4[25], a5[25], w5[25], a6[25], w6[25],
		      a7[25], w7[25], a8[25], w8[25], a9[25], w9[25],
		      a10[25], w10[25], a11[25], w11[25], a12[25], w12[25],
		      a13[25], w13[25], a14[25], w14[25], a15[25], w15[25],
		      a16[25], w16[25], a18[25], w18[25], a19[25], w19[25],
		      a20[25], w20[25], a21[25], w21[25], a22[25], w22[25],
		      a23[25], w23[25], a24[25], w24[25], a25[25], w25[25],
		      a26[25], w26[25], a27[25], w27[25], a28[25], w28[25],
		      a29[25], w29[25], a30[25], w30[25], a17[25], w17[25];

		      // blood relations
		 char g1[25], r1[25], g2[25], r2[25], g3[25], r3[25],
		      g4[25], r4[25], g5[25], r5[25], g6[25], r6[25],
		      g7[25], r7[25], g8[25], r8[25], g9[25], r9[25],
		      g10[25], r10[25];

		      // number oddman
		      int  n1, o1, n2, o2, n3, o3,
			   n4, o4, n5, o5, n6, o6,
			   n7, o7, n8, o8, n9, o9,
			   n10, o10;
		      // brain teasers
		      int  b1, t1, b2, t2, b3, t3,
			  b4, t4, b5, t5, b6, t6,
			  b7, t7, b8, t8, b9, t9,
			  b10, t10;



       public:
		int life;
		// fill in the blanks
		 void fill1();
		 void fill2();
		 void fill3();
		 void fill4();
		 void fill5();
		 void fill6();
		 void fill7();
		 void fill8();
		 void fill9();
		 void fill10();

		 // guess the brand
		 void brand1();
		 void brand2();
		 void brand3();
		 void brand4();
		 void brand5();
		 void brand6();
		 void brand7();
		 void brand8();
		 void brand9();
		 void brand10();

		 //blood relations
		 void rel1();
		 void rel2();
		 void rel3();
		 void rel4();
		 void rel5();
		 void rel6();
		 void rel7();
		 void rel8();
		 void rel9();
		 void rel10();

		 // number oddman
		 void odd1();
		 void odd2();
		 void odd3();
		 void odd4();
		 void odd5();
		 void odd6();
		 void odd7();
		 void odd8();
		 void odd9();
		 void odd10();

		 //brain teasers
		 void bt1();
		 void bt2();
		 void bt3();
		 void bt4();
		 void bt5();
		 void bt6();
		 void bt7();
		 void bt8();
		 void bt9();
		 void bt10();



};


//fill in the blanks
//(
void data::fill1()
{

//1

	char q1[25]="charles babbage",  q2[25]="nuclear force", q3[25]="water";
	while(life<=3)
	{

		cout<<"_____ is known as the father of computers."<<endl;
		gets(s1);

		if(strcmp(s1,q1)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	}


	while(life<=1)
	{

		cout<<"_____ is the strongest force in the universe"<<endl;
		gets(s2);
		if(strcmp(q2,s2)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	}
	while(life<=1)
	{
		cout<<"_____ compound can be found in all 3 physical states naturally on Earth"<<endl;
		gets(s3);
		if(strcmp(s3,q3)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
			}
		}
}

void data::fill2()
{
//2
	 char q4[25]="neil armstrong", q5[25]="octopus", q6[25]="homosapiens";
	 while(life>=1)
	 {
		cout<<"_____ was the first person on the moon"<<endl;
		gets(s4);
		if(strcmp(q4,s4)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(strcmp(s5,q5)!=0)
	 {
		cout<<"_____ has 3 hearts and 8 tentacles"<<endl;
		gets(s5);
		if(strcmp(q5,s5)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
	 while(strcmp(s6,q6)!=0)
	 {
		cout<<"_____ is the name of the species of animals that can run the longest distances"<<endl;
		gets(s6);
		if(strcmp(q6,s6)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::fill3()
{
	char q7[25]="apple", q8[25]="antarctica", q9[25]="sputnik";
//3
	 while(strcmp(s7,q7)!=0)
	 {
		cout<<"_____ fell on Isaac Newton's head."<<endl;
		gets(s7);
		if(strcmp(q7,s7)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(strcmp(s8,q8)!=0)
	 {
		cout<<"_____ is the coldest continent in the world"<<endl;
		gets(s8);
		if(strcmp(q8,s8)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(strcmp(s9,q9)!=0)
	 {
		cout<<"_____ was the first man made satellite launched into space."<<endl;
		gets(s9);
		if(strcmp(q9,s9)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::fill4()
{
//4
	 char q10[25]="hibernation", q11[25]="japan", q12[25]="tamil";
	 while(strcmp(s10,q10)!=0)
	 {
		cout<<"_____ is the process of sleeping through out the winter."<<endl;
		gets(s10);
		if(strcmp(q10,s10)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(strcmp(s11,q11)!=0)
	 {
		cout<<"_____ is known for SUSHI."<<endl;
		gets(s11);
		if(strcmp(q11,s11)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(strcmp(s12,q12)!=0)
	 {
		cout<<"_____ is the national language of Srilanka."<<endl;
		gets(s12);
		if(strcmp(q12,s12)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::fill5()
{
//5
	 char q13[25]="spacex", q14[25]="nile", q15[25]="sahara";
	 while(strcmp(s13,q13)!=0)
	 {
		cout<<"_____ (company) made the first relauchable rockets."<<endl;
		gets(s13);
		if(strcmp(q13,s13)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(strcmp(s14,q14)!=0)
	 {
		cout<<"_____ longest river in the world."<<endl;
		gets(s14);
		if(strcmp(q14,s14)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }


	 while(strcmp(s15,q15)!=0)
	 {
		cout<<"_____ is the biggest desert in the world."<<endl;
		gets(s15);
		if(strcmp(q15,s15)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

}

void data::fill6()
{
//6
	 char q16[25]="tornado", q17[25]="neeraj chopra", q18[25]="earthworms";
	 while(strcmp(s16,q16)!=0)
	 {
		cout<<"_____ is the name given to strong winds swirling in the shape of a funnel."<<endl;
		gets(s16);
		if(strcmp(q16,s16)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(strcmp(s17,q17)!=0)
	 {
		cout<<"_____ won the first olympic gold medal for India in athletics."<<endl;
		gets(s17);
		if(strcmp(q17,s17)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(strcmp(s18,q18)!=0)
	 {
		cout<<"_____ are known as the farmers best friends."<<endl;
		gets(s18);
		if(strcmp(q18,s18)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::fill7()
{
//7
	 char q19[25]="lion", q20[25]="lava", q21[25]="glass";
	 while(strcmp(s19,q19)!=0)
	 {
		cout<<"_____ is the king of the jungle."<<endl;
		gets(s19);
		if(strcmp(q19,s19)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(strcmp(s20,q20)!=0)
	 {
		cout<<"_____ erupts from volcanoes."<<endl;
		gets(s20);
		if(strcmp(q20,s20)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(strcmp(s21,q21)!=0)
	 {
		cout<<"_____ is made from sand."<<endl;
		gets(s21);
		if(strcmp(q21,s21)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::fill8()
{
//8
	char q22[25]="wheel", q23[25]="ice", q24[25]="moon";
	 while(strcmp(s22,q22)!=0)
	 {
		cout<<"invention of the _____ revolutionised transportation."<<endl;
		gets(s22);
		if(strcmp(q22,s22)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(strcmp(s23,q23)!=0)
	 {
		cout<<"Mammathos lived in the _____ age."<<endl;
		gets(s23);
		if(strcmp(q23,s23)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(strcmp(s24,q24)!=0)
	 {
		cout<<"_____ is Earth's natural satellite."<<endl;
		gets(s24);
		if(strcmp(q24,s24)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::fill9()
{
//9
	 char q25[25]="ic", q26[25]="mariana trench", q27[25]="mount everest";
	 while(strcmp(s25,q25)!=0)
	 {
		cout<<"the invention of _____ reduced the size of computers."<<endl;
		gets(s25);
		if(strcmp(q25,s25)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(strcmp(s26,q26)!=0)
	 {
		cout<<"_____ id the deepest point on Earth."<<endl;
		gets(s26);
		if(strcmp(q26,s26)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }


	 while(strcmp(s27,q27)!=0)
	 {
		cout<<"_____ is the tallest mountain on Earth."<<endl;
		gets(s27);
		if(strcmp(q27,s27)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::fill10()
{
//10
	 char q28[25]="thomas alva edison", q29[25]="nikola tesla", q30[25]="albert einstein";
	 while(strcmp(s28,q28)!=0)
	 {
		cout<<"_____ invented the light bulb."<<endl;
		gets(s28);
		if(strcmp(q28,s28)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(strcmp(s29,q29)!=0)
	 {
		cout<<"_____ invented the induction motor."<<endl;
		gets(s29);
		if(strcmp(q29,s29)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(strcmp(s30,q30)!=0)
	 {
		cout<<"_____ proposed the theory of relativity."<<endl;
		gets(s30);
		if(strcmp(q30,s30)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}
//)



// guess the brand
//(

void data::brand1()
{
//1

	 char w1[25]="disney land",  w2[25]="nike", w3[25]="samsung";
	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"The happiest place on Earth"<<endl;
		gets(a1);

		if(strcmp(a1,w1)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Just do it"<<endl;
		gets(a2);
		if(strcmp(w2,a2)==0)
		{
		   cout<<"excellent"<<endl;
		   break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }


	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Do what you can't"<<endl;
		gets(a3);
		if(strcmp(a3,w3)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}
void data::brand2()
{
//2
	 char w4[25]="bmw", w5[25]="uber", w6[25]="gatorade";
	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"The ultimate driving machine"<<endl;
		gets(a4);
		if(strcmp(w4,a4)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Move the way you want"<<endl;
		gets(a5);
		if(strcmp(w5,a5)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Is it in you?"<<endl;
		gets(a6);
		if(strcmp(w6,a6)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}
void data::brand3()
{
//3
	 char w7[25]="kfc", w8[25]="lays", w9[25]="taco bell";
	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Finger lickin' good."<<endl;
		gets(a7);
		if(strcmp(w7,a7)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Betcha can't eat just one"<<endl;
		gets(a8);
		if(strcmp(w8,a8)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Think outside the bun."<<endl;
		gets(a9);
		if(strcmp(w9,a9)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}
void data::brand4()
{
//4
	 char w10[25]="tag heuer", w11[25]="toyota", w12[25]="burger king";
	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Don't crack under pressure."<<endl;
		gets(a10);
		if(strcmp(w10,a10)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Let's go places."<<endl;
		gets(a11);
		if(strcmp(a11,w11)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Have it your way."<<endl;
		gets(a12);
		if(strcmp(w12,a12)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}
void data::brand5()
{
//5
	 char w13[25]="mcdonald's", w14[25]="pampers", w15[25]="philips";
	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"I'm lovin' it."<<endl;
		gets(a13);
		if(strcmp(w13,a13)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"love the change."<<endl;
		gets(a14);
		if(strcmp(w14,a14)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }


	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Innovation and you."<<endl;
		gets(a15);
		if(strcmp(w15,a15)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::brand6()
{

//6
	 char w16[25]="action", w17[25]="thumbs up" ,w18[25]="amul";
	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"action ka school time."<<endl;
		gets(a16);
		if(strcmp(w16,a16)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Taste the thunder."<<endl;
		gets(a17);
		if(strcmp(w17,a17)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"The taste of India."<<endl;
		gets(a18);
		if(strcmp(w18,a18)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}
void data::brand7()
{
//7
	 char w19[25]="biocon", w20[25]="boost", w21[25]="cadbury";
	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"The difference lies in Our DNA."<<endl;
		gets(a19);
		if(strcmp(w19,a19)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"The secret of our energy."<<endl;
		gets(a20);
		if(strcmp(w20,a20)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Kuchh meetha ho jaaye."<<endl;
		gets(a21);
		if(strcmp(w21,a21)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}
void data::brand8()
{
//8
	 char w22[25]="cinthol", w23[25]="classmate", w24[25]="complan";
	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Alive is Awesome."<<endl;
		gets(a22);
		if(strcmp(w22,a22)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Because you are One of a kind."<<endl;
		gets(a23);
		if(strcmp(w23,a23)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"I am a Complan boy."<<endl;
		gets(a24);
		if(strcmp(w24,a24)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}
void data::brand9()
{
//9
	 char w25[25]="dettol", w26[25]="garnier", w27[25]="fevicol";
	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Be 100% sure."<<endl;
		gets(a25);
		if(strcmp(w25,a25)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Take care."<<endl;
		gets(a26);
		if(strcmp(w26,a26)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }


	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"The ultimate adhesive."<<endl;
		gets(a27);
		if(strcmp(w27,a27)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}
void data::brand10()
{
//10
	 char w28[25]="gillete", w29[25]="kingfisher", w30[25]="nestle";
	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"The best A man can get."<<endl;
		gets(a28);
		if(strcmp(w28,a28)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"The king of good times."<<endl;
		gets(a29);
		if(strcmp(w29,a29)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }

	 while(life>=1)
	 {
		cout<<"Guess the brand"<<endl;
		cout<<"Good food, Good life."<<endl;
		gets(a30);
		if(strcmp(w30,a30)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}
// blood relations (


void data::rel1()
{

	char r1[25]="cousin";
	     while(life>=1)
	 {
		cout<<"Guess the relation"<<endl;
		cout<<"Bharat's mother says to Bharat, 'My mother has a son whose son is Amar.' How is Bharat related to Amar?"<<endl;
		gets(g1);

		if(strcmp(g1,r1)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::rel2()
{
	 char r2[25]="sister";
	 while(life>=1)
	 {
		cout<<"Guess the relation"<<endl;
		cout<<"Pointing to a man in a photograph, a woman said, 'His brother's father is the   only son of my grandfather.' How is the woman related to the man in the         photograph?"<<endl;
		gets(g2);
		if(strcmp(r2,g2)==0)
		{
		   cout<<"excellent"<<endl;
		   break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::rel3()
{
	 char r3[25]="granddaughter";
	 while(life>=1)
	 {
		cout<<"Guess the relation"<<endl;
		cout<<"A is B's sister. C is B's mother. D is C's father. E is D's mother. Then, how is A related to D"<<endl;
		gets(g3);
		if(strcmp(g3,r3)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::rel4()
{
//2
	 char r4[25]="aunt";
	 while(life>=1)
	 {
		cout<<"Guess the relation"<<endl;
		cout<<"Pointing to a person, a man said to a woman, 'His mother is the other daughter  of your father.' How is the woman related to the person?"<<endl;
		gets(g4);
		if(strcmp(g4,r4)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::rel5()
{
	 char r5[25]="brother";
	 while(life>=1)
	 {
		cout<<"Guess the relation"<<endl;
		cout<<"A girl introduced a boy as the son of the daughter of the father of her uncle   the boy is the girl's. "<<endl;
		gets(g5);
		if(strcmp(g5,r5)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::rel6()
{
	 char r6[25]="cousin";
	 while(life>=1)
	 {
		cout<<"Guess the relation"<<endl;
		cout<<"A woman introduces a man as the son of the brother of her mother. How is the man related to the woman?"<<endl;
		gets(g6);
		if(strcmp(g6,r6)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::rel7()
{
//3
	 char r7[25]="sister";
	 while(life>=1)
	 {
		cout<<"Guess the relation"<<endl;
		cout<<"A man said to a lady 'Your mother's husband's sister is my aunt!' how is the   lady related to the man?"<<endl;
		gets(g7);
		if(strcmp(g7,r7)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::rel8()
{
	 char r8[25]="father";
	 while(life>=1)
	 {
		cout<<"Guess the relation"<<endl;
		cout<<"Pointing to an old man Kailash said, 'His son is my son's uncle.' How is the old man related to Kailash?"<<endl;
		gets(g8);
		if(strcmp(g8,r8)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::rel9()
{
	 char r9[25]="father";
	 while(life>=1)
	 {
		cout<<"Guess the relation"<<endl;
		cout<<"Rahul told Anand, 'Yesterday I met the only brother of the daughter of my       grandmother.' whom did Rahul meet?"<<endl;
		gets(g9);
		if(strcmp(g9,r9)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::rel10()
{

//4
	 char r10[25]="father";
	 while(life>=1)
	 {
		cout<<"Guess the relation"<<endl;
		cout<<"Rahul's mother is the only daughter of Monika's father. How is Monika's husband related to Rahul?"<<endl;
		gets(g10);
		if(strcmp(g10,r10)==0)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}    //)

// number oddman (

void data::odd1()
{
	int o1=63;
	     while(life>=1)
	 {
		cout<<"Guess the odd number"<<endl;
		cout<<"1 4 9 16 25 36 63 81"<<endl;
		cin>>n1;

		if(n1==o1)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::odd2()
{
	o2=92;
	 while(life>=1)
	 {
		cout<<"Guess the odd number"<<endl;
		cout<<"3 6 9 12 92 114 222"<<endl;
		cin>>n2;
		if(n2==o2)
		{
		   cout<<"excellent"<<endl;
		   break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::odd3()
{
	o3=9;
	 while(life>=1)
	 {
		cout<<"Guess the odd number"<<endl;
		cout<<"2 3 5 7 9 11 13"<<endl;
		cin>>n3;
		if(n3==o3)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::odd4()
{
	o4=4;
	 while(life>=1)
	 {
		cout<<"Guess the odd number"<<endl;
		cout<<"(1) 6,37 (2) 7,50 (3) 8,65 (4) 10,99"<<endl;
		cout<<"Enter the right option"<<endl;
		cin>>n4;
		if(n4==o4)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::odd5()
{
	o5=176;
	 while(life>=1)
	 {
		cout<<"Guess the odd number"<<endl;
		cout<<"49 67 139 176"<<endl;
		cout<<"HINT: Check the sum of the digits"<<endl;
		cin>>n5;
		if(n5==o5)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}
void data::odd6()
{
	o6=239;
	 while(life>=1)
	 {
		cout<<"Guess the odd number"<<endl;
		cout<<"166 239 326 433"<<endl;
		cout<<"HINT: Check the product of the digits"<<endl;
		cin>>n6;
		if(n6==o6)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::odd7()
{
	o7=18;
	 while(life>=1)
	 {
		cout<<"Guess the odd number"<<endl;
		cout<<"6 10 14 18"<<endl;
		cout<<"HINT: divide the numbers by 2"<<endl;
		cin>>n7;
		if(n7==o7)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::odd8()
{
	o8=99;
	 while(life>=1)
	 {
		cout<<"Guess the odd number"<<endl;
		cout<<"99 82 65 37"<<endl;
		cout<<"HINT: check the squares..."<<endl;
		cin>>n8;
		if(n8==o8)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::odd9()
{
	o9=527;
	 while(life>=1)
	 {
		cout<<"Guess the odd number"<<endl;
		cout<<"199 248 326 527"<<endl;
		cout<<"HINT: Check product of the first 2 digits"<<endl;
		cin>>n9;
		if(n9==o9)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::odd10()
{
	o10=427;
	 while(life>=1)
	 {
		cout<<"Guess the odd number"<<endl;
		cout<<"385 572 671 427"<<endl;
		cout<<"HINT: check sum of 3rd and 1st digit withrespect to 2nd digit"<<endl;
		cin>>n10;
		if(n10==o10)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}    //)

// Brain teasers (

void data::bt1()
{
	t1=5;
	     while(life>=1)
	 {
		cout<<"Certain number of socks of 4 different colours are kept in a bo. Ther is no light to identify their colours. How many socks one should take out, to be sure to get at least one pair of same colour"<<endl;
		cin>>b1;

		if(b1==t1)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::bt2()
{
	t2=15;
	 while(life>=1)
	 {
		cout<<"In a tennis tournament each of six players play with every other player exactly once. How many matches will be played during the tournament?"<<endl;
		cin>>b2;
		if(b2==t2)
		{
		   cout<<"excellent"<<endl;
		   break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::bt3()
{

	t3=14;
	 while(life>=1)
	 {
		cout<<"A monkey is trying to reach the top of a pole which is 30 meters high from the ground. After climbing every 4 meters it slips down 2 meters. How many attempts will it take to reach the top of the pole? "<<endl;
		cin>>b3;
		if(b3==t3)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::bt4()
{
//2
	t4=7;
	 while(life>=1)
	 {
		cout<<"Latha has the same number of sisters as she has brothers; but her brother Shyam has twice as many sisters as he has brothers. How many children are there in the family?"<<endl;
		cin>>b4;
		if(b4==t4)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::bt5()
{
	t5=40;
	 while(life>=1)
	 {
		cout<<"In a game of musical chairs, 16 girls are participating. Every round of music will have 2 minutes duration. An interval of 5 minutes is given after every 5 rounds of music. How much time will it take to complete the game?"<<endl;
		cin>>b5;
		if(b5==t5)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::bt6()
{
	t6=9;
	 while(life>=1)
	 {
		cout<<"A bird shooter was asked how many birds he had in his bag. He replied that there were all sparrows but 6, all pigeons but 6 and all ducks but 6. How many birds were there in all?"<<endl;
		cin>>b6;
		if(b6==t6)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::bt7()
{
//3
	t7=32;
	 while(life>=1)
	 {
		cout<<"A monkey ate 100 idlis in 5 days, each day eating 6 more than the previous day. How many did it eat on the last day?"<<endl;
		cin>>b7;
		if(b7==t7)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::bt8()
{
	t8=7;
	 while(life>=1)
	 {
		cout<<"10 red balls and 6 black balls of identical size are kept in a box. There is no light to identify their colours. How many balls one should take out, to be sure to get atleast 1 red ball?"<<endl;
		cin>>b8;
		if(b8==t8)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::bt9()
{
	t9=28;
	 while(life>=1)
	 {
		cout<<"Ashok earns Rs 600 on one day and spends Rs 500 on the nex day. He again earns Rs 600 on the third day and spends Rs 5000 on the fourth day and so on. On which day will he have Rs 2000 with him before spending?"<<endl;
		cin>>b9;
		if(b9==t9)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}

void data::bt10()
{

//4
	t10=9;
	 while(life>=1)
	 {
		cout<<"A farmer has 17 sheep and all but 9 die. How many are left?"<<endl;
		cin>>b10;
		if(b10==t10)
		{
			cout<<"excellent"<<endl;
			break;
		}
		else
		{
			cout<<"try again"<<endl;
			life=life--;
		}
	 }
}//)

class game_board: public data
{
	private:
		 int a[8][10], i, j, x, y, z, w, d1, d2;
	public:  void board();
		 void play();
};
	void game_board::board()
	{
		for(i=5;i>-1;i--)
		{
			cout<<" "<<"|"<<" ";
			for(j=9;j>-1;j--)
			{
				a[5][0]=500;
				a[i][j]=a[5][0]+((10*i)+j);
				cout<<a[i][j]<<" "<<"|";
			}
			cout<<endl;
		}
	}
	void game_board::play()
	{
		data d;
		int life=3;
		d.life = life;
		x=500, y=500;
		while(x<549 || y<549)
		{

			cout<<endl<<"LIVES LEFT: "<<life<<endl;
			if(x<549)
			{
				for(i=5;i>-1;i--)
				{
					cout<<" "<<"|"<<" ";
					for(j=9;j>-1;j--)
					{
						a[5][0]=500;
						a[i][j]=a[5][0]+((10*i)+j);
						if(a[i][j]==x)
						{
							a[i][j]=101;
						}
						if(a[i][j]==y)
						{
							a[i][j]=102;
						}
						cout<<a[i][j]<<" "<<"|";
					}
					cout<<endl;
				}

				cout<<"Player 1 press Enter to roll the dice"<<endl;
				getch();
				randomize();
				d1=random(7);
				cout<<endl<<d1<<endl;
				getch();
				x=x+d1;
				cout<<"Pawn will be moved to the position "<<x<<endl;

				getch();
				clrscr();
				for(i=5;i>-1;i--)
				{
					cout<<" "<<"|"<<" ";
					for(j=9;j>-1;j--)
					{
						a[5][0]=500;
						a[i][j]=a[5][0]+((10*i)+j);
						if(a[i][j]==x)
						{
							a[i][j]=101;
						}
						if(a[i][j]==y)
						{
							a[i][j]=102;
						}
						cout<<a[i][j]<<" "<<"|";
					}
					cout<<endl;
				}



				getch();
				clrscr();
				switch(x)
				{
					case 500:d.fill1();     break;     case 510:d.odd10();     break;     case 520:d.brand6();     break;     case 530:d.bt8();      break;     case 540:d.rel9();     break;     //case 550:     case 560:     case 570:    case 580:    case 590:
					case 501:d.rel1();      break;     case 511:d.fill2();     break;     case 521:d.bt5();        break;     case 531:d.brand7();   break;     case 541:d.bt9();      break;     //case 551:     case 561:     case 571:    case 581:    case 591:
					case 502:d.odd1();      break;     case 512:d.rel2();      break;     case 522:d.fill3();      break;     case 532:d.bt6();      break;     case 542:d.brand8();   break;     //case 552:     case 562:     case 572:    case 582:    case 592:
					case 503:d.brand1();    break;     case 513:d.odd2();      break;     case 523:d.rel3();       break;     case 533:d.fill4();    break;     case 543:d.bt7();      break;     //case 553:     case 563:     case 573:    case 583:    case 593:
					case 504:d.fill5();     break;     case 514:d.brand2();    break;     case 524:d.odd3();       break;     case 534:d.odd4();     break;     case 544:d.bt10();     break;     //case 554:     case 564:     case 574:    case 584:    case 594:
					case 505:d.bt1();       break;     case 515:d.fill6();     break;     case 525:d.brand3();     break;     case 535:d.rel4();     break;     case 545:d.odd5();     break;     //case 555:     case 565:     case 575:    case 585:    case 595:
					case 506:d.odd6();      break;     case 516:d.bt2();       break;     case 526:d.fill7();      break;     case 536:d.brand4();   break;     case 546:d.rel5();     break;     //case 556:     case 566:     case 576:    case 586:    case 596:
					case 507:d.rel6();      break;     case 517:d.odd7();      break;     case 527:d.bt3();        break;     case 537:d.fill8();    break;     case 547:d.brand5();   break;     //case 557:     case 567:     case 577:    case 587:    case 597:
					case 508:d.brand9();    break;     case 518:d.rel7();      break;     case 528:d.odd8();       break;     case 538:d.bt4();      break;     case 548:d.fill9();    break;     //case 558:     case 568:     case 578:    case 588:    case 598:
					case 509:d.fill10();    break;     case 519:d.brand10();   break;     case 529:d.rel8();       break;     case 539:d.odd9();     break;     case 549:d.rel10();    break;     //case 559:     case 569:     case 579:    case 589:    case 599:

				}
			}

			for(i=5;i>-1;i--)
			{
				cout<<" "<<"|"<<" ";
				for(j=9;j>-1;j--)
				{
					a[5][0]=500;
					a[i][j]=a[5][0]+((10*i)+j);
					if(a[i][j]==x)
					{
						a[i][j]=101;
					}
					if(a[i][j]==y)
					{
						a[i][j]=102;
					}
					cout<<a[i][j]<<" "<<"|";
				}
				cout<<endl;
			}

			cout<<"LIVES LEFT: "<<life<<endl;
			if(y<549)
			{
				cout<<"Player 2 press Enter to roll the dice"<<endl;
				getch();
				randomize();
				d2=random(7);
				cout<<endl<<d2<<endl;
				getch();
				y=y+d2;
				cout<<"Pawn will be moved to the position "<<y<<endl;
				getch();
				clrscr();
				for(i=5;i>-1;i--)
				{
					cout<<" "<<"|"<<" ";
					for(j=9;j>-1;j--)
					{
						a[5][0]=500;
						a[i][j]=a[5][0]+((10*i)+j);
						if(a[i][j]==x)
						{
							a[i][j]=101;
						}
						if(a[i][j]==y)
						{
							a[i][j]=102;
						}
						cout<<a[i][j]<<" "<<"|";
					}
					cout<<endl;
				}

				getch();
				clrscr();
				switch(y)
				{
					case 500:d.fill1();     break;     case 510:d.odd10();     break;     case 520:d.brand6();     break;     case 530:d.bt8();      break;     case 540:d.rel9();     break;     //case 550:     case 560:     case 570:    case 580:    case 590:
					case 501:d.rel1();      break;     case 511:d.fill2();     break;     case 521:d.bt5();        break;     case 531:d.brand7();   break;     case 541:d.bt9();      break;     //case 551:     case 561:     case 571:    case 581:    case 591:
					case 502:d.odd1();      break;     case 512:d.rel2();      break;     case 522:d.fill3();      break;     case 532:d.bt6();      break;     case 542:d.brand8();   break;     //case 552:     case 562:     case 572:    case 582:    case 592:
					case 503:d.brand1();    break;     case 513:d.odd2();      break;     case 523:d.rel3();       break;     case 533:d.fill4();    break;     case 543:d.bt7();      break;     //case 553:     case 563:     case 573:    case 583:    case 593:
					case 504:d.fill5();     break;     case 514:d.brand2();    break;     case 524:d.odd3();       break;     case 534:d.odd4();     break;     case 544:d.bt10();     break;     //case 554:     case 564:     case 574:    case 584:    case 594:
					case 505:d.bt1();       break;     case 515:d.fill6();     break;     case 525:d.brand3();     break;     case 535:d.rel4();     break;     case 545:d.odd5();     break;     //case 555:     case 565:     case 575:    case 585:    case 595:
					case 506:d.odd6();      break;     case 516:d.bt2();       break;     case 526:d.fill7();      break;     case 536:d.brand4();   break;     case 546:d.rel5();     break;     //case 556:     case 566:     case 576:    case 586:    case 596:
					case 507:d.rel6();      break;     case 517:d.odd7();      break;     case 527:d.bt3();        break;     case 537:d.fill8();    break;     case 547:d.brand5();   break;     //case 557:     case 567:     case 577:    case 587:    case 597:
					case 508:d.brand9();    break;     case 518:d.rel7();      break;     case 528:d.odd8();       break;     case 538:d.bt4();      break;     case 548:d.fill9();    break;     //case 558:     case 568:     case 578:    case 588:    case 598:
					case 509:d.fill10();    break;     case 519:d.brand10();   break;     case 529:d.rel8();       break;     case 539:d.odd9();     break;     case 549:d.rel10();    break;     //case 559:     case 569:     case 579:    case 589:    case 599:
				}
			}
		}
	}




void main()
{
	clrscr();
	cout<<"Welcome to JUMANJI!"<<endl;
	getch();
	cout<<"Rules are simple"<<endl;
	getch();
	cout<<"Complete all the puzzles or stay STUCK here FOREVER!"<<endl;
	getch();
	cout<<"Let's start!"<<endl;
	getch();
	game_board gb;
	gb.board();
	getch();
	clrscr();
	gb.play();
	getch();
	cout<<"You win!"<<endl;
	getch();
	cout<<"Thank you for playing JUMANJI!";
	getch();
}