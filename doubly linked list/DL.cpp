//doubly linked list

#include<iostream>
#include<conio.h>
using namespace std;

struct DL
{
	int info;
	struct DL *LPTR,*RPTR;
};

typedef struct DL node;
node *L=NULL,*R=NULL;

void insertBegining(int v)
{
	
	node *IB;
	IB=new node;
	IB->info=v;
	IB->LPTR=NULL;
	IB->RPTR=NULL;
	
	if(L==NULL)
	{
		L=R=IB;
	}
	else
	{
		IB->RPTR=L;
		L->LPTR=IB;
		L=IB;
	}
	cout<<"\n INSERT BEGINING VALUE IS : "<<v;
}

void insertEndining(int v)
{
	
	node *IE;
	IE=new node;
	IE->info=v;
	IE->LPTR=NULL;
	IE->RPTR=NULL;
	
	if(R==NULL)
	{
		L=R=IE;
	}
	else
	{
		IE->LPTR=R;
		R->RPTR=IE;
		R=IE;
	}
	cout<<"\n INSERT ENDINING VALUE IS : "<<v;
}

void Display_BEG()
{
	if(L==NULL)
		cout<<"\n DOUBLY LINKED LIST IS EMPTY...";
	else
	{
		node *travel;
		travel=L;
		cout<<"\nDISPLAY VALUE BEG TO END \n";
		while(travel!=NULL)
		{
			cout<<travel->info<<"\t";
			travel=travel->RPTR;
		}
	}
}


void Display_END()
{
	if(R==NULL)
		cout<<"\n DOUBLY LINKED LIST IS EMPTY...";
	else
	{
		node *travel;
		travel=R;
		cout<<"\nDISPLAY VALUE END TO BEG \n";
		while(travel!=NULL)
		{
			cout<<travel->info<<"\t";
			travel=travel->LPTR;
		}
	}
}

void Display()
{

	if(L==NULL && R==NULL)
		cout<<"\n DOUBLY LINKED LIST IS EMPTY...";
	else
	{
		node *t1,*t2;
		cout<<"\n\n BEG TO END DISPLAY VALUE \n";
		t1=L;
		while(t1!=NULL)
		{
			cout<<t1->info<<"\t";
			t1=t1->RPTR;
		}
		cout<<"\n\n\n END TO BEG DISPLAY VALUE \n";
		t2=R;
		while(t2!=NULL)
		{
			cout<<t2->info<<"\t";
			t2=t2->LPTR;
		}
		
	}
}

void Delete_BEG()
{
	if(L==NULL)
		cout<<"\n DOUBLY LINKED LIST IS EMPTY...";
	else
	{
		node *tmp;
		tmp=L;
		int val;
		val=tmp->info;
		if(L==R) //if(L->LPTR==NULL && L->RPTR==NULL)
			L=R=NULL;
		else
		{
			L=L->RPTR;
			L->LPTR=NULL;
		}
		delete tmp;
		cout<<"\n\n BEGINING NODE DELETED , VALUE IS : "<<val;
	}
}

void Delete_END()
{
	if(R==NULL)
		cout<<"\n DOUBLY LINKED LIST IS EMPTY...";
	else
	{
		node *tmp;
		tmp=R;
		int val;
		val=tmp->info;
		if(L==R) //if(R->LPTR==NULL && R->RPTR==NULL)
			L=R=NULL;
		else
		{
			R=R->LPTR;
			R->RPTR=NULL;
		}
		delete tmp;
		cout<<"\n\n ENDINING NODE DELETED , VALUE IS : "<<val;
	}
}

