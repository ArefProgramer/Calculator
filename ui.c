
void windowel(HWND hwnd){



//Menu
HMENU hMenu = CreateMenu();
HMENU hFileMenu = CreateMenu();

AppendMenu(hMenu, MF_POPUP, (UINT_PTR)hFileMenu, "Program");
AppendMenu(hFileMenu, MF_STRING, 17, "About");
AppendMenu(hFileMenu, MF_SEPARATOR, 000, NULL);
AppendMenu(hFileMenu, MF_STRING, 19, "Exit");
SetMenu(hwnd, hMenu);
            

//Button
int size =50;    
 HWND Button7 = CreateWindow("BUTTON","7",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,0, 22, size, 25,hwnd, (HMENU) 7,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);
 HWND Button8 = CreateWindow("BUTTON","8",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,60, 22, size, 25,hwnd, (HMENU) 8,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);
 HWND Button9 = CreateWindow("BUTTON","9",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,120, 22, size, 25,hwnd, (HMENU) 9,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);


 HWND Button4 = CreateWindow("BUTTON","4",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,0, 60, size, 25,hwnd, (HMENU) 4,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);
 HWND Button5 = CreateWindow("BUTTON","5",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,60, 60, size, 25,hwnd, (HMENU) 5,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);
 HWND Button6 = CreateWindow("BUTTON","6",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,120, 60, size, 25,hwnd, (HMENU) 6,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);


 HWND Button1 = CreateWindow("BUTTON","1",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,0, 98, size, 25,hwnd, (HMENU) 1,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);
 HWND Button2 = CreateWindow("BUTTON","2",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,60, 98, size, 25,hwnd, (HMENU) 2,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);
 HWND Button3 = CreateWindow("BUTTON","3",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,120, 98, size, 25,hwnd, (HMENU) 3,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);


 HWND Button0 = CreateWindow("BUTTON","0",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,0, 136, size, 25,hwnd, (HMENU) 0,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);
HWND Button13 = CreateWindow("BUTTON","*",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,60, 136, size, 25,hwnd, (HMENU) 1000,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);
HWND Button14 = CreateWindow("BUTTON","-",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,120, 136, size, 25,hwnd, (HMENU) 1002,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);
 HWND Button11 = CreateWindow("BUTTON","=",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,120, 214, size, 25,hwnd, (HMENU) 11,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);
 HWND Button15 = CreateWindow("BUTTON","+",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,0, 174, size, 25,hwnd, (HMENU) 1001,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);
HWND Button20 = CreateWindow("BUTTON","C",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,60, 174, size, 25,hwnd, (HMENU) 18,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);
HWND Button21 = CreateWindow("BUTTON","%",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,120, 174, size, 25,hwnd, (HMENU) 1005,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);

HWND Button12= CreateWindow("BUTTON","/",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,0, 214, size, 25,hwnd, (HMENU) 1003,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);

HWND Button111= CreateWindow("BUTTON","T",WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,60, 214, size, 25,hwnd, (HMENU) 1004,(HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);
	
}
