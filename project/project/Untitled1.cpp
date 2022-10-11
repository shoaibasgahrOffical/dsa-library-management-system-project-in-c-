#include<iostream>
#include<fstream>
#include<ctime>
#include<sstream>
#include<conio.h>
#include <cstdlib>

using  namespace std;

class child{
	private:
		string vale;
		string Book_Author_Name;
		string Books_ID ;
		string Books_Quantity;
		string Book_price;
		child* next;
	public:
		void setvalue(string value){
			vale=value;
			
		}
		 
	 void setBook_Author_Name(string value){
		Book_Author_Name=value;
			
		}
		string getBook_Author_Name(){
		 	return Book_Author_Name;
		 }
		 
		  void setBooks_ID(string value){
		Books_ID=value;
			
		}
		string getBooks_ID(){
		 	return Books_ID;
		 }
		 
		 
	void setBooks_Quantity(string value){
		Books_Quantity=value;
			
		}
		string getBooks_Quantity(){
		 	return Books_Quantity;
		 }
		 
	void setBook_price(string value){
		Book_price=value;
			
		}
		string getBook_price(){
		 	return Book_price;
		 }
		 
		 
		  void setchild(child* s){
		 	
		 	next=s;
		 }
		 
		 
		 
		 
		 string getvalue(){
		 	return vale;
		 }
		 
		 child* getnext(){
		 	return next;
		 }
};

class list1{
	private:
		child* head;
		child* current;
	public:
		list1(){
			head=NULL;
			current=NULL;
		}
		
		
		void insertvalue(string a){
			child* newnode=new child();
			newnode->setvalue(a);
			if(head==NULL){
				newnode->setchild(NULL);
				current=newnode;
				head=newnode;
				
			}
			else{
				newnode->setchild(current->getnext());
				current->setchild(newnode);
				current=newnode;
			}
			
			
			
		}
		
	      child* giveadress(){
			return head;
		}
		
	
};

class Node{
  	private:
		string value;
		Node* next;
		Node* prev;
		child* storevalue;
	public:
		void setvalue(string vale){
			value=vale;
			
		}
		 
		  void setnext(Node* s){
		 	
		 	next=s;
		 }
		 
		  void setprev(Node* h){
		 	
		 	prev=h;
		 }
		 
		 void setstorevalue(child* j){
		 	storevalue=j;
		 }
		 
		 string getvalue(){
		 	return value;
		 }  
		 child* getstorevalue(){
		 	return storevalue;
		 }
		 
		 Node* getnext(){
		 	return next;
		 }
     	
     	
		 
		 Node* getprev(){
		 	return prev;
		 }
	     
};


class list{
	private:
		Node* head;
		Node* current;
		Node*   last;
		child* store;
		int size=0;
	public:
		list(){
			head=NULL;
			current=NULL;
			last=NULL;
		}
		
		
//		void insertvalue(string a){
//		     
//			char k;
//			child* ll;
//			Node* newnode=new Node();
//			newnode->setvalue(a);
//			list1 p;
//			size++;
//				
//			do{
//		    int m;
//		    string a1;
//		    cin.ignore();
//		   	ofstream salvebook;
//		    string h1=a+".txt";
//		    
//		   salvebook.open(h1.c_str(),ios::app);
//		    	cout<<"\n\n\n\n\n\n\n";
//			cout<<"\t\t\t\t\t\t"<<"enter name of book  :"<<" ";
//		    getline(cin,a1);
//		    cin.ignore();
//		    salvebook<<a1<<endl;
//			p.insertvalue(a1);
//			  cout<<"\t\t\t\t\t\t"<<"enter name Of Book's Author Name  :"<<" ";
//		    getline(cin,a1);
//		    cin.ignore();
//		    salvebook<<a1<<endl;
//			p.insertvalue(a1);
//			  cout<<"\t\t\t\t\t\t"<<"enter Book's ID  :"<<" ";
//		    getline(cin,a1);
//		    cin.ignore();
//		    salvebook<<a1<<endl;
//			p.insertvalue(a1);
//			  cout<<"\t\t\t\t\t\t"<<"enter Book Price :"<<" ";
//		    getline(cin,a1);
//		    cin.ignore();
//		    salvebook<<a1<<endl;
//			p.insertvalue(a1);
//			  cout<<"\t\t\t\t\t\t"<<"enter Book's Quantity :"<<" ";
//		    getline(cin,a1);
//		    cin.ignore();
//		    salvebook<<a1<<endl;
//			p.insertvalue(a1);
//			
//		
//		//	salvebook<<endl;
//		   system("cls");
//				cout<<"\n\n\n\n\n\n\n";
//			cout<<"\t\t\t\t\t\t"<<"press y if there is more book if not press n"<<" ";
//			cin>>k;
//			
//		   
//			}while(k=='y');
//			if(head==NULL){
//				newnode->setnext(NULL);
//				newnode->setprev(NULL);
//			    ll=p.giveadress();
//				newnode->setstorevalue(ll);
//				current=newnode;
//				head=newnode;
//				last=newnode;
//				
//			}
//			else{
//				newnode->setnext(current->getnext());
//				newnode->setprev(current);
//				  ll=p.giveadress();
//				newnode->setstorevalue(ll);
//				current->setnext(newnode);
//				current=newnode;
//				last=newnode;
//			}
//			
//			cout<<endl<<endl<<endl<<endl;
//			
//			
//		}
		
