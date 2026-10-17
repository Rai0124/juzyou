#include <Windows.h>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_DESTROY:
		PostQuitMessage(0);	// ウィンドウが閉じられたときにメッセージループを終了
		return 0;
	case WM_PAINT:

		return 0;
	case WM_KEYDOWN:

		return 0;
	}

	return DefWindowProcW(hwnd, uMsg, wParam, lParam);	// デフォルトの処理
}

int WINAPI WinMain(
	HINSTANCE hInstance,		// アプリケーションの識別番号
	HINSTANCE hPrevInstance,	// 基本使わなくていい
	LPSTR lpCmdLine,			// コマンドライン引数（起動時のオプション）
	int nCmdShow				// ウィンドウの表示方法（最大化、最小化など）
)
{
	WNDCLASS wc = {};
	wc.lpfnWndProc = WindowProc;		// ウィンドウプロシージャを指定
	wc.hInstance = hInstance;			 // アプリケーションインスタンス
	wc.lpszClassName = "GameWindow";		// ウィンドウクラス名
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);	// マウスカーソル
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 9);	// 背景色

	RegisterClass(&wc);		// Windowsに登録

	HWND hwnd = CreateWindow(
		"GameWindow",	// ウィンドウクラス名
		"MyGame",		// ウィンドウタイトル
		WS_OVERLAPPEDWINDOW,	// ウィンドウスタイル
		CW_USEDEFAULT, CW_USEDEFAULT,	// 位置（自動）
		800, 600,		// サイズ（幅、高さ）
		NULL, NULL,		// 親ウィンドウ、メニュー
		hInstance,		// インスタンス
		NULL			// 追加データ
	);

	ShowWindow(hwnd, nCmdShow);		// ウィンドウを表示

	MSG msg = {};
	while (GetMessage(&msg, NULL, 0, 0))	// メッセージループ
	{
		TranslateMessage(&msg);			// キー入力の翻訳
		DispatchMessage(&msg);			// ウィンドウプロシージャにメッセージを送信
	}


	return 0;
}