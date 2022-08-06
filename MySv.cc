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
    system("systeminfo");
    cout << "[" << time.str() << "]" << "  Tool started" << endl;
    cout << "[" << time.str() << "]" << "  Creating restore point" << endl;
    system("cd src & start restore_point.bat & cd ..");
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
    cout << "[" << time.str() << "]" << "  Running Rkill" << endl;
    system("cd scan_tools & start rkill.exe & cd ..");
    cout << "[" << time.str() << "]" << "  Done" << endl;
    cout << "[" << time.str() << "]" << "  Running Windows Defender scan" << endl;
    system("cd src & start Win_Def_scan.bat & cd ..");
    cout << "[" << time.str() << "]" << "  Opening Malwarebytes setup" << endl;
    system("cd scan_tools & start MBSetup.exe & cd ..");
    cout << "[" << time.str() << "]" << "  Done" << endl;
    cout << "[" << time.str() << "]" << "  Running malwarebytes scan" << endl;
    system("cd scan_tools & mbstcmd-1.0.12.251.exe /y /cleanup /noreboot /nopr /dev");
}