void SEARCH_BEG()
{
	if(L==NULL)
		cout<<"\n\n DOUBLY LINKED LIST IS EMPTYE...";
	else
	{
		int position=1,loop_position=1,search_position=1;
		node *travel,*tr,*save;
		travel=tr=save=L;
		cout<<"\n\n NODE POSITION IS BEG TO END \n\n";
		
		while(tr!=NULL)
		{
			cout<<"\n POSITION : "<<search_position<<" , VALUE IS : "<<tr->info;
			search_position=search_position+1;
			tr=tr->RPTR;
		}
		
		cout<<"\n\n\n POSITION LIST \n\n";
		while(1)  //(travel!=NULL)
		{
			cout<<position; //<<" OR ";
			position=position+1;
			travel=travel->RPTR;
			if(travel==NULL)
				break;
			cout<<" OR ";
		}
		
		cout<<"\n\n ENTER A POSITION : ";
		cin>>position;
		
		for(loop_position=1;loop_position<position;loop_position++)
		{
			save=save->RPTR;
		}
		
		cout<<"\n\n BEG TO END SEARCH VALUE IS : "<<save->info;
	}
}


void Change_BEG(int v)
{
	if(L==NULL)
		cout<<"\n\n DOUBLY LINKED LIST IS EMPTYE...";
	else
	{
		int position=1,loop_position=1,search_position=1;
		node *travel,*tr,*save;
		travel=tr=save=L;
		cout<<"\n\n NODE POSITION IS BEG TO END \n\n";
		
		while(tr!=NULL)
		{
			cout<<"\n POSITION : "<<search_position<<" , VALUE IS : "<<tr->info;
			search_position=search_position+1;
			tr=tr->RPTR;
		}
		
		cout<<"\n\n\n POSITION LIST \n\n";
		while(1) //(travel!=NULL)
		{
			cout<<position; //<<" OR ";
			position=position+1;
			travel=travel->RPTR;
			if(travel==NULL)
				break;
			cout<<" OR ";
		}
		
		cout<<"\n\n ENTER A POSITION : ";
		cin>>position;
		
		for(loop_position=1;loop_position<position;loop_position++)
		{
			save=save->RPTR;
		}
		save->info=v;
		cout<<"\n\n BEG TO END CHANGE VALUE IS : "<<save->info;
	}
}


void SEARCH_END()
{
	if(R==NULL)
		cout<<"\n\n DOUBLY LINKED LIST IS EMPTYE...";
	else
	{
		int position=1,loop_position=1,search_position=1;
		node *travel,*tr,*save;
		travel=tr=save=R;
		cout<<"\n\n NODE POSITION IS END TO BEG \n\n";
		
		while(tr!=NULL)
		{
			cout<<"\n POSITION : "<<search_position<<" , VALUE IS : "<<tr->info;
			search_position=search_position+1;
			tr=tr->LPTR;
		}
		
		cout<<"\n\n\n POSITION LIST \n\n";
		while(1)//(travel!=NULL)
		{
			cout<<position;//<<" OR ";
			position=position+1;
			travel=travel->LPTR;
			if(travel==NULL)
				break;
			cout<<" OR ";
		}
		
		cout<<"\n\n ENTER A POSITION : ";
		cin>>position;
		
		for(loop_position=1;loop_position<position;loop_position++)
		{
			save=save->LPTR;
		}
		
		cout<<"\n\n END TO BEG SEARCH VALUE IS : "<<save->info;
	}
}


void Change_END(int v)
{
	if(R==NULL)
		cout<<"\n\n DOUBLY LINKED LIST IS EMPTYE...";
	else
	{
		int position=1,loop_position=1,search_position=1;
		node *travel,*tr,*save;
		travel=tr=save=R;
		cout<<"\n\n NODE POSITION IS END TO BEG\n\n";
		
		while(tr!=NULL)
		{
			cout<<"\n POSITION : "<<search_position<<" , VALUE IS : "<<tr->info;
			search_position=search_position+1;
			tr=tr->LPTR;
		}
		
		cout<<"\n\n\n POSITION LIST \n\n";
		while(1)//(travel!=NULL)
		{
			cout<<position;//<<" OR ";
			position=position+1;
			travel=travel->LPTR;
			if(travel==NULL)
				break;
			cout<<" OR ";
		}
		
		cout<<"\n\n ENTER A POSITION : ";
		cin>>position;
		
		for(loop_position=1;loop_position<position;loop_position++)
		{
			save=save->LPTR;
		}
		save->info=v;
		cout<<"\n\n END TO BEG CHANGE VALUE IS : "<<save->info;
	}
}

