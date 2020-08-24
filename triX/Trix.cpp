#include<iostream>
#include<ctime>

void PrintIntro(int Difficulty){
    // Print intro
    std::cout << "\nX-deltaSystem: Level " << Difficulty - 1 << " permissions granted.";
    std::cout << "\nAwaiting level " << Difficulty << " numeric access PIN: XXX";
}

void PrintCredits(){
    // Print 
    std::cout << "\nYou are a 1337 haxors. Thanks for playing.";
}

void CleanUp(){
    std::cin.clear(); //clear errors
    std::cin.ignore(); //discard buffers
}

void PrintGameOver(){
    int password;

    while (true){
        std::cout << "\nACCESS DENIED! System lockdown initialized.\nClientPermissions: FALSE\nClientIP: TRUE\nClientLocal: TRUE\n  Regional Airforce base located.\n    Dispatching MQ-9 Reaper.\n";
        std::cout << "\nAwaiting SysAdmin 128 digit ASCCI Initialziation Code: XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
        std::cout << "Payload:";
        // Get Input
        std::cin >> password;
        CleanUp();
    }

}

bool PlayGame(int Difficulty){

    if(Difficulty <= 0){
        PrintGameOver();
    }

    PrintIntro(Difficulty);

    //init variables
    const int IntA = (rand() % Difficulty * 2) + 1;
    const int IntB = (rand() % Difficulty * 2) + 1;
    const int IntC = (rand() % Difficulty * 2) + 1;
    const int IntSum = IntA + IntB + IntC;
    const int IntProduct = IntA * IntB * IntC;
    int IntputA, IntputB, IntputC;

    // Print question dialog
    std::cout << "\n  X+X+X = " << IntSum;
    std::cout << "\n  X*X*X = " << IntProduct;
    std::cout << "\n\nPayload: ";
    // Get Input
    std::cin >> IntputA >> IntputB >> IntputC;

    // React
    //std::cout << "\nYou input: " << IntputA << IntputB << IntputC;
    // Check Input
    if (IntputA == IntA && IntputB == IntB && IntputC == IntC){
        std::cout << "\nPayload>SysKey>Match\nSYS.UPDATE(CLIENT PERMISSIONS)...";
        return true;
    }
    else{
        std::cout << "\nPayload>SysKey>Conflict\nSYS.RELEGATE(CLIENT PERMISSIONS)...";
        return false;
    }



}

int main(){
    srand(time(NULL)); //seed random with system time

    bool GameOver = false;
    int DifficultyLevel = 1;
    int Strikes = 0;

    while (GameOver == false){

        if(Strikes >= 3){
            std::cout << "\nSYS.CLIENT.STRIKES == 3...";
            PrintGameOver();
        }
        else if (Strikes > 0){
            std::cout << "\nSYS.CLIENT.setStrikes(" << Strikes << ")..\nTask Complete..";
        }
        

        bool IsComplete = PlayGame(DifficultyLevel);
        CleanUp();

        if (IsComplete){

            ++DifficultyLevel;

            if (DifficultyLevel > 5){
                GameOver = true;
                PrintCredits();
            }

        }
        else{
            --DifficultyLevel;
            ++Strikes;
        }
        

    }


    
    return 0;

}