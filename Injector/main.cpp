#include <Windows.h>
#include <WtsApi32.h>
#include <string>
#include <filesystem>
#pragma comment(lib, "Wtsapi32.lib")
namespace fs = std::experimental::filesystem;

int get_process(std::string processName) {
	WTS_PROCESS_INFO* pWPIs = NULL;
	DWORD dwProcCount = 0;
	if (WTSEnumerateProcesses(WTS_CURRENT_SERVER_HANDLE, NULL, 1, &pWPIs, &dwProcCount)) {
		for (DWORD i = 0; i < dwProcCount; i++) {
			if (std::string(pWPIs[i].pProcessName).find(processName) != std::string::npos) return pWPIs[i].ProcessId;
		}
	}
	return 0;
}

class PxyLL {
private:
	HANDLE hProcess = INVALID_HANDLE_VALUE;
	bool inject(std::string dll_path) { 
		size_t path_len = dll_path.length() + 1;
		hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, get_process("freddys-Win64-Shipping"));
		if (!hProcess) return false;
		LPVOID proc_alloc = VirtualAllocEx(hProcess, NULL, path_len, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
		if (proc_alloc == NULL) return false;
		if (WriteProcessMemory(hProcess, proc_alloc, dll_path.c_str(), path_len, 0) == 0) return false;
		LPTHREAD_START_ROUTINE k32 = reinterpret_cast<LPTHREAD_START_ROUTINE>(LoadLibraryA);
		if (CreateRemoteThread(hProcess, NULL, 0, k32, proc_alloc, 0, NULL) == NULL) return false;
		return true;
	}

public:
	PxyLL(fs::path exec_path) {
		fs::path pxyll_path = exec_path.replace_filename("FNAF HW Mod Menu.dll");
		if (fs::exists(pxyll_path)) {
			if (!inject(pxyll_path.string())) throw std::exception("Injection unsuccessful");
		}
	}
	~PxyLL() {
		TerminateProcess(hProcess, 0);
	}
};


int main(int argc, char** argv) {
	std::system("explorer steam://rungameid/732690/");
	while (!get_process("freddys-Win64-Shipping")) { Sleep(100); }
	PxyLL inj(argv[0]);
	while (/*!GetAsyncKeyState(VK_DELETE) &&*/ get_process("freddys-Win64-Shipping")) {}
}