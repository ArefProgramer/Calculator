#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include <math.h>
#include "ui.c"
char buffer[256];
char name[50] = "Calculator++";
int a, b,d,c;

HWND hwndTextbox; // Define the textbox globally

// Function prototype
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Register the window class
    WNDCLASS wc = { };

    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1); // Set background color to default system color
    wc.lpszClassName = name;

    RegisterClass(&wc);

    // Create the window
    HWND hwnd = CreateWindowEx(
        0,                              
        name, 
        name,               
        WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU,  // Window style without resize
        CW_USEDEFAULT, CW_USEDEFAULT, 175, 288,
        NULL,       
        NULL,       
        hInstance,  
        NULL        
    );

    if (hwnd == NULL) {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);

    // Run the message loop
    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;

        case WM_CREATE:
            hwndTextbox = CreateWindow(
                "EDIT", "",
                WS_CHILD | WS_VISIBLE | WS_BORDER | ES_LEFT,
                0, 0, 170, 20,
                hwnd, (HMENU) 16, (HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL
            );
            windowel(hwnd);
            break;

        case WM_COMMAND:
            if (LOWORD(wParam) == 1) {
                // Get current text
                GetWindowText(hwndTextbox, buffer, sizeof(buffer));

                // Append "1" to the current text
                strcat(buffer, "1");

                // Set new text
                SetWindowText(hwndTextbox, buffer);
            }
            
             else if(LOWORD(wParam) == 2) {
                // Get current text
                GetWindowText(hwndTextbox, buffer, sizeof(buffer));

                // Append "1" to the current text
                strcat(buffer, "2");

                // Set new text
                SetWindowText(hwndTextbox, buffer);
            }
              else if(LOWORD(wParam) == 3) {
                // Get current text
                GetWindowText(hwndTextbox, buffer, sizeof(buffer));

                // Append "1" to the current text
                strcat(buffer, "3");

                // Set new text
                SetWindowText(hwndTextbox, buffer);
            }
              else if(LOWORD(wParam) == 4) {
                // Get current text
                GetWindowText(hwndTextbox, buffer, sizeof(buffer));

                // Append "1" to the current text
                strcat(buffer, "4");

                // Set new text
                SetWindowText(hwndTextbox, buffer);
            }
              else if(LOWORD(wParam) == 5) {
                // Get current text
                GetWindowText(hwndTextbox, buffer, sizeof(buffer));

                // Append "1" to the current text
                strcat(buffer, "5");

                // Set new text
                SetWindowText(hwndTextbox, buffer);
            }
              else if(LOWORD(wParam) == 6) {
                // Get current text
                GetWindowText(hwndTextbox, buffer, sizeof(buffer));

                // Append "1" to the current text
                strcat(buffer, "6");

                // Set new text
                SetWindowText(hwndTextbox, buffer);
            }
              else if(LOWORD(wParam) == 7) {
                // Get current text
                GetWindowText(hwndTextbox, buffer, sizeof(buffer));

                // Append "1" to the current text
                strcat(buffer, "7");

                // Set new text
                SetWindowText(hwndTextbox, buffer);
            }
              else if(LOWORD(wParam) == 8) {
                // Get current text
                GetWindowText(hwndTextbox, buffer, sizeof(buffer));

                // Append "1" to the current text
                strcat(buffer, "8");

                // Set new text
                SetWindowText(hwndTextbox, buffer);
            }

              else if(LOWORD(wParam) == 9) {
                // Get current text
                GetWindowText(hwndTextbox, buffer, sizeof(buffer));

                // Append "1" to the current text
                strcat(buffer, "9");

                // Set new text
                SetWindowText(hwndTextbox, buffer);
            }
              else if(LOWORD(wParam) == 0) {
                // Get current text
                GetWindowText(hwndTextbox, buffer, sizeof(buffer));

                // Append "1" to the current text
                strcat(buffer, "0");

                // Set new text
                SetWindowText(hwndTextbox, buffer);
            }else if(LOWORD(wParam) == 11) {
                if(d==6){
                    MessageBoxA(hwnd, "You have not selected your operation!","Calculator++ - Error" ,MB_ICONERROR);
                }else{

                
               b=atoi(buffer);

switch(d){
case 0:
c=a+b;
break;
case 1:
c=a-b;
break;
case 2:
c=a*b;
break;
case 3:
c=a/b;
break;
case 4:
c= pow (a,b);  // 2^3
//c=a^b;
break;
case 5:
c=a%b;
break;



}


sprintf(buffer,"%d",c);
  SetWindowText(hwndTextbox, buffer);
  d=6;
a=c;
            }
            }else if(LOWORD(wParam) == 1003) {
                
                  d=3;  

                a=atoi(buffer);
                
                 SetWindowText(hwndTextbox, "");
              }    else if(LOWORD(wParam) == 17) {
               
  MessageBoxA(hwnd, "Calculator++ Version 1.0.0 Copyright (C) 2025\nCreate by Aref Sadegh","Calculator++ - About" ,MB_ICONINFORMATION);
              
            }
               else if(LOWORD(wParam) == 18) {
        a=0;
    b=0;
    c=0;   
    
    SetWindowText(hwndTextbox, "");
    
    strcpy(buffer,"");
                
            }
             else if(LOWORD(wParam) == 19) {
                 int askmsg = MessageBox(hwnd, "Do you want to Exit ?", "Calculator++ - Exit", MB_YESNO | MB_ICONQUESTION);
                if(askmsg==IDYES){
                  exit(1);
                }
            }
            
               else if(LOWORD(wParam) == 1000) {
               d=2;  
                a=atoi(buffer);
                
                 SetWindowText(hwndTextbox, "");   
                

                // Set new text
                
            
                
            }
               else if(LOWORD(wParam) == 1001) {
                
                  d=0;  
                a=atoi(buffer);
                
                 SetWindowText(hwndTextbox, "");   
	
               
               }else if(LOWORD(wParam) == 1002) {
                
                  d=1;  
                a=atoi(buffer);
                
                 SetWindowText(hwndTextbox, "");   
                
            
            }else if(LOWORD(wParam) == 1005) {
                
                  d=5;  
                a=atoi(buffer);
                
                 SetWindowText(hwndTextbox, "");   
                
            }else if(LOWORD(wParam) == 1004) {
                
                  d=4;  
                a=atoi(buffer);
                
                 SetWindowText(hwndTextbox, "");   
                
            }
               
              break;
     
            }
            
            

    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

