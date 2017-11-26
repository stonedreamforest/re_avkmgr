#pragma once


#define AVKMGR_EXPORT __declspec(dllexport)

typedef void*(__stdcall *pfun_1s)(void *a1 , void *a2 , void *a3);


typedef void(__stdcall *pfun0)();
typedef void(__stdcall *pfun1)(pfun_1s a1);
typedef void(__stdcall *pfun2)(pfun_1s a1 , int zero);

struct FT_1400055E0 {
	void* field_0;
	void* field_8;
	void* field_10;
	void* field_18;
	char field_20[216];
	pfun2 sub_F8;
	pfun2 sub_100;
	pfun1 sub_108;
	pfun1 sub_110;
	__int64 field_118[27];
	pfun0 sub_1F0;
	pfun_1s sub_1F8[3];				//sizeof=0x18
	pfun0 sub_210;
	pfun_1s sub_218[3];				//sizeof=0x18
	pfun0 sub_230;
	pfun_1s sub_238[3];				//sizeof=0x18
	pfun0 sub_250;
	pfun_1s sub_258[3];
	__int64 sub_270;
	__int64 sub_278;
}g_FunTable ={ 0 };	//sizeof=0x280










extern AVKMGR_EXPORT NTSTATUS func0(__int64 Exchange);
extern AVKMGR_EXPORT NTSTATUS func1(__int64 Exchange);
extern AVKMGR_EXPORT NTSTATUS func2(__int64 Exchange);
extern AVKMGR_EXPORT NTSTATUS func3(__int64 Exchange);
extern AVKMGR_EXPORT NTSTATUS func4(__int64 Exchange);
extern AVKMGR_EXPORT NTSTATUS func5(__int64 Exchange);
extern AVKMGR_EXPORT NTSTATUS func6(__int64 Exchange);
extern AVKMGR_EXPORT NTSTATUS func7(__int64 Exchange);
extern AVKMGR_EXPORT NTSTATUS func9();
extern AVKMGR_EXPORT  NTSTATUS(__stdcall *func8)() = func9;
extern AVKMGR_EXPORT NTSTATUS funca();
extern AVKMGR_EXPORT funcb = 0;
extern AVKMGR_EXPORT struct FUNCC {
	char field_0[28];
	int field_1C;
	int field_20;
}funcc ={ 0 };
extern AVKMGR_EXPORT char funcd={ 0 };



















void sub_140001718();
//************************************************************************************************************
//	创建作者  :	Tennn
//  修改时间  :  2017/11/26 12:00
//	函数功能  :	根据函数编号获取系统函数地址 sub_140001000
//************************************************************************************************************
void avk_GetSystemRoutineAddress();
void* sub_140001390(void *a1 , void *a2 , void *a3);
void* sub_14000130C(void *a1 , void *a2 , void *a3);
void* sub_140001414(void *a1 , void *a2 , void *a3);
void* sub_140001608(void *a1 , void *a2 , void *a3);

//************************************************************************************************************
//	创建作者  :	Tennn
//  修改时间  :  2017/11/26 12:26
//	函数功能  :	获取系统函数字符串 sub_1400016F8
//************************************************************************************************************
WCHAR *avk_SystemRoutineName(int FunNumber);
//************************************************************************************************************
//	创建作者  :	Tennn
//  修改时间  :  2017/11/26 13:41
//	函数功能  :	获取错误 sub_1400017A4
//************************************************************************************************************
void avk_IoErrorLog(WCHAR *a1 , int a2, PDRIVER_OBJECT DriverObject);
void sub_14000168C();
