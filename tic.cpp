//CREATED BY MUHAMMAD HANAN ASGHAR
#include <iostream>
using namespace std;
struct Node{
  char data;
  Node *next;
}*start;
class LinkedList{
public:
LinkedList(){
  start = NULL;
}
void List(int data){
  Node *node = new Node();
  node->data = data;
  node->next = NULL;
  if(start == NULL){
    start = node;
  }else{
    Node *temp = start;
    while(temp->next!=NULL){
      temp = temp->next;
    }
    temp->next = node;
  }
}
void Board(){
  char arr[9] = {'0','1','2','3','4','5','6','7','8'};
  for(int i=0;i<9;i++){
    List(arr[i]);
  }
}
void DisplayBoard(){
  Node *temp = start;
  cout<<endl<<"|-------------------------|"<<endl;
  cout<<"|      Tic Tac Toe        |"<<endl;
  cout<<"|-------------------------|"<<endl;
  cout<<endl<<"TicTacToe Using LinkedList"<<endl;
  cout<<"CREATED BY (624,616,601) DSA PROJECT";
  cout<<endl<<endl;
  cout<<"      -------------"<<endl;
  cout<<"      | "<<temp->data<<"   ";//1
  cout<<temp->next->data<<"   ";//2
  cout<<temp->next->next->data<<" |"<<endl<<endl;//3
  cout<<"      | "<<temp->next->next->next->data<<"   ";//4
  cout<<temp->next->next->next->next->data<<"   ";//5
  cout<<temp->next->next->next->next->next->data<<" |"<<endl<<endl;//6
  cout<<"      | "<<temp->next->next->next->next->next->next->data<<"   ";//7
  cout<<temp->next->next->next->next->next->next->next->data<<"   ";//8
  cout<<temp->next->next->next->next->next->next->next->next->data<<" |"<<endl;//9
  cout<<"      -------------"<<endl;
}
int Condition(){
	Node *temp = start;
	int cond;
	if(temp->data == 'X' && temp->next->data == 'X' && temp->next->next->data == 'X'){
		cond = 1;
	}else if(temp->next->next->next->data == 'X' && temp->next->next->next->next->data == 'X' && temp->next->next->next->next->next->data == 'X'){
		cond = 1;
	}else if(temp->next->next->next->next->next->next->data == 'X' && temp->next->next->next->next->next->next->next->data == 'X' && temp->next->next->next->next->next->next->next->next->data == 'X'){
		cond = 1;
	}else if(temp->data == 'X' && temp->next->next->next->data == 'X'  && temp->next->next->next->next->next->next->data == 'X'){
		cond = 1;
	}else if(temp->next->data == 'X' && temp->next->next->next->next->data == 'X' && temp->next->next->next->next->next->next->next->next->data == 'X'){
		cond = 1;
	}else if(temp->next->next->data == 'X' && temp->next->next->next->next->next->data == 'X' &&  temp->next->next->next->next->next->next->next->next->data == 'X'){
		cond = 1;
	}else if(temp->data == 'X' && temp->next->next->next->next->data == 'X' &&  temp->next->next->next->next->next->next->next->next->data == 'X'){
		cond = 1;
	}else if(temp->next->next->data == 'X' && temp->next->next->next->next->data == 'X' && temp->next->next->next->next->next->next->data == 'X'){
		cond = 1;
	}else if(temp->data == 'O' && temp->next->data == 'O' && temp->next->next->data == 'O'){
		cond = 2;
	}else if(temp->next->next->next->data == 'O' && temp->next->next->next->next->data == 'O' &&  temp->next->next->next->next->next->data == 'O'){
		cond = 2;
	}else if(temp->next->next->next->next->next->next->data == 'O' && temp->next->next->next->next->next->next->next->data == 'O' && temp->next->next->next->next->next->next->next->next->data == 'O'){
		cond = 2;
	}else if(temp->data == 'O' && temp->next->next->next->data == 'O' && temp->next->next->next->next->next->next->data == 'O'){
		cond = 2;
	}else if(temp->next->data == 'O' && temp->next->next->next->next->data == 'O' && temp->next->next->next->next->next->next->next->next->data == 'O'){
		cond = 2;
	}else if(temp->next->next->data == 'O' && temp->next->next->next->next->next->data == 'O' && temp->next->next->next->next->next->next->next->next->data == 'O'){
		cond = 2;
	}else if(temp->data == 'O' && temp->next->next->next->next->data == 'O' &&  temp->next->next->next->next->next->next->next->next->data == 'O'){
		cond = 2;
	}else if(temp->next->next->data == 'O' && temp->next->next->next->next->data == 'O' && temp->next->next->next->next->next->next->data == 'O'){
		cond = 2;
	}else{
		cond = 0;
	}
	return cond;
}
void InsertPlayer(){
	Node *temp = start;
	char choice;
	int pos;
	cout<<endl<<"Enter 'X' for Player 1 and 'O' for Player 2 : ";
	cin>>choice;
	cout<<"Enter Index Where You Want to Insert: ";
	cin>>pos;
	if(pos == 0){
		temp->data = choice;
	}
	else if(pos == 1){
		temp->next->data = choice;
	}
	else if(pos == 2){
		temp->next->next->data = choice;
	}
	else if(pos == 3){
		temp->next->next->next->data = choice;
	}
	else if(pos == 4){
		temp->next->next->next->next->data = choice;
	}
	else if(pos == 5){
		temp->next->next->next->next->next->data = choice;
	}
	else if(pos == 6){
		temp->next->next->next->next->next->next->data = choice;
	}
	else if(pos == 7){
		temp->next->next->next->next->next->next->next->data = choice;

	}
	else if(pos == 8){
		temp->next->next->next->next->next->next->next->next->data = choice;
	}
	else{
		cout<<endl<<"Enter Number Between 0-8";
	}
}
};

int main() {
  LinkedList l;
  l.Board();
  l.DisplayBoard();
  int con;
  for(int i=0;i<9;i++){
	  l.InsertPlayer();
  	  l.DisplayBoard();
	  con = l.Condition();
	  if(con == 1){
		  cout<<endl<<"Player X Wins."<<endl;
		  break;
	  }else if(con == 2){
		  cout<<endl<<"Player O Wins."<<endl;
		  break;
		}
  }
}
