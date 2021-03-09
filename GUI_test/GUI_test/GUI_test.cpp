



#include <windows.h>

// Prototyp der Callback-Funktion
LRESULT CALLBACK WindowProc(HWND hWnd, UINT message,
	WPARAM wParam, LPARAM lParam);

// Hauptprogramm
//
int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst,
	LPSTR lpcmdline, int ncmdshow)
{
	WNDCLASSEX windowclass; // Struktur f¸r Fenstereigenschaften
	HWND       hWnd;        // Fenster-Handle
	MSG        message;     // Nachricht

	// Der Klassen-Name des Fensters ist frei w‰hlbar
	const TCHAR szClassName[] = TEXT("Erstes Fenster");

	// Struktur mit gew¸nschten Eigenschaften f¸llen
	//

	// Grˆﬂe der Struktur zwischenspeichern
	windowclass.cbSize = sizeof(WNDCLASSEX);

	// Fenster soll beim Verschieben neu gezeichnet werden
	windowclass.style = CS_HREDRAW | CS_VREDRAW;

	// Zeiger auf Callback-Funktion
	windowclass.lpfnWndProc = WindowProc;

	// Keine erweiterten Einstellungen
	windowclass.cbClsExtra = 0;
	windowclass.cbWndExtra = 0;

	// Instanz speichern
	windowclass.hInstance = hInst;

	// Icons und Cursor festlegen
	windowclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	windowclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	windowclass.hCursor = LoadCursor(NULL, IDC_HELP);

	// Hintergrundfarbe festlegen
	windowclass.hbrBackground = (HBRUSH)COLOR_BACKGROUND + 1;

	// Ein Men¸ brauchen wir nicht
	windowclass.lpszMenuName = NULL;

	// Klassenname angeben
	windowclass.lpszClassName = szClassName;

	// Fensterklasse registrieren
	if (!RegisterClassEx(&windowclass))
		return (0);

	// Das Fenster erzeugen
	hWnd = CreateWindowEx(NULL,
		szClassName,
		TEXT("Das erste Fenster!"),
		WS_OVERLAPPEDWINDOW | WS_VISIBLE,
		1000, 100,
		300, 250,
		NULL,
		NULL,
		hInst,
		NULL);

	// Pr¸fen, ob alles glatt ging
	if (hWnd == NULL)
		return (0);

	// Der "Herzschlag" des Programms.
	// Hier werden alle Nachrichten abgeholt,
	// ¸bersetzt und weitergeleitet.
	while (GetMessage(&message, NULL, 0, 0))
	{
		TranslateMessage(&message);
		DispatchMessage(&message);

	}

	// Programm beenden
	return (int)(message.wParam);

} // WinMain


// Callback-Funktion zur Nachrichtenverarbeitung
//
LRESULT CALLBACK WindowProc(HWND hWnd, UINT message,
	WPARAM wParam, LPARAM lParam)
{
	// Messages auswerten
	switch (message)
	{
		// Fenster schlieﬂen? (Auch Alt-F4)
	case WM_DESTROY:
	{
		// Nachricht zum Beenden schicken
		PostQuitMessage(0);
		return (0);

	}

	// Wurde eine Taste gedr¸ckt?
	case WM_KEYDOWN:
	{
		// Ja, also je nach Taste verzweigen
		switch (wParam)
		{
			// Wurde "Escape" gedr¸ckt?
		case VK_ESCAPE:
		{
			// Ja, also Nachricht zum Beenden schicken
			PostQuitMessage(0);
			return (0);

		}
		}
	} break;
	}

	// Die Nachricht wurde nicht von uns verarbeitet, also
	// von Windows verarbeiten lassen.
	return (DefWindowProc(hWnd, message, wParam, lParam));

} // WindowProc
