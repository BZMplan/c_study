//signal()
#include <iostream>
#include <csignal>
#include<unistd.h>

using namespace std;

void signalHandler(int signum){
    cout << "Interrupt signal ("<< signum <<") received."<< endl;
    
    exit(signum);

}

int main(int argc, char const *argv[])
{
    signal(SIGINT, signalHandler); 
    while (1)
    {

        cout << "Going to sleep ...."<< endl;
        sleep(1);

        /* code */
    }
     
    return 0;
}
