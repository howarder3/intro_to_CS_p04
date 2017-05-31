//File Name:p04_0212239.cpp
//Author:翁健豪
//Email Address:howarder3@gmail.com
//Assignment Number:4
//Description:Use c++ to find the closest number if it is invalid.
//Last Changed:October 28,2013

#include<iostream>
using namespace std;

int main()
{
	
	//引入變數
	int language,temperature;
	int hundredth,tenth,first;
	int hundredth_big,tenth_big,first_big;
	int hundredth_small,tenth_small,first_small;
	char again;
	
	//迴圈
    do
    {   
		//迴圈時清除畫面
		system("cls");
		//背景介紹
		cout<<"*********************B a c k g r o u n d*********************\n"    
			<<"The keypad on your oven is used to enter the desired baking temperature\n"
			<<"and is arranged like the digits on a phone.\n"
/*  		<<"┌──┬──┬──┐\n"
			<<"│　1 │　2 │　3 │\n"
			<<"├──┼──┼──┤\n"
			<<"│　4 │　5 │　6 │\n"
			<<"├──┼──┼──┤\n"
			<<"│　7 │　8 │　9 │\n"
			<<"└──┼──┼──┘\n"
			<<"　　　│　0 │　　　\n"
　　　　　　<<"　　　└──┘　　　\n"*/   //←c++似乎不支援這些特殊符號
	  		<<"Unfortunately the circuitry is damaged and the digits in the leftmost\n"
			<<"column no longer function. In other words, the digits 1, 4, and 7 do not work.\n"
			<<"If a recipe calls for a temperature that can’t be entered, \n"
			<<"then you would like to substitute a temperature that can be entered.\n"
			<<"*************************************************************\n\n";
		re_input:   //輸入錯誤時跳回此處
		
		//選擇語言
		cout<<"Please enter the language which you want to start the program，\n"   
			<<"press 1 for English，若要中文請輸入2： ";
		cin>> language;
		cout<<endl;		
			if(language == 1)
				{system("cls");
				//要求資料
				re_input_english:
				cout<<"Enter the desired temperature(only 0-999 are valid.) : ";
				cin>> temperature;
				//計算過程
				hundredth=temperature/100;
				tenth=(temperature-(hundredth*100))/10;
				first=temperature-(hundredth*100+tenth*10);
								
				//輸出
				if(temperature>999||temperature<0)	
				{cout<<"You input a invalid number!Please try again!"<<endl;
				goto re_input_english;}

				if(hundredth==1||hundredth==4||hundredth==7)
					{hundredth_big=hundredth+1;
					 hundredth_small=hundredth-1;
					 cout<<"the next largest temperature is "<<hundredth_big<<"00"<<endl; 
					 cout<<"the next smallest temperature is "<<hundredth_small<<"99"<<endl;}
				else if(tenth==1||tenth==4||tenth==7)
					{tenth_big=tenth+1;
					 tenth_small=tenth-1;
					 cout<<"the next largest temperature is "<<hundredth<<tenth_big<<"0"<<endl; 
					 cout<<"the next smallest temperature is "<<hundredth<<tenth_small<<"9"<<endl;}
				else if(first==1||first==4||first==7) 
					{first_big=first+1;
					 first_small=first-1;
					 cout<<"the next largest temperature is "<<hundredth<<tenth<<first_big<<endl; 
					 cout<<"the next smallest temperature is "<<hundredth<<tenth<<first_small<<endl;}
				else	
					{cout<<"the next largest temperature is "<<temperature<<endl; 
					 cout<<"the next smallest temperature is "<<temperature<<endl;}
								
				//詢問是否繼續執行程式，系統暫停並確認
				cout<<"\n\nDo you want to run the program again?\nPress 'y' for yes,press 'n' to exit the program"<<endl;
				cin>>again;
				cout<<"\n#Remind："<<endl;
				cout<<"'Program closed' or'start next program' will clean all the data.Be sure that you note them.\n"
					<<"If you sure that you note them.Press 'Enter' for next step.\n\n\n"<<endl;
				system("PAUSE");}
			
			else if(language == 2)
				{system("cls");
				//要求資料
			    re_input_chinese:
				cout<<"請輸入你想要的溫度(只能介於0-999之間) : ";
				cin>> temperature;
				//計算過程
				hundredth=temperature/100;
				tenth=(temperature-(hundredth*100))/10;
				first=temperature-(hundredth*100+tenth*10);
								
				//輸出
				if(temperature>999||temperature<0)	
				{cout<<"輸入錯誤!請再試一次!"<<endl;
				goto re_input_chinese;}

				else if(hundredth==1||hundredth==4||hundredth==7)
					{hundredth_big=hundredth+1;
					 hundredth_small=hundredth-1;
					 cout<<"下一個最大溫度是： "<<hundredth_big<<"00"<<endl; 
					 cout<<"下一個最小溫度是： "<<hundredth_small<<"99"<<endl;}
				else if(tenth==1||tenth==4||tenth==7)
					{tenth_big=tenth+1;
					 tenth_small=tenth-1;
					 cout<<"下一個最大溫度是： "<<hundredth<<tenth_big<<"0"<<endl; 
					 cout<<"下一個最小溫度是： "<<hundredth<<tenth_small<<"9"<<endl;}
				else if(first==1||first==4||first==7) 
					{first_big=first+1;
					 first_small=first-1;
					 cout<<"下一個最大溫度是： "<<hundredth<<tenth<<first_big<<endl; 
					 cout<<"下一個最小溫度是： "<<hundredth<<tenth<<first_small<<endl;}
				else	
					{cout<<"下一個最大溫度是： "<<temperature<<endl; 
					 cout<<"下一個最小溫度是： "<<temperature<<endl;}

				//詢問是否繼續執行程式，系統暫停並確認
				cout<<"\n\n請問您是否要再一次執行程式?是的話請打y，要退出程式的話請打n"<<endl;
				cin>>again;
				cout<<"\n#貼心小提醒："<<endl;
				cout<<"「系統關閉」或「執行下一次運算」時將會清除全部資料，請確認您的資料已記下來。\n"
					<<"若您已確認記下，請再按一次「Enter鍵」以執行下一個步驟。\n\n\n"<<endl;
				system("PAUSE");}
				 
			else
			//輸入錯誤
			{cout<<"You input a invalid number!Please try again!"<<endl;
			goto re_input;}
	
    //依使用者給的答案再一次執行程式或關閉程式
    } while (again=='y'||again=='Y');
	
	return 0;
}