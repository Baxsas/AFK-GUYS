#include <windows.h>;
#include <iostream>;

using namespace std;

int main()
{
	int status;
	cout << R"(
  ___   __ _      _____                 
 / _ \ / _| |    |  __ \                
/ /_\ \ |_| | __ | |  \/_   _ _   _ ___ 
|  _  |  _| |/ / | | __| | | | | | / __|
| | | | | |   <  | |_\ \ |_| | |_| \__ \
\_| |_/_| |_|\_\  \____/\__,_|\__, |___/
                               __/ |    
                              |___/     
)";
	cout << R"(Press "1" to start
)";
	cout << R"(Your Input: )";
	cin >> status;

	if (status == 1)
	{
		cout << R"(started successfully
)";
		Sleep(4000);
	ASTART:
		HDC dc = GetDC(NULL);
		COLORREF color = GetPixel(dc, 71, 24);
		ReleaseDC(NULL, dc);

		if (color == 16777215)
		{
			cout << R"(Lobby Found
)";
			HDC dc = GetDC(NULL);
			COLORREF color2 = GetPixel(dc, 1821, 950);
			ReleaseDC(NULL, dc);
			if (color2 == 5775496)
			{
				keybd_event(VK_SPACE, 0, 0, 0);
				Sleep(0.3);
				keybd_event(VK_SPACE, 0, KEYEVENTF_KEYUP, 0);
				cout << R"(Starting match
)";
				goto DPOINT;
			    DPOINT:
				HDC dc = GetDC(NULL);
				COLORREF color3 = GetPixel(dc, 1786, 1036);
				if (color3 == 16706255)
				{
					cout << R"(Waiting for Players...
)";
					goto APOINT;
				    APOINT:
					HDC dc = GetDC(NULL);
					COLORREF color4 = GetPixel(dc, 1786, 1036);
					if (color4 == 16706255)
					{
						goto APOINT;
					}
					else
					{
						cout << R"(Game started
)";
						//random inputs soon
						goto BPOINT;
					    BPOINT:
						HDC dc = GetDC(NULL);
						COLORREF color5 = GetPixel(dc, 1813, 975);
						if (color5 == 3223601)
						{
							keybd_event(VK_ESCAPE, 0, 0, 0);
							Sleep(0.3);
							keybd_event(VK_SPACE, 0, KEYEVENTF_KEYUP, 0);
							Sleep(500);
							keybd_event(VK_SPACE, 0, 0, 0);
							Sleep(0.3);
							keybd_event(VK_SPACE, 0, KEYEVENTF_KEYUP, 0);
							Sleep(2000);
							goto CPOINT;
						    CPOINT:
							HDC dc = GetDC(NULL);
							COLORREF color6 = GetPixel(dc, 30, 19);
							if (color6 == 16706255)
							{
								keybd_event(VK_SPACE, 0, 0, 0);
								Sleep(0.3);
								keybd_event(VK_SPACE, 0, KEYEVENTF_KEYUP, 0);
								Sleep(1000);
								goto ASTART;

							}
							else
							{
								keybd_event(VK_SPACE, 0, 0, 0);
								Sleep(0.3);
								keybd_event(VK_SPACE, 0, KEYEVENTF_KEYUP, 0);
								Sleep(1000);
								goto CPOINT;
							}
							
						}
						else
						{
							Sleep(1000);
							goto BPOINT;
						}

					}

				}
				else
				{
					goto DPOINT;
				}

			}

		}

	}
	return 0;
}
