#pragma once


#define AVKMGR_EXPORT __declspec(dllexport)


typedef void(__stdcall *pfun_1s)(void *a1 , void *a2 , void *a3);
typedef void(__stdcall *pfun)(pfun_1s a1 , int zero);
typedef void(__stdcall *pfun2)(pfun_1s a1);

struct FT_1400055E0 {
	char field_0[248];
	pfun sub_F8;
	pfun sub_100;
	pfun2 sub_108;
	pfun2 sub_110;
	char field_118[168];
}g_FunTable ={ 0 };







extern AVKMGR_EXPORT struct FUNCC {
	char field_0[28];
	int field_1C;
	int field_20;
}funcc ={0};






































extern AVKMGR_EXPORT NTSTATUS func9();

void sub_140001718();
void sub_140001000();
void sub_140001390(void *a1 , void *a2 , void *a3);
void sub_14000130C(void *a1 , void *a2 , void *a3);
void sub_140001414(void *a1 , void *a2 , void *a3);
void sub_140001608(void *a1 , void *a2 , void *a3);
WCHAR *sub_1400016F8(int a1);
NTSTATUS sub_1400017A4(WCHAR *a1 , PDRIVER_OBJECT DriverObject);
void sub_14000168C();