int Count()
{
	if(L==NULL && R==NULL)
		return 0;
	else
	{
		node *t;
		t=L;
		int Count=1;
		while(1)
		{
			t=t->RPTR;
			if(t==NULL)
				break;
			
			Count=Count+1;
			
		}
		
		return Count;
		
	}
	
}

void insert_Order(int v)
{
	node *IO;
	IO=new node;
	IO->info=v;
	IO->LPTR=NULL;
	IO->RPTR=NULL;
	
	if(L==NULL&&R==NULL)
		L=R=IO;
	else
	{
		IO->RPTR=L;
		L->LPTR=IO;
		L=IO;

		node *travel=L;
		int p=1;
		while(1)
		{
			travel=travel->RPTR;
			if(travel==NULL)
				break;
			p=p+1;
		}
		
		int n=p;
		int i,j,DL[n];
		node *t=L;
		
		for(i=0;i<n;i++)
		{
			DL[i]=t->info;
			t=t->RPTR;
		}
		
		int tmp;
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if( DL[j] > DL[j+1] )
				{
					tmp=DL[j];
					DL[j]=DL[j+1];
					DL[j+1]=tmp;
				}
			}
		}
		
		cout<<"\n\n INSERTING ORDER \n";
		node *t1=L;
		for(i=0;i<n;i++)
		{
			cout<<DL[i]<<"\t";
			t1->info=DL[i];
			t1=t1->RPTR;
		}
	}

}
void SORT()
{

	if(L==NULL && R==NULL)
		cout<<"\n DOUBLY LINKED LIST IS EMPTY...";
	else
	{
		node *travel=L;
		int p1=1;
		while(1)
		{
			travel=travel->RPTR;
			if(travel==NULL)
				break;
			p1=p1+1;
		}
		int n;
		n=p1;
		
		int i,j,tmp,DL[n];
		node *t=L;
		for(i=0;i<n;i++)
		{
			DL[i]=t->info;
			t=t->RPTR;
			
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if( DL[j] > DL[j+1] )
				{
					tmp=DL[j];
					DL[j]=DL[j+1];
					DL[j+1]=tmp;
				}	
			}
		}
		cout<<"\n\n ASCENDING ORDER\n\n";
		node *t1=L;
		for(i=0;i<n;i++)
		{
			t1->info=DL[i];
			t1=t1->RPTR;
			cout<<DL[i]<<"\t";
		}
		cout<<"\n\n DESCENDING ORDER\n\n";
		for(i=n-1;i>=0;i--)
		{
			cout<<DL[i]<<"\t";
		}
	}
}

