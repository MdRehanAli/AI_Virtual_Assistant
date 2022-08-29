#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<dirent.h>
using namespace std;

void Greetings()
{
    int ch;
    cout<<"*********************** Welcome to AI ********************";

    while(1)
    {
        cout<<"\n\n";

        cout<<"    1. Say Hi.\n";
        cout<<"    2. Ask How are you.\n";
        cout<<"    3. Say Bye.\n";
        cout<<"    4. Clear Screen.\n"<<endl;
        cout<<"Enter option: ";
        cin>>ch;


        if(ch==1)
        {
            PlaySound(TEXT("Audio_files/hi.wav"),NULL,SND_SYNC);
        }

        else if(ch==2)
        {
            PlaySound(TEXT("Audio_files/fine.wav"),NULL,SND_SYNC);
        }

        else if(ch==3)
        {
            PlaySound(TEXT("Audio_files/bye.wav"),NULL,SND_SYNC);
            break;
        }
        else if(ch==4)
        {
            cout<<"    Clearing Screen\n";
            system("CLS");
        }
        else
        {
            cout<<"   Invalid command detected! Try again.";
            PlaySound(TEXT("Audio_files/invalid.wav"),NULL,SND_SYNC);
        }
    }
}
void Apps()
{
    int ch;
    cout<<"*********************** Welcome to AI ********************";

    while(1)
    {
        cout<<"\n\n";
        cout<<"    1. Open Notepad.\n";
        cout<<"    2. Open MS Word.\n";
        cout<<"    3. Open Photo.\n";
        cout<<"    4. Open PDF file.\n";
        cout<<"    5. Play video.\n";
        cout<<"    6. Back.\n";
        cout<<"    7. Clear Screen.\n"<<endl;
        cout<< "Enter option: ";
        cin>>ch;

        STARTUPINFO startInfo={0};
        PROCESS_INFORMATION processInfo={0};


        if(ch==1)
        {
            PlaySound(TEXT("Audio_files/notepad.wav"),NULL,SND_SYNC);
            CreateProcess(TEXT("C:\\WINDOWS\\system32\\notepad.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
        }

        else if(ch==2)
        {
            PlaySound(TEXT("Audio_files/wordpad.wav"),NULL,SND_SYNC);
            CreateProcess(TEXT("C:\\Program Files\\Windows NT\\Accessories\\wordpad.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
        }

        else if(ch==3)
        {
            PlaySound(TEXT("Audio_files/photo.wav"),NULL,SND_SYNC);
            ShellExecute(NULL,"open","D:\\Programming\\Github\\AI_Virtual_Assistant\\Photos\\Rehan.jpg",NULL,NULL,SW_NORMAL);
        }

        else if(ch==4)
        {
            PlaySound(TEXT("Audio_files/file.wav"),NULL,SND_SYNC);
            ShellExecute(NULL,"open","D:\\Programming\\Github\\AI_Virtual_Assistant\\Files\\JavaScript.pdf",NULL,NULL,SW_NORMAL);
        }

        else if(ch==5)
        {
            PlaySound(TEXT("Audio_files/video.wav"),NULL,SND_SYNC);
            -chdir("C:\\Program Files (x86)\\VideoLAN\\VLC");
            system("D:\\Programming\\Github\\AI_Virtual_Assistant\\Videos\\AI.mkv");
        }

        else if(ch==6)
        {
            PlaySound(TEXT("Audio_files/return.wav"),NULL,SND_SYNC);
            break;
        }
        else if(ch==7)
        {
            cout<<"    Clearing Screen\n";
            system("CLS");
        }
        else
        {
            cout<<"   Invalid command detected! Try again.\n";
            PlaySound(TEXT("Audio_files/invalid.wav"),NULL,SND_SYNC);
        }
    }
}
void Browser()
{
    int ch;
    cout<<"*********************** Welcome to AI ********************";

    while(1)
    {
        cout<<"\n\n";
        cout<<"    1. Open Google.\n";
        cout<<"    2. Search in Google.\n";
        cout<<"    3. Search in YouTube.\n";
        cout<<"    4. Close Google.\n";
        cout<<"    5. Back.\n";
        cout<<"    6. Clear Screen.\n"<<endl;
        cout<<"  Enter option: ";
        cin>>ch;

        if(ch==1)
        {
            PlaySound(TEXT("Audio_files/opgoogle.wav"),NULL,SND_SYNC);
            string s="https://www.google.com/";
            ShellExecute(NULL,"open",s.c_str(),NULL,NULL,SW_SHOWNORMAL);
        }

        else if(ch==2)
        {
            cout<<"       Activating Google Search mode ";
            PlaySound(TEXT("Audio_files/search.wav"),NULL,SND_SYNC);
            char text[100];
            cout<<"\n\nEnter the text : ";
            fflush(stdin);
            gets(text);
            string res;

            string s="https://www.google.com/search?q=";
            res=s+text;

            PlaySound(TEXT("Audio_files/opgoogle.wav"),NULL,SND_SYNC);

            ShellExecute(NULL,"open",res.c_str(),NULL,NULL,SW_SHOWNORMAL);
        }

        else if(ch==3)
        {
            cout<<"       Activating YouTube search mode\n";

            PlaySound(TEXT("Audio_files/search.wav"),NULL,SND_SYNC);
            char text[100];
            cout<<"\n\nEnter the text : ";
            fflush(stdin);
            gets(text);
            string res;

            string s="https://www.youtube.com/results?search_query=";

            res=s+text;

            PlaySound(TEXT("Audio_files/youtube.wav"),NULL,SND_SYNC);

            ShellExecute(NULL,"open",res.c_str(),NULL,NULL,SW_SHOWNORMAL);
        }

        else if(ch==4)
        {
            cout<<"       Closing google";
            PlaySound(TEXT("Audio_files/clsgoogle.wav"),NULL,SND_SYNC);
            system("TASKKILL /IM chrome.exe /F");
        }
        else if(ch==5)
        {
            PlaySound(TEXT("Audio_files/return.wav"),NULL,SND_SYNC);
            break;
        }
        else if(ch==6)
        {
            cout<<"    Clearing Screen\n";
            system("CLS");
        }
        else
        {
            cout<<"   Invalid command detected! Try again.\n";
            PlaySound(TEXT("Audio_files/invalid.wav"),NULL,SND_SYNC);
        }
    }
}
void s_r()
{
    int ch;
    cout<<"*********************** Welcome to AI ********************";

    while(1)
    {
        cout<<"\n\n";
        cout<<"    1. Shutdown Pc.\n";
        cout<<"    2. Restart Pc.\n";
        cout<<"    3. Back.\n";
        cout<<"    4. Clear Screen.\n"<<endl;
        cout<< "Enter option: ";
        cin>>ch;

        if(ch==1)
        {
            cout<<"   Shutting down PC";
            PlaySound(TEXT("Audio_files/shutdown.wav"),NULL,SND_SYNC);
            system("C:\\WINDOWS\\System32\\shutdown -s -t 0");
        }

        else if(ch==2)
        {
            cout<<"   Restarting PC";
            PlaySound(TEXT("Audio_files/restart.wav"),NULL,SND_SYNC);
            system("C:\\WINDOWS\\System32\\shutdown -r -t 0");
        }
        else if(ch==3)
        {
            PlaySound(TEXT("Audio_files/return.wav"),NULL,SND_SYNC);
            break;
        }
        else if(ch==4)
        {
            cout<<"    Clearing Screen\n";
            system("CLS");
        }
        else
        {
            cout<<"   Invalid command detected! Try again.\n";
            PlaySound(TEXT("Audio_files/invalid.wav"),NULL,SND_SYNC);
        }
    }
}
void credit()
{
    cout<<"This project is created and developed by\n\n Emran Hossain Fahim\n Md. Rehan Ali\n Abduallah Al Mamun\n\n";
    PlaySound(TEXT("Audio_files/credit.wav"),NULL,SND_SYNC);
}
int main ()
{
    int first_command,o;
    do
    {

        cout <<"\n     Welcome to AI Program"<<endl;
        PlaySound(TEXT("Audio_files/welcome.wav"),NULL,SND_SYNC);
        cout << "\n       1. Activate Program  \n";
        cout << "       2. Credits\n";
        cout << "       3. Exit\n";
        cout << "\n   Enter Option: ";
        cin >> first_command;
        cout<<endl;
        do
        {
            if(first_command == 1)
            {
                PlaySound(TEXT("Audio_files/Activate.wav"),NULL,SND_SYNC);
                cout << "\n       1. Greetings  \n";
                cout << "       2. Open Apps/Files\n";
                cout << "       3. Open Browser\n";
                cout << "       4. PC Shutdown/Restart\n";
                cout << "       5. Clear Screen\n";
                cout << "       6. Back\n";
                cout << "\n   Enter Option: ";
                cin>>o;
                if(o == 1)
                {
                    Greetings();
                }
                else if(o== 2)
                {
                    Apps();
                }
                else if(o== 3)
                {
                    Browser();
                }
                else if(o== 4)
                {
                    s_r();
                }

                else if(o==5)
                {
                    cout<<"    Clearing Screen\n";
                    system("CLS");
                }
                 else if(o==6)
                {
                    PlaySound(TEXT("Audio_files/return.wav"),NULL,SND_SYNC);
                    break;
                }
                else
                {
                    cout<<"   Invalid command detected! Try again.\n";
                    PlaySound(TEXT("Audio_files/invalid.wav"),NULL,SND_SYNC);
                }
            }
        else if(first_command == 2)
        {
            credit();
            break;
        }
        else if(first_command == 3)
        {
            return 0;
        }
        else
        {
            cout<<"   Invalid command detected! Try again.\n";
            PlaySound(TEXT("Audio_files/invalid.wav"),NULL,SND_SYNC);
            break;
        }
        }
        while(1);
        {

        }

    }
    while(first_command!=3);
    {

    }


}

