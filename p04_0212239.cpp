//File Name:p04_0212239.cpp
//Author:�ΰ���
//Email Address:howarder3@gmail.com
//Assignment Number:4
//Description:Use c++ to find the closest number if it is invalid.
//Last Changed:October 28,2013

#include<iostream>
using namespace std;

int main()
{
	
	//�ޤJ�ܼ�
	int language,temperature;
	int hundredth,tenth,first;
	int hundredth_big,tenth_big,first_big;
	int hundredth_small,tenth_small,first_small;
	char again;
	
	//�j��
    do
    {   
		//�j��ɲM���e��
		system("cls");
		//�I������
		cout<<"*********************B a c k g r o u n d*********************\n"    
			<<"The keypad on your oven is used to enter the desired baking temperature\n"
			<<"and is arranged like the digits on a phone.\n"
/*  		<<"�z�w�w�s�w�w�s�w�w�{\n"
			<<"�x�@1 �x�@2 �x�@3 �x\n"
			<<"�u�w�w�q�w�w�q�w�w�t\n"
			<<"�x�@4 �x�@5 �x�@6 �x\n"
			<<"�u�w�w�q�w�w�q�w�w�t\n"
			<<"�x�@7 �x�@8 �x�@9 �x\n"
			<<"�|�w�w�q�w�w�q�w�w�}\n"
			<<"�@�@�@�x�@0 �x�@�@�@\n"
�@�@�@�@�@�@<<"�@�@�@�|�w�w�}�@�@�@\n"*/   //��c++���G���䴩�o�ǯS��Ÿ�
	  		<<"Unfortunately the circuitry is damaged and the digits in the leftmost\n"
			<<"column no longer function. In other words, the digits 1, 4, and 7 do not work.\n"
			<<"If a recipe calls for a temperature that can��t be entered, \n"
			<<"then you would like to substitute a temperature that can be entered.\n"
			<<"*************************************************************\n\n";
		re_input:   //��J���~�ɸ��^���B
		
		//��ܻy��
		cout<<"Please enter the language which you want to start the program�A\n"   
			<<"press 1 for English�A�Y�n����п�J2�G ";
		cin>> language;
		cout<<endl;		
			if(language == 1)
				{system("cls");
				//�n�D���
				re_input_english:
				cout<<"Enter the desired temperature(only 0-999 are valid.) : ";
				cin>> temperature;
				//�p��L�{
				hundredth=temperature/100;
				tenth=(temperature-(hundredth*100))/10;
				first=temperature-(hundredth*100+tenth*10);
								
				//��X
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
								
				//�߰ݬO�_�~�����{���A�t�μȰ��ýT�{
				cout<<"\n\nDo you want to run the program again?\nPress 'y' for yes,press 'n' to exit the program"<<endl;
				cin>>again;
				cout<<"\n#Remind�G"<<endl;
				cout<<"'Program closed' or'start next program' will clean all the data.Be sure that you note them.\n"
					<<"If you sure that you note them.Press 'Enter' for next step.\n\n\n"<<endl;
				system("PAUSE");}
			
			else if(language == 2)
				{system("cls");
				//�n�D���
			    re_input_chinese:
				cout<<"�п�J�A�Q�n���ū�(�u�श��0-999����) : ";
				cin>> temperature;
				//�p��L�{
				hundredth=temperature/100;
				tenth=(temperature-(hundredth*100))/10;
				first=temperature-(hundredth*100+tenth*10);
								
				//��X
				if(temperature>999||temperature<0)	
				{cout<<"��J���~!�ЦA�դ@��!"<<endl;
				goto re_input_chinese;}

				else if(hundredth==1||hundredth==4||hundredth==7)
					{hundredth_big=hundredth+1;
					 hundredth_small=hundredth-1;
					 cout<<"�U�@�ӳ̤j�ū׬O�G "<<hundredth_big<<"00"<<endl; 
					 cout<<"�U�@�ӳ̤p�ū׬O�G "<<hundredth_small<<"99"<<endl;}
				else if(tenth==1||tenth==4||tenth==7)
					{tenth_big=tenth+1;
					 tenth_small=tenth-1;
					 cout<<"�U�@�ӳ̤j�ū׬O�G "<<hundredth<<tenth_big<<"0"<<endl; 
					 cout<<"�U�@�ӳ̤p�ū׬O�G "<<hundredth<<tenth_small<<"9"<<endl;}
				else if(first==1||first==4||first==7) 
					{first_big=first+1;
					 first_small=first-1;
					 cout<<"�U�@�ӳ̤j�ū׬O�G "<<hundredth<<tenth<<first_big<<endl; 
					 cout<<"�U�@�ӳ̤p�ū׬O�G "<<hundredth<<tenth<<first_small<<endl;}
				else	
					{cout<<"�U�@�ӳ̤j�ū׬O�G "<<temperature<<endl; 
					 cout<<"�U�@�ӳ̤p�ū׬O�G "<<temperature<<endl;}

				//�߰ݬO�_�~�����{���A�t�μȰ��ýT�{
				cout<<"\n\n�аݱz�O�_�n�A�@������{��?�O���ܽХ�y�A�n�h�X�{�����ܽХ�n"<<endl;
				cin>>again;
				cout<<"\n#�K�ߤp�����G"<<endl;
				cout<<"�u�t�������v�Ρu����U�@���B��v�ɱN�|�M��������ơA�нT�{�z����Ƥw�O�U�ӡC\n"
					<<"�Y�z�w�T�{�O�U�A�ЦA���@���uEnter��v�H����U�@�ӨB�J�C\n\n\n"<<endl;
				system("PAUSE");}
				 
			else
			//��J���~
			{cout<<"You input a invalid number!Please try again!"<<endl;
			goto re_input;}
	
    //�̨ϥΪ̵������צA�@������{���������{��
    } while (again=='y'||again=='Y');
	
	return 0;
}