		void insertvalue(string a){
		    
			char k;
			child* ll;
			Node* newnode=new Node();
			newnode->setvalue(a);
			list1 p;
			size++;
				
			do{
		    int m;
		    string a1;
		   	ofstream salvebook;

		    string h1=a+".txt";
		   salvebook.open(h1.c_str(),ios::app);
		   	cin.ignore();
		    cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t"<<"enter name of book  :"<<" ";
		    getline(cin,a1);
		    cin.ignore();
		    salvebook<<a1<<endl;
			p.insertvalue(a1);
		//	  cout<<"\n\n\n\n\n\n\n";		
			cout<<"\t\t\t\t\t\t"<<"enter name Of Book's Author Name  :"<<" ";

		    getline(cin,a1);
		    cin.ignore();
		    salvebook<<a1<<endl;
			p.insertvalue(a1);
		cout<<"\t\t\t\t\t\t"<<"enter Book's ID  :"<<" ";
		    getline(cin,a1);
		    cin.ignore();
		    salvebook<<a1<<endl;
			p.insertvalue(a1);
				cout<<"\t\t\t\t\t\t"<<"enter Book Price :"<<" ";
		    getline(cin,a1);
		    cin.ignore();
		    salvebook<<a1<<endl;
			p.insertvalue(a1);
			 	cout<<"\t\t\t\t\t\t"<<"enter Book's Quantity :"<<" ";
		    getline(cin,a1);
		    cin.ignore();
		    salvebook<<a1<<endl;
			p.insertvalue(a1);
			
		
		//	salvebook<<endl;
		     cin.ignore();
		     system("cls");
		     		  cout<<"\n\n\n\n\n\n\n";
				cout<<"\t\t\t\t\t\t"<<"press y if there is more book if not press n"<<" ";
			cin>>k;
			
		   
			}while(k=='y');
			if(head==NULL){
				newnode->setnext(NULL);
				newnode->setprev(NULL);
			    ll=p.giveadress();
				newnode->setstorevalue(ll);
				current=newnode;
				head=newnode;
				last=newnode;
				
			}
			else{
				newnode->setnext(current->getnext());
				newnode->setprev(current);
				  ll=p.giveadress();
				newnode->setstorevalue(ll);
				current->setnext(newnode);
				current=newnode;
				last=newnode;
			}
			
			cout<<endl<<endl<<endl<<endl;
			
			
		}
		
		void show(){
			Node* temp=head;
			while(temp!=NULL){
				
				cout<<temp->getvalue()<<"-> ";
				child* temp1=temp->getstorevalue();
			     while(temp1!=NULL){
				
				cout<<temp1->getvalue()<<" ";
				temp1=temp1->getnext();
			}
				temp=temp->getnext();
				cout<<endl;
			}
		}
		
		 

		
		
	
		

};


class libr{
	private:
	  	list show;
	public:
		
		
		
