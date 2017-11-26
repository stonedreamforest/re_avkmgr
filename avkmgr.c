#include "ntddk.h"
#include "avkmgr.h"
#include "gdata.h"








ULONG g_dwMajorVersion= 0;
ULONG g_dwMinorVersion= 0;








//************************************************************************************************************
//	创建作者  :	Tennn
//  修改时间  :  2017/11/25 22:27
//	函数功能  :	驱动入口
//************************************************************************************************************
NTSTATUS DriverEntry(_In_ PDRIVER_OBJECT  DriverObject , _In_ PUNICODE_STRING RegistryPath) {

	UNICODE_STRING DeviceName={ 0 };
	PDEVICE_OBJECT DeviceObject={ 0 };
	UNREFERENCED_PARAMETER(RegistryPath);

	OSVERSIONINFOEXW os ={ 0 };
	os.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEXW);
	RtlGetVersion((POSVERSIONINFOW)&os);
	if (os.dwMajorVersion < 5 || os.dwMajorVersion == 5 && !os.dwMinorVersion) {
		return 0x0C0000002;
	}
	g_dwMajorVersion = os.dwMajorVersion;
	g_dwMinorVersion = os.dwMinorVersion;
	sub_140001718();
	sub_140001000();
	func9();
	if (g_FunTable.sub_100) {
		g_FunTable.sub_100(sub_140001390 , 0);
	}
	else {
		g_FunTable.sub_F8(sub_14000130C , 0);
	}
	g_FunTable.sub_108(sub_140001414);
	g_FunTable.sub_110(sub_140001608);
	RtlInitUnicodeString(&DeviceName , sub_1400016F8(0x3b));
	IoCreateDevice(DriverObject , 0 , &DeviceName , 0x22u , 0x100u , 0 , &DeviceObject);
	funcc.field_1C = 1;
	sub_1400017A4(L"avkmgr.sys successfully loaded" , DriverObject);
	return 0;
}

NTSTATUS func9() {
	return 0;
}

void sub_140001718() {
	unsigned short *loc_word_140004024 = (unsigned short *)word_140004024;
	unsigned short *loc_word_140005204 = (unsigned short *)word_140005204;
	sub_14000168C();
	for (int i = 0 , j = 0; i < 0x6d; i++) {
		qword_1400059C0[i] = loc_word_140004024;
		for (j = 0; loc_word_140004024[j]; j++);
		loc_word_140004024 = &loc_word_140004024[j];
	}
	dword_140004020 = 1;
	for (int i = 0 , j = 0; i < 0x2a; i++) {
		qword_140005860[i] = loc_word_140005204;
		for (j = 0; loc_word_140005204[j]; j++);
		loc_word_140005204 = &loc_word_140005204[j];
	}
	dword_140005200 = 1;
}

void sub_140001000() {

}

void sub_140001390(void *a1 , void *a2 , void *a3) {
	UNREFERENCED_PARAMETER(a1);
	UNREFERENCED_PARAMETER(a2);
	UNREFERENCED_PARAMETER(a3);
}

void sub_14000130C(void *a1 , void *a2 , void *a3) {
	UNREFERENCED_PARAMETER(a1);
	UNREFERENCED_PARAMETER(a2);
	UNREFERENCED_PARAMETER(a3);
}

void sub_140001414(void *a1 , void *a2 , void *a3) {
	UNREFERENCED_PARAMETER(a1);
	UNREFERENCED_PARAMETER(a2);
	UNREFERENCED_PARAMETER(a3);
}

void sub_140001608(void *a1 , void *a2 , void *a3) {
	UNREFERENCED_PARAMETER(a1);
	UNREFERENCED_PARAMETER(a2);
	UNREFERENCED_PARAMETER(a3);
}

WCHAR *sub_1400016F8(int a1) {
	UNREFERENCED_PARAMETER(a1);
	return 0;
}

NTSTATUS sub_1400017A4(WCHAR *a1 , PDRIVER_OBJECT DriverObject) {
	UNREFERENCED_PARAMETER(a1);
	UNREFERENCED_PARAMETER(DriverObject);
	return 0;
}

void sub_14000168C() {
	int i = 0;
	short data = 0x57a9;
	unsigned short *loc_word_140004024 = (unsigned short *)word_140004024;
	unsigned short *loc_word_140005204 = (unsigned short *)word_140005204;
	for (; loc_word_140004024[i] != 0x57a9 || loc_word_140004024[i + 1] != 0x57a9; i++ , data += 0x307) {
		loc_word_140004024[i] ^= data;
	}
	loc_word_140004024[i] = 0;
	for (i = 0 , data = 0x57a9; loc_word_140005204[i] != 0x57a9 || loc_word_140005204[i + 1] != 0x57a9; i++) {
		loc_word_140005204[i] ^= data;
	}
	loc_word_140005204[i] = 0;
}
