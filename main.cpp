#include <iostream>
#include <string>
#include <vector>


struct User {
    int id;
    std::string name;
    int age;
    std::string email;
};

int main()
{
//    declare vector
    int id = 1;
    User user;
    std::vector<User> db {};

    bool IS_RUNNING = true;
    std::cout << "Welcome to the Sendgrid Signup application \n";
    while(IS_RUNNING){

        std::cout << "Press 1: Add a new User \n";
        std::cout << "Press 2: Retrieve an existing User \n";
        std::cout << "Press 3: Quit \n";

        try {
            std::string INPUT = "";
            int key;
            std::getline(std::cin,INPUT);
            key = std::stoi(INPUT);

            if(key != 3){
                if(key == 1){
                    system("clear");
                    std::cout << "New User Registration onboarding \n";
                    std::cout << "===================================== \n";

                    user.id = id;

                    std::cout << "Enter the user's name \n";
                    std::getline(std::cin,user.name);

                    std::cout << "Enter the user's age \n";
                    std::string _age;
                    std::getline(std::cin,_age);
                    user.age = std::stoi(_age);

                    std::cout << "Enter the user's email \n";
                    std::getline(std::cin,user.email);

                    db.push_back(user);



                    std::cout << db.at(id-1).name << " successfully added! \n";
                    std::cout << "===================================== \n";
                    std::cout << "===================================== \n";
                    std::cout << "===================================== \n";


                    id= id+1;
                    continue;
                }

                if(key == 2){
                    system("clear");
                    std::cout << "Please enter user ID \n";
                    std::string user_id;
                    std::getline(std::cin,user_id);
                    std::cout << "Searching User... \n";
                    std::cout << "===================================== \n";
                    std::cout << "===================================== \n";
                    std::cout << "===================================== \n";

                    std::cout << "Name: "<< db.at(std::stoi(user_id)).name << std::endl;
                    std::cout << "Age: "<< db.at(std::stoi(user_id)).age << std::endl;
                    std::cout << "Email: "<< db.at(std::stoi(user_id)).email << std::endl;
                    std::cout << "===================================== \n";
                    std::cout << "===================================== \n";
                    std::cout << "===================================== \n";
                    continue;
                }

            }

            if(key == 3 ){
                std::cout << "Exiting Application \n";
                IS_RUNNING = false;
            }

        } catch (std::invalid_argument) {
            system("clear");
            std::cout  << "Wrong Action Key... Try again! \n";
            continue;
        }

    }

    for (int i = 0; i < db.size(); ++i) {
        std::cout << db.at(i).name << std::endl;
    }

}