		void search_by_name(){
         //   ofstream booksalve;
		//	booksalve.open("booksalve1.txt",ios::app);
			list1 book;
			int a=1,b,c=1;
			string h;
			string o,a11,a12,a13,a14,byname;
		
		//	 bookname.open("booksalve1.txt",ios::app);
		//	booksalve<<h;

			 ifstream  bookname11;
			 bookname11.open("booksalve1.txt");
			 getline(bookname11,h);
			 while(! bookname11.eof()){
			 cout<<"\t\t\t\t\t\t"<<"press "<<c<< " for "<<h<<endl;
			 	book.insertvalue(h);
			  getline(bookname11,h);
			  c++;
			  
			  
			 }cout<<"\t\t\t\t\t\t\t\t :";
              cin>>b;
               system("CLS");
			 child* temp=book.giveadress();
			// cout<<a;
		//	 cout<<temp->getvalue()<<"-> ";
		    cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t"<<"please enter book name "<<endl;
			cout<<"\t\t\t\t\t\t\t\t :";
			cin>>byname;
			
			system("cls");
			while(a<=b){
				if(b==a){
					string p,g=temp->getvalue();
					//	cout<<g<<"--> "<<endl;
						p=g+".txt";
						ifstream file;
						file.open(p.c_str());
						getline(file,o);
						getline(file,a11);
						getline(file,a12);
						getline(file,a13);
						getline(file,a14);

					
						while(!file.eof()){
							if(byname==o){
									cout<<"\t\t\t\t\t\t"<<"Book name : "<<o<<endl;
							cout<<"\t\t\t\t\t\t"<<"Book's Author Name : "<<a11<<endl;
							cout<<"\t\t\t\t\t\t"<<"Book's ID: "<<a12<<endl;
							cout<<"\t\t\t\t\t\t"<<"Book Price : "<<a13<<endl;
							cout<<"\t\t\t\t\t\t"<<"Book's Quantity  : "<<a14<<endl;
								
							}
						
						getline(file,o);
						getline(file,a11);
						getline(file,a12);
						getline(file,a13);
						getline(file,a14);

						}
						
				}
			
				temp=temp->getnext();
				a++;
			}
//		
//			
		}		
		
		

	
	
		
		void Issue_book(){
          //  ofstream booksalve;
			//booksalve.open("booksalve1.txt",ios::app);
			list1 book;
			int a=1,b,c=1;
			string h="shoaib";
			string o,a11,a12,a13,a14,byname;
			int y=0;
		
		//	 bookname.open("booksalve1.txt",ios::app);
		//	booksalve<<h;

			 ifstream  bookname11;
			 bookname11.open("booksalve1.txt");
			 getline(bookname11,h);
			 while(! bookname11.eof()){
			 cout<<"\t\t\t\t\t\t"<<"press "<<c<< " for "<<h<<endl;
			 	book.insertvalue(h);
			  getline(bookname11,h);
			  c++;
			  
			  
			 }cout<<"\t\t\t\t\t\t\t\t :";
              cin>>b;
               system("CLS");
			 child* temp=book.giveadress();
			// cout<<a;
		//	 cout<<temp->getvalue()<<"-> ";
		
		int cou;
		    cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t"<<"press one for search by name :"<<endl;
			cout<<"\t\t\t\t\t\t"<<"press two for search by ID :"<<endl;
			cout<<"\t\t\t\t\t\t\t\t :";
			cin>>cou;
			
			system("cls");
		if(cou==1){
			  cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t"<<"please enter book name "<<endl;
			cout<<"\t\t\t\t\t\t\t\t :";
			cin>>byname;
			
			system("cls");
			while(a<=b){
				if(b==a){
					string p,g=temp->getvalue();
					//	cout<<g<<"--> "<<endl;
					ofstream nfile;
					nfile.open("temp.txt");
					
						p=g+".txt";
						ifstream file;
						file.open(p.c_str());
						getline(file,o);
						getline(file,a11);
						getline(file,a12);
						getline(file,a13);
					//	cin.ignore();
						getline(file,a14);

					bool nn;
						while(!file.eof()){
							nn=true;
							if(byname==o){
								
								
								if(a12>"0"){
									nfile<<o<<endl;
									nfile<<a11<<endl;
									nfile<<a12<<endl;
									nfile<<a13<<endl;
									stringstream geek(a14);
									geek>>y;
									nfile<<y-1<<endl;
									string h;
									ofstream file2;
									file2.open("issue.txt",ios::app);
									cin.ignore();
									
										cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t"<<"Enter a  stuent  Name  :";
									getline(cin,h);
									file2<<h<<endl;
								    	
			cout<<"\t\t\t\t\t\t"<<"Enter a student Roll No  :";
									getline(cin,h);
									file2<<h<<endl;
                                   time_t t = time(0);   
                                  tm* now = localtime(&t);
                                  file2<< (now->tm_year + 1900) << endl;
								  file2 << (now->tm_mon + 1) << endl;
								  file2<<  now->tm_mday<<endl;
								  file2<<byname<<endl;
								  
							         nn= false;	
//								   string hj;
//								   hj=byname+".txt";
								   
								   
								      
								   
								   
								   
									
 								}
								else{
									system("cls");
										cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t"<<"book are not available :"<<endl;
								}
							
								
							}
							if(nn==false){
								
							}
								else{
									nfile<<o<<endl;
									nfile<<a11<<endl;
									nfile<<a12<<endl;
									nfile<<a13<<endl;
									nfile<<a14<<endl;
									
								}   
						
						getline(file,o);
						getline(file,a11);
						getline(file,a12);
						getline(file,a13);
				//		cin.ignore();
						//file>>y;
							//	cin.ignore();
						getline(file,a14);

						}
			file.close();
			nfile.close();
			remove(p.c_str());	  
		    rename("temp.txt",p.c_str()); 
						
				}
			
				temp=temp->getnext();
				a++;
			}
			
			
		}
		else if(cou==2){
			  cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t"<<"please enter book ID "<<endl;
			cout<<"\t\t\t\t\t\t\t\t :";
			cin>>byname;
			
			system("cls");
			while(a<=b){
				if(b==a){
					string p,g=temp->getvalue();
					//	cout<<g<<"--> "<<endl;
					ofstream nfile;
					nfile.open("temp.txt");
					
						p=g+".txt";
						ifstream file;
						file.open(p.c_str());
						getline(file,o);
						getline(file,a11);
						getline(file,a12);
						getline(file,a13);
					//	cin.ignore();
						getline(file,a14);

					bool nn;
						while(!file.eof()){
							nn=true;
							if(byname==a12){
								
								
								if(a12>"0"){
									nfile<<o<<endl;
									nfile<<a11<<endl;
									nfile<<a12<<endl;
									nfile<<a13<<endl;
									stringstream geek(a14);
									geek>>y;
									nfile<<y-1<<endl;
									string h;
									ofstream file2;
									file2.open("issue.txt",ios::app);
									cin.ignore();
									
										cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t"<<"Enter a  stuent  Name  :";
									getline(cin,h);
									file2<<h<<endl;
								    	
			cout<<"\t\t\t\t\t\t"<<"Enter a student Roll No  :";
									getline(cin,h);
									file2<<h<<endl;
                                   time_t t = time(0);   
                                  tm* now = localtime(&t);
                                  file2<< (now->tm_year + 1900) << endl;
								  file2 << (now->tm_mon + 1) << endl;
								  file2<<  now->tm_mday<<endl;
								  file2<<byname<<endl;
								  
							         nn= false;	
//								   string hj;
//								   hj=byname+".txt";
								   
								   
								      
								   
								   
								   
									
 								}
								else{
									system("cls");
										cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t"<<"book are not available :"<<endl;
								}
							
								
							}
							if(nn==false){
								
							}
								else{
									nfile<<o<<endl;
									nfile<<a11<<endl;
									nfile<<a12<<endl;
									nfile<<a13<<endl;
									nfile<<a14<<endl;
									
								}   
						
						getline(file,o);
						getline(file,a11);
						getline(file,a12);
						getline(file,a13);
				//		cin.ignore();
						//file>>y;
							//	cin.ignore();
						getline(file,a14);

						}
			file.close();
			nfile.close();
			remove(p.c_str());	  
		    rename("temp.txt",p.c_str()); 
						
				}
			
				temp=temp->getnext();
				a++;
			}
			
			
		}
		  
//			
		}		
		
