#ifndef DRIVER_H_INCLUDED
#define DRIVER_H_INCLUDED
#include "video_library.h"
class driver
{
    public:
        void start();

};

void driver::start()
{
   Video_library new_video_libarary;
    Librarian librarian("James", "Bond", "password", 180101005);
    int option;
    option = 0;
    while(option < 4)
    {
        cout<<"\n*****User Type******\n"<<endl;
        cout<<" 1.for Librarian "<<endl;
        cout<<" 2.for Register User"<<endl;
        cout<<" 3.for Guest User"<<endl;
        cout<<" 4.for coming out from project"<<endl;
        cout<<" Enter option : ";
        cin>>option;
        if(option == 1)
        {
            bool is_librarian = librarian.verify();
            if(is_librarian)
            {
                int option_1 = 0;
                while(option_1 < 5)
                {
                cout<<"\n******Menu Driver******\n"<<endl;
                cout<<" 1.For add video in Library"<<endl;
                cout<<" 2.For remove video from library"<<endl;
                cout<<" 3.For seeing collection of video from library"<<endl;
                cout<<" 4.For seeing all user Detail"<<endl;
                cout<<" 5.Main menu\n"<<endl;
                cout<<" Enter your option : ";
                cin>>option_1;
                if(option_1 == 1 )
                     librarian.add_video_to_library(new_video_libarary);
                else if(option_1 == 2)
                     librarian.remove_video_from_library(new_video_libarary);
                else if(option_1 == 3)
                     new_video_libarary.see_all_collection();
                else if(option_1 == 4)
                      librarian.see_all_user_detail(new_video_libarary);
                 }
            }

        }
        else if(option == 2)
        {
             int option_2;
             Registered_user user;
             pair<bool, Registered_user> is_registered_user = user.verify(new_video_libarary);
             if(is_registered_user.first == true)
             {
                option_2 = 0;
                while(option_2 < 6)
                {
                     cout<<"\n*******MENU DRIVER******\n"<<endl;
                     cout<<" 1.For rent new video"<<endl;
                     cout<<" 2.For returning video"<<endl;
                     cout<<" 3.To look on library collection"<<endl;
                     cout<<" 4.To Cancel membership"<<endl;
                     cout<<" 5.To see User account detail"<<endl;
                     cout<<" 6.Main menu"<<endl;
                     cout<<" Enter your own choice : ";
                     cin>>option_2;
                     if(option_2 == 1)
                         is_registered_user.second.rent_video(new_video_libarary, is_registered_user.second);

                     else if(option_2 == 2)
                         is_registered_user.second.return_video(new_video_libarary, is_registered_user.second);

                     else if(option_2 == 3)
                         is_registered_user.second.see_all_video_collection(new_video_libarary);

                     else if(option_2 == 4)
                         new_video_libarary.remove_user(is_registered_user.second);
                     else if(option_2 == 5)
                         is_registered_user.second.user_account_detail(is_registered_user.second);

                }
             }

        }
        else if(option == 3)
        {
               int option_3;
               Guest_user user;
               option_3 = 0;
               while(option_3 < 3)
               {
                   cout<<"\n*********MENU DRIVER********\n"<<endl;
                   cout<<" 1.For register"<<endl;
                   cout<<" 2.For see video collection"<<endl;
                   cout<<" 3.Main menu"<<endl;
                   cout<<" Enter your option: ";
                   cin>>option_3;
                   if(option_3 == 1)
                   {
                       user.sign_up(new_video_libarary);
                       cout<<"\n*************You have registered successfully*********\n"<<endl;
                   }
                   if(option_3 == 2)
                   {
                       user.see_all_video_collection(new_video_libarary);
                   }
               }
        }
    }
    cout<<"\n*******Thank you very much for visiting our project*****\n"<<endl;


}


#endif // DRIVER_H_INCLUDED
