#include <iostream>
#include <windows.h>
#include <sstream>

using namespace std;

int main() {
    string response;
    cout << " =====================================Attention=====================================" << endl;
    cout << "| this tool was created to remove malware, repair and speed up your PC, in case of  |" << endl;
    cout << "| problems after using the software you can use the automatically created restore   |" << endl;
    cout << "| point, the creator are not responsible for the use you make of this software      |" << endl;
    cout << "|                                                                                   |" << endl;
    cout << "| credit: https://github.com/LunarStone292                                          |" << endl;
    cout << " ===================================================================================" << endl;
    cout << endl << "type: I_AGREE to accept the terms of service" << endl << endl;
    cout << "Response ==> ";
    cin >> response;
    if(response == "I_AGREE"){
        cout << "";
    }
    else{
        return 0;
    }

    SYSTEMTIME tempo;
    SYSTEMTIME tempoLocale;
    GetSystemTime(&tempo);
    GetLocalTime(&tempoLocale);

    stringstream time;
    string dir = "C:\\Users\\MySv_AppData";

    time << tempo.wHour << ":" << tempo.wMinute << ":" << tempo.wSecond;

    system("cls");
    cout << " ____________________________________________________________________________________" << endl;
    cout << "||                                                                                  ||" << endl;
    cout << "||                                    System Info                                   ||" << endl << endl;
    system("systeminfo")
    cout << "[" << time.str() << "]" << "  Tool started" << endl;
    cout << "[" << time.str() << "]" << "  Creating restore point" << endl;
    system("src/restore_point.bat");
    cout << "[" << time.str() << "]" << "  Done" << endl;
    cout << "[" << time.str() << "]" << "  Checking disk integrity..." << endl;
    system("chkdsk C: /F /r");
    system("sfc /SCANNOW");
    cout << "[" << time.str() << "]" << "  Done" << endl;
    cout << "[" << time.str() << "]" << "  Cleaning DNS cache" << endl;
    system("ipconfig /displaydns");
    cout << "[" << time.str() << "]" << "  Done" << endl;
    cout << "[" << time.str() << "]" << "  Creating folder in " << dir << endl;
    system("mkdir C:\\Users\\MySv_AppData");
    cout << "[" << time.str() << "]" << "  Done" << endl;
    cout << "[" << time.str() << "]" << "  Downloading Rkill" << endl;
    system("curl -L download.bleepingcomputer.com/grinler/rkill.com -O C:\\Users\\MySv_AppData");
    cout << "[" << time.str() << "]" << "  Done" << endl;
    cout << "[" << time.str() << "]" << "  Running Rkill" << endl;
    system("C:\\Users\\MySv_AppData\\rkill.exe");
    cout << "[" << time.str() << "]" << "  Done" << endl;
    cout << "[" << time.str() << "]" << "  Running Windows Defender scan" << endl;
    system("src/Win_Def_scan.bat");
    cout << "[" << time.str() << "]" << "  Downloading Malwarebytes" << endl;
    system("mkdir C:\\Users\\MySv_AppData");
    system("curl -L https://data-cdn.mbamupdates.com/web/mb4-setup-consumer/MBSetup.exe -o C:\\Users\\MySv_AppData\\MBSetup.exe");
    cout << "[" << time.str() << "]" << "  Done" << endl;
    cout << "[" << time.str() << "]" << "  Opening Malwarebytes setup" << endl;
    system("C:\\Users\\MySv_AppData\\MBSetup.exe");
    cout << "[" << time.str() << "]" << "  Done" << endl;
}