	void modif_book(){
//            ofstream booksalve;
//			booksalve.open("booksalve1.txt",ios::app);
			list1 book;
			int a=1,b,c=1;
			string h="shoaib";
			string o,a11,a12,a13,a14,byname;
		
		//	 bookname.open("booksalve1.txt",ios::app);
		//	booksalve<<h;

			 ifstream  bookname11;
			 bookname11.open("booksalve1.txt");
			 getline(bookname11,h);
			 while(! bookname11.eof()){
			 cout<<"\t\t\t\t\t\t"<<"press "<<c<< " for "<<h<<endl;
			 	book.insertvalue(h);
			  getline(bookname11,h);
			  c++;
			  
			  
			 }cout<<"\t\t\t\t\t\t\t\t :";
              cin>>b;
               system("CLS");
			 child* temp=book.giveadress();
			// cout<<a;
		//	 cout<<temp->getvalue()<<"-> ";
//		    cout<<"\n\n\n\n\n\n\n";
//			cout<<"\t\t\t\t\t\t"<<"please enter book name "<<endl;
//			cout<<"\t\t\t\t\t\t\t\t :";
//			cin>>byname;
			
			system("cls");
			while(a<=b){
				if(b==a){
					string p,g=temp->getvalue();
					//	cout<<g<<"--> "<<endl;
						p=g+".txt";
						
			char k;
			
				
			do{
		    int m;
		    string a1;
		   	ofstream salvebook;
		    
		    cin.ignore();
		   salvebook.open(p.c_str(),ios::app);
		   cout<<"\n\n\n\n\n";
		    cout<<"\t\t\t\t\t\t"<<"enter name of book  :"<<" ";
		    getline(cin,a1);
		    cin.ignore();
		    salvebook<<a1<<endl;
		
			  cout<<"\t\t\t\t\t\t"<<"enter name Of Book's Author Name  :"<<" ";
		    getline(cin,a1);
		    cin.ignore();
		    salvebook<<a1<<endl;
		//	p.insertvalue(a1);
		  cout<<"\t\t\t\t\t\t"<<"enter Book's ID  :"<<" ";
		    getline(cin,a1);
		    cin.ignore();
		    salvebook<<a1<<endl;
		//	p.insertvalue(a1);
			  cout<<"\t\t\t\t\t\t"<<"enter Book Price :"<<" ";
		    getline(cin,a1);
		    cin.ignore();
		    salvebook<<a1<<endl;
		//	p.insertvalue(a1);
			  cout<<"\t\t\t\t\t\t"<<"enter Book's Quantity :"<<" ";
		    getline(cin,a1);
		    cin.ignore();
		    salvebook<<a1<<endl;
		//	p.insertvalue(a1);
			
		
		//	salvebook<<endl;
		   system("cls");
		   cout<<"\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t"<<"press y if there is more book if not press n"<<" ";
			cin>>k;
			
		   
			}while(k=='y');
						
				}
			
				temp=temp->getnext();
				a++;
			}
//		
//			
		}		
		
		
		
		
void search_by_ID(){
            ofstream booksalve;
		//	booksalve.open("booksalve1.txt",ios::app);
			list1 book;
			int a=1,b,c=1;
			string h="shoaib";
			string o,a11,a12,a13,a14,byname;
		
		//	 bookname.open("booksalve1.txt",ios::app);
		//	booksalve<<h;

			 ifstream  bookname11;
			 bookname11.open("booksalve1.txt");
			 getline(bookname11,h);
			 while(! bookname11.eof()){
			 cout<<"\t\t\t\t\t\t"<<"press "<<c<< " for "<<h<<endl;
			 	book.insertvalue(h);
			  getline(bookname11,h);
			  c++;
			  
			  
			 }cout<<"\t\t\t\t\t\t\t\t :";
              cin>>b;
               system("CLS");
			 child* temp=book.giveadress();
			// cout<<a;
		//	 cout<<temp->getvalue()<<"-> ";
		    cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t"<<"please enter book ID :"<<endl;
			cout<<"\t\t\t\t\t\t\t\t :";
			cin>>byname;
			
			system("cls");
			while(a<=b){
				if(b==a){
					string p,g=temp->getvalue();
					//	cout<<g<<"--> "<<endl;
						p=g+".txt";
						ifstream file;
						file.open(p.c_str());
						getline(file,o);
						getline(file,a11);
						getline(file,a12);
						getline(file,a13);
						getline(file,a14);

					
						while(!file.eof()){
							if(byname==a12){
							cout<<"\t\t\t\t\t\t"<<"Book name : "<<o<<endl;
							cout<<"\t\t\t\t\t\t"<<"Book's Author Name : "<<a11<<endl;
							cout<<"\t\t\t\t\t\t"<<"Book's ID: "<<a12<<endl;
							cout<<"\t\t\t\t\t\t"<<"Book Price : "<<a13<<endl;
							cout<<"\t\t\t\t\t\t"<<"Book's Quantity  : "<<a14<<endl;
								
							}
						
						getline(file,o);
						getline(file,a11);
						getline(file,a12);
						getline(file,a13);
						getline(file,a14);

						}
						
				}
			
				temp=temp->getnext();
				a++;
			}
//		
//			
		}		

		
					
void shobookiteam(){
            ofstream booksalve;
			booksalve.open("booksalve1.txt",ios::app);
			list1 book;
			int a=1,b,c=1;
			string h;
			string o,a11,a12,a13,a14;
			booksalve<<h;
			 ifstream  bookname11;
			 bookname11.open("booksalve1.txt");
			 getline(bookname11,h);
			 while(! bookname11.eof()){
			 cout<<"\t\t\t\t\t\t"<<"press "<<c<< " for "<<h<<endl;
			 	book.insertvalue(h);
			  getline(bookname11,h);
			  c++;
			  
			  
			 }cout<<"\t\t\t\t\t\t\t\t :";
              cin>>b;
               system("CLS");
			 child* temp=book.giveadress();
			// cout<<a;
		//	 cout<<temp->getvalue()<<"-> ";
			while(a<=b){
				
				if(b==a){
					string p,g=temp->getvalue();
					//	cout<<g<<"--> "<<endl;
					
						p=g+".txt";
						ifstream file;
						file.open(p.c_str());
						getline(file,o);
						getline(file,a11);
						getline(file,a12);
						getline(file,a13);
						getline(file,a14);

				
						while(!file.eof()){
							cout<<"\t\t\t\t\t\t"<<"Book name : "<<o<<endl;
							cout<<"\t\t\t\t\t\t"<<"Book's Author Name : "<<a11<<endl;
							cout<<"\t\t\t\t\t\t"<<"Book's ID: "<<a12<<endl;
							cout<<"\t\t\t\t\t\t"<<"Book Price : "<<a13<<endl;
							cout<<"\t\t\t\t\t\t"<<"Book's Quantity  : "<<a14<<endl;
							cout<<endl<<endl;
						
						getline(file,o);
						getline(file,a11);
						getline(file,a12);
						getline(file,a13);
						getline(file,a14);

						}
						
				}
			
				temp=temp->getnext();
				a++;
			}		
		
		}
		