void Delete_random_at_BEG()
{
	if(L==NULL)
		cout<<"\n DOUBLY LINKED LIST IS EMPTY...";
	else
	{
		node *t1=L;
		int p=1;
		cout<<"\n\n AVALIABLE POSITION  \n";
		while(1)
		{
			cout<<p;
			t1=t1->RPTR;
			p=p+1;
			if(t1==NULL)
				break;
			cout<<"  OR  ";
		}
		int n=p-1;
		cout<<"\n\n ENTER A POSITION : ";
		int p1;
		cin>>p1;
		
		node *t2=L;
		if(t2->RPTR==NULL)
		{
			node *tmp;
			tmp=t2;
			L=R=NULL;
			int val=tmp->info;
			delete tmp;
			cout<<"\n\n DELETED NODE VALUE IS : "<<val;
			
		}
		else if(p1==1)
		{
			node *tmp=t2;
			int val=tmp->info;
			node *save;
			save=t2->RPTR;
			save->LPTR=NULL;
			L=save;
			cout<<"\n\n DELETED NODE VALUE IS : "<<val;
		}
		else if(p1==n)
		{
			node *t2=R;
			node *save;
			save=t2->LPTR;
			R=save;
			save->RPTR=NULL;
			node *tmp;
			tmp=t2;
			int val=tmp->info;
			delete tmp;
			cout<<"\n\n DELETED NODE VALUE IS : "<<val;
		}
	else
	{
		
		node *tmp,*t;
		int i;
		for(i=1;i<p1;i++)
		{
			tmp=t2->RPTR;
			t=t2;
			t2=t2->RPTR;
		}
		t->RPTR=tmp->RPTR;
		node *save;
		save=tmp->RPTR;
		save->LPTR=t;
		int val=tmp->info;
		delete tmp;
		cout<<"\n\n DELETED NODE VALUE IS : "<<val;
	}
	
	}
}
int main()
{
	int choice;
	do
	{
		cout<<"\n----------------MENU-------------------------\n";
		cout<<"\n\t\t ENTER-1  : INSERT AT BEGINING ";
		cout<<"\n\t\t ENTER-2  : INSERT AT ENDINING ";
		cout<<"\n\t\t ENTER-3  : DISPLAY AT BEGINING ";
		cout<<"\n\t\t ENTER-4  : DISPLAY AT ENDINING ";
		cout<<"\n\t\t ENTER-5  : DISPLAY ";
		cout<<"\n\t\t ENTER-6  : DELETE AT BEGINING ";
		cout<<"\n\t\t ENTER-7  : DELETE AT ENDINING ";
		cout<<"\n\t\t ENTER-8  : SEARCH AT BEGINING ";
		cout<<"\n\t\t ENTER-9  : CHANGE AT BEGINING ";
		cout<<"\n\t\t ENTER-10 : SEARCH AT ENDINING ";
		cout<<"\n\t\t ENTER-11 : CHANGE AT ENDINING ";
		cout<<"\n\t\t ENTER-12 : COUNT ";
		cout<<"\n\t\t ENTER-13 : INSEART ORDER ";
		cout<<"\n\t\t ENTER-14 : SORT ";
		cout<<"\n\t\t ENTER-15 : DELETE RANDOM AT BEG";
		cout<<"\n\t\t ENTER-16 : EXIT ";
		cout<<"\n\t\t ENTER YOUR CHOICE : ";
		cin>>choice;
		
		switch(choice)
		{
			case 1 :
				cout<<"\n\t ENTER A NO : ";
				int no;
				cin>>no;
				insertBegining(no);
				break;
			case 2 :
				cout<<"\n\t ENTER A NO : ";
				int n;
				cin>>n;
				insertEndining(n);
				break;
			case 3 :
				Display_BEG();
				break;
			case 4 :
				Display_END();
				break;
			case 5 :
				Display();
				break;
			case 6 :
				Delete_BEG();
				break;
			case 7 :
				Delete_END();
				break;
			case 8 :
				SEARCH_BEG();
				break;
			case 9 :
				cout<<"\n\n ENTER A VALUE : ";
				int v1;
				cin>>v1;
				Change_BEG(v1);
				break;
			case 10 :
				SEARCH_END();
				break;
			case 11 :
				cout<<"\n\n ENTER A VALUE : ";
				int v2;
				cin>>v2;
				Change_END(v2);
				break;
			case 12 :
				int x;
				x=Count();
				if(x==0)
					cout<<"\n\n DOUBLY LINKED LIST IS EMPTY...";
				else
					cout<<"\n\n "<<x<<" NODE IN DOUBLY LINKED LIST ";
				break;
			case 13 :
				cout<<"\n\n ENTER A VALUE : ";
				int v3;
				cin>>v3;
				insert_Order(v3);
				break;
			case 14 :
				SORT();
				break;
			case 15 :
				 Delete_random_at_BEG();
				 break;
			case 16 :
				break;
			default :
				cout<<"\n\n IN_VALIED CHOICE...";
				break;
				
		}
	}while(choice!=16);
	
	getch();
	return 0;
}
