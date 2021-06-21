#include <windows.h>

char g_szClassName[]="my_class";

void OnLButtonDown(HWND);
LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);

int _stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevinstance, LPSTR lpszCmdLine, int nCmdShow)
{
 HWND hWnd;
 MSG messages;
 WNDCLASSEX wcl;

 wcl.hInstance=hInstance;
 wcl.lpfnWndProc=WindowProcedure;
 wcl.lpszClassName=g_szClassName;
 wcl.lpszMenuName=NULL;
 wcl.cbClsExtra=0;
 wcl.cbWndExtra=0;
 wcl.style=CS_DBLCLKS;
 wcl.cbSize=sizeof(WNDCLASSEX);
 wcl.hIcon=LoadIcon(NULL, IDI_APPLICATION);
 wcl.hIconSm=LoadIcon(NULL, IDI_APPLICATION);
 wcl.hCursor=LoadCursor(NULL, IDC_ARROW);
 wcl.hbrBackground=(HBRUSH)(COLOR_WINDOW);

 if(!RegisterClassEx(&wcl))
 {
  MessageBox(NULL, "Class Registration Failed!", "Error", MB_ICONEXCLAMATION | MB_OK);
  MessageBeep(0);
  return FALSE;
 }

 hWnd=CreateWindowEx(WS_EX_CLIENTEDGE,
                     g_szClassName,
                     "My Window",
                     WS_OVERLAPPEDWINDOW,
                     CW_USEDEFAULT,
                     CW_USEDEFAULT,
                     840,
                     660,
                     HWND_DESKTOP,
                     0,
                     hInstance,
                     0);

 if(hWnd==NULL)
 {
  MessageBox(NULL, "Failed To Create Window!", "Error", MB_ICONEXCLAMATION | MB_OK);
  MessageBeep(0);
  return FALSE;
 }

 ShowWindow(hWnd, nCmdShow);
 UpdateWindow(hWnd);

 while(GetMessage(&messages, NULL, 0, 0)>0)
 {
  TranslateMessage(&messages);
  DispatchMessage(&messages);
 }

 return messages.wParam;
}

LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
 switch(message)
 {
  case WM_CLOSE:
   DestroyWindow(hWnd);
   break;

  case WM_DESTROY:
   PostQuitMessage(0);
   break;

  case WM_LBUTTONDOWN:
   //PostMessage(hWnd, WM_CLOSE, 0, 0);
   //OnLButtonDown(hWnd);
   break;

  default:
   return DefWindowProc(hWnd, message, wParam, lParam);
 }

 return 0;
}

void OnLButtonDown(HWND hWnd)
{
 char szFileName[MAX_PATH];
 HINSTANCE hInstance=GetModuleHandle(NULL);
 GetModuleFileName(hInstance, szFileName, MAX_PATH);
 MessageBox(hWnd, szFileName, "This Program is:", MB_OK | MB_ICONINFORMATION);
 MessageBeep(0);
}