	int fine(int day,int mm,int year){
	     int day1,mm1,year1;
		 	 time_t t = time(0);   
            tm* now = localtime(&t);
             day1=(now->tm_year + 1900) ;
			mm1= (now->tm_mon + 1) ;
		    year1=now->tm_mday;
		    if(mm+1==mm1){
		    	cout<<" ";
			}
			else{
				cout<<"Fine 500";
			}
		      
	}
	
		
  
	
		void Return_book(){
          //  ofstream booksalve;
			//booksalve.open("booksalve1.txt",ios::app);
			list1 book;
			int a=1,b,c=1;
			string h="shoaib";
			string o,a11,a12,a13,a14,byname;
			int y=0;
		
		//	 bookname.open("booksalve1.txt",ios::app);
		//	booksalve<<h;

			 ifstream  bookname11;
			 bookname11.open("booksalve1.txt");
			 getline(bookname11,h);
			 while(! bookname11.eof()){
			 cout<<"\t\t\t\t\t\t"<<"press "<<c<< " for "<<h<<endl;
			 	book.insertvalue(h);
			  getline(bookname11,h);
			  c++;
			  
			  
			 }cout<<"\t\t\t\t\t\t\t\t :";
              cin>>b;
               system("CLS");
			 child* temp=book.giveadress();
			// cout<<a;
		//	 cout<<temp->getvalue()<<"-> ";
		
		int cou;
		    cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t"<<"press one for search by name :"<<endl;
			cout<<"\t\t\t\t\t\t"<<"press two for search by ID :"<<endl;
			cout<<"\t\t\t\t\t\t\t\t :";
			cin>>cou;
			
			system("cls");
		if(cou==1){
			  cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t"<<"please enter book name "<<endl;
			cout<<"\t\t\t\t\t\t\t\t :";
			cin>>byname;
			
			system("cls");
			while(a<=b){
				if(b==a){
					string p,g=temp->getvalue();
					//	cout<<g<<"--> "<<endl;
					ofstream nfile;
					nfile.open("temp.txt");
					
						p=g+".txt";
						ifstream file;
						file.open(p.c_str());
						getline(file,o);
						getline(file,a11);
						getline(file,a12);
						getline(file,a13);
					//	cin.ignore();
						getline(file,a14);

					bool nn;
						while(!file.eof()){
							nn=true;
							if(byname==o){
								
								
									nfile<<o<<endl;
									nfile<<a11<<endl;
									nfile<<a12<<endl;
									nfile<<a13<<endl;
									stringstream geek(a14);
									geek>>y;
									nfile<<y+1<<endl;
									string h;
									ifstream file2;
									file2.open("issue.txt");
									ofstream File;
									File.open("ec.txt",ios::app);
										cin.ignore();
									cout<<"\n\n\n\n\n\n\n";
									 cout<<"\t\t\t\t\t\t""Enter a  stuent  Name  :";
									getline(cin,h);
								//	file2<<h<<endl;
								string sroll;
								    
	                                cout<<"\t\t\t\t\t\t"<<"Enter a student Roll No  :";
									getline(cin,sroll);
									string aa,ab,ac,ad,ae,af;
									getline(file2,aa);
									getline(file2,ab);
									getline(file2,ac);
									getline(file2,ad);
									getline(file2,ae);
									getline(file2,af);
									
									while(!file2.eof()){
										if(aa==h &&ab==sroll){
									int day,mounth,year;		
									time_t t = time(0);   
                                  tm* now = localtime(&t);
                                  year= (now->tm_year + 1900) ;
								  mounth=(now->tm_mon + 1) ;
								  day=  now->tm_mday;
								  fine(day,mounth,year);
											
										}else{
											File<<aa<<endl;
											File<<ab<<endl;
											File<<ac<<endl;
											File<<ad<<endl;
											File<<ae<<endl;
											File<<af<<endl;
										}
									getline(file2,aa);
									getline(file2,ab);
									getline(file2,ac);
									getline(file2,ad);
									getline(file2,ae);
									getline(file2,af);
									
									}
									
									file2.close();
									File.close();
									remove("issue.txt");	  
		                            rename("ec.txt","issue.txt"); 
								//	file2<<h<<endl;
    
								  
							         nn= false;	
//								   string hj;
//								   hj=byname+".txt";
								   
								   
								      
								   
								   
								   
									
 							
							
								
							}
							if(nn==false){
								
							}
								else{
									nfile<<o<<endl;
									nfile<<a11<<endl;
									nfile<<a12<<endl;
									nfile<<a13<<endl;
									nfile<<a14<<endl;
									
								}   
						
						getline(file,o);
						getline(file,a11);
						getline(file,a12);
						getline(file,a13);
				//		cin.ignore();
						//file>>y;
							//	cin.ignore();
						getline(file,a14);
						nn=true;

						}
			file.close();
			nfile.close();
			remove(p.c_str());	  
		    rename("temp.txt",p.c_str()); 
						
				}
			
				temp=temp->getnext();
				a++;
			}
			
			
		}
		else if(cou==2){
			
				  cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t"<<"please enter book ID"<<endl;
			cout<<"\t\t\t\t\t\t\t\t :";
			cin>>byname;
			
			system("cls");
			while(a<=b){
				if(b==a){
					string p,g=temp->getvalue();
					//	cout<<g<<"--> "<<endl;
					ofstream nfile;
					nfile.open("temp.txt");
					
						p=g+".txt";
						ifstream file;
						file.open(p.c_str());
						getline(file,o);
						getline(file,a11);
						getline(file,a12);
						getline(file,a13);
					//	cin.ignore();
						getline(file,a14);

					bool nn;
						while(!file.eof()){
							nn=true;
							if(byname==a12){
								
								
									nfile<<o<<endl;
									nfile<<a11<<endl;
									nfile<<a12<<endl;
									nfile<<a13<<endl;
									stringstream geek(a14);
									geek>>y;
									nfile<<y+1<<endl;
									string h;
									ifstream file2;
									file2.open("issue.txt");
									ofstream File;
									File.open("ec.txt",ios::app);
										cin.ignore();
									cout<<"\n\n\n\n\n\n\n";
									 cout<<"\t\t\t\t\t\t""Enter a  stuent  Name  :";
									getline(cin,h);
								//	file2<<h<<endl;
								string sroll;
								    
	                                cout<<"\t\t\t\t\t\t"<<"Enter a student Roll No  :";
									getline(cin,sroll);
									string aa,ab,ac,ad,ae,af;
									getline(file2,aa);
									getline(file2,ab);
									getline(file2,ac);
									getline(file2,ad);
									getline(file2,ae);
									getline(file2,af);
									
									while(!file2.eof()){
										if(aa==h &&ab==sroll){
									int day,mounth,year;		
									time_t t = time(0);   
                                  tm* now = localtime(&t);
                                  year= (now->tm_year + 1900) ;
								  mounth=(now->tm_mon + 1) ;
								  day=  now->tm_mday;
								  fine(day,mounth,year);
											
										}else{
											File<<aa<<endl;
											File<<ab<<endl;
											File<<ac<<endl;
											File<<ad<<endl;
											File<<ae<<endl;
											File<<af<<endl;
										}
									getline(file2,aa);
									getline(file2,ab);
									getline(file2,ac);
									getline(file2,ad);
									getline(file2,ae);
									getline(file2,af);
									
									}
									
									file2.close();
									File.close();
									remove("issue.txt");	  
		                            rename("ec.txt","issue.txt"); 
								//	file2<<h<<endl;
    
								  
							         nn= false;	
//								   string hj;
//								   hj=byname+".txt";
								   
								   
								      
								   
								   
								   
									
 							
							
								
							}
							if(nn==false){
								
							}
								else{
									nfile<<o<<endl;
									nfile<<a11<<endl;
									nfile<<a12<<endl;
									nfile<<a13<<endl;
									nfile<<a14<<endl;
									
								}   
						
						getline(file,o);
						getline(file,a11);
						getline(file,a12);
						getline(file,a13);
				//		cin.ignore();
						//file>>y;
							//	cin.ignore();
						getline(file,a14);
						nn=true;

						}
			file.close();
			nfile.close();
			remove(p.c_str());	  
		    rename("temp.txt",p.c_str()); 
						
				}
			
				temp=temp->getnext();
				a++;
			}
		}
		  
//			
		}				  
//			


	
	



};
void open(){
  
	int choice;
	cout<<"\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t"<<" press 1 for add  salve :"<<endl;
	cout<<"\t\t\t\t\t\t"<<"press 2 for add book :"<<endl;
    cout<<"\t\t\t\t\t\t"<<"press 3 for issue book :"<<endl;
    cout<<"\t\t\t\t\t\t"<<"press 4 for return book :"<<endl;
    cout<<"\t\t\t\t\t\t"<<"press 5 for view book :"<<endl;
    cout<<"\t\t\t\t\t\t"<<"press 6 for search by Name :"<<endl;
    cout<<"\t\t\t\t\t\t"<<"press 7 for search by ID :"<<endl;
    cout<<"\t\t\t\t\t\t"<<"press 8 for exit :" ;
	cin>>choice;
	if(choice==1){
		cin.ignore();
		system("cls");
	   list l;
    
    ofstream salve;
    string nameof;
    salve.open("booksalve1.txt",ios::app);
    	char k;	
			do{
					  cout<<"\n\n\n\n\n\n\n";
					  cout<<"\t\t\t\t\t\t"<<"please enter a salve name :";
					  
		   getline(cin,nameof);
		   salve<<nameof<<endl;
		   system("cls");
		      l.insertvalue(nameof);
		      system("cls");
		       cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t"<<"press y if there is more book if not press n"<<" ";
			cin>>k;
			
		   
			}while(k=='y');
    
		system("cls");
		open();
	}
		libr yu;
	if(choice==2){
		system("cls");
		yu.modif_book();
		system("pause");
		system("cls");
		open();
		
		
	}
	if(choice==3){
		system("cls");
		yu.Issue_book();
		system("pause");
		system("cls");
		open();
		
	}
	if(choice==4){
		system("cls");
		yu.Return_book();
		system("pause");
		system("cls");
		open();
	}
	if(choice==5){
		system("cls");
		yu.shobookiteam();
		system("pause");
		system("cls");
		open();
	}
	if(choice==6){
		system("cls");
	yu.search_by_name();
	system("pause");
		system("cls");
		open();
	}
	if(choice==7){
		system("cls");
			yu.search_by_ID();
			system("pause");
		system("cls");
		open();
	}
	if(choice==8){
		system("cls");
		return ;
	}
	
	
}

int main(){
libr yu;  
open();
    
  


}
