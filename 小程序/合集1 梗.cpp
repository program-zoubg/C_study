#include <iostream>
#include <string>
#include <Windows.h> 
using namespace std;

int main()
{
	cout<<"本互动故事选自合集：搞笑故事之离谱合集"<<endl;
	cout<<"本故事原创：ZJL。未经允许，禁止盗用/篡改！！！"<<endl;
	cout<<endl<<"本互动故事会根据你的选择有多个结局，至于几个结局，由读者自己探索。\n读者必须找到唯一活着的结局才算赢。"<<endl;
	char yn;
	bool k=false;
	cout<<"\n是否开始(y/n)？";
	yn = getchar();
	if (yn=='y'||yn=='Y') k=true;
	
	// 故事开始
	if(k){
		char unit[80]="你的名字叫小帅，特别喜欢花和鸡，这天，你突然哭了，为什么？", c;
		for(int i=0; i<80; i++){
			Sleep(20);
			cout<<unit[i];
		}
		cout<<endl<<"A.*你太美不火了   B.这是计划的一部分:";
		cin>>c;
		if(c=='a'||c=='A') {
			char j[300]="因为*你太美不火了，你很伤心，生怕哪天小黑子闯进你家夺走你篮球，然后黑你家哥哥。\n你觉得这件事很诡异，于是给黑猫警长报了警，半路遇到了小猪佩奇。可是你却觉得乔治很幼稚，于是说：";
			for(int i=0; i<200; i++){
				Sleep(20);
				cout<<j[i];
			}
			cout<<endl<<"A.“乔治，你想去FBL家里喝个茶吗？”   B.“乔治，一起去买长安汽车吧！”";
			cin>>c;
			if(c=='a'||c=='A') {
				char j[300]="乔治说：“太TM棒了，现在走吗？”，他一脸兴奋地看着你。你说：";
				for(int i=0; i<200; i++){
					Sleep(20);
					cout<<j[i];
				}
				cout<<endl<<"A.“乔治，走吧！”   B.“乔治，我叫你走还真走，还不滚回家去补作业，小心黑你家哥哥！”";
				cin>>c;
				if(c=='a'||c=='A') {
					char j[400]="乔治进了FBL喝茶，FBL看他不爽，把他枪决了。你很伤心，因重度抑郁症而死。\n-------------------------达成结局1-------------------------（结束）";
					for(int i=0; i<400; i++){
						Sleep(20);
						cout<<j[i];
					} 
				} else if (c=='b'||c=='B') {
					char j[400]="你打死了乔治，FBL找上你家，你拿起篮球过度激动，FBL将你枪决了。\n-------------------------达成结局2-------------------------（结束）";
					for(int i=0; i<400; i++){
						Sleep(20);
						cout<<j[i];
					}
				} 
			} else if (c=='b'||c=='B') {
				char j[300]="“长安汽车，好嘞！”乔治满脸兴奋地说。你说：";
				for(int i=0; i<200; i++){
					Sleep(20);
					cout<<j[i];
				}
				cout<<endl<<"A.“一起去买长安汽车吧！去偷罗辑家。”   B.“滚！还想黑我家罗辑？！”";
				cin>>c;
				if(c=='a'||c=='A') {
					char j[400]="乔治答应了，但是因为黑猫警长找不到你了，于是用长安汽车撞到了你的房子，你无家可归，最终死了。\n-------------------------达成结局3-------------------------（结束）";
					for(int i=0; i<400; i++){
						Sleep(20);
						cout<<j[i];
					}
				} else if (c=='b'||c=='B') {
					char j[400]="你将乔治训得屁滚尿流，乔治很恨你，在圣诞节前夕谋杀了你。\n-------------------------达成结局4-------------------------（结束）";
					for(int i=0; i<400; i++){
						Sleep(20);
						cout<<j[i];
					}
				} 
			}
		} else if (c=='b'||c=='B') {
			char j[300]="你在大路上悠闲地逛着，突然精神失常，闯进了一家店，为什么？";
			for(int i=0; i<200; i++){
				Sleep(20);
				cout<<j[i];
			}
			cout<<endl<<"A.遇到了警察   B.神经病发作";
			cin>>c;
			if(c=='a'||c=='A') {
				char j[400]="警察看到你，直接拿起电棍，手上仅有一个篮球的你根本防不住，没了。\n-------------------------达成结局5-------------------------（结束）";
				for(int i=0; i<400; i++){
					Sleep(20);
					cout<<j[i];
				}
			} else if (c=='b'||c=='B') {
				char j[400]="看到你有病，旁边的人立马叫了救护车，你成功摆脱的病情，最终过上了平平安安的小日子。\n-------------------------达成结局6-------------------------（成功）";
				for(int i=0; i<400; i++){
					Sleep(20);
					cout<<j[i];
				}
			} 
		} 
	}
		
	
	return 0;
}

