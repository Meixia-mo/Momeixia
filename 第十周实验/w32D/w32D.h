// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� W32D_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// W32D_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef W32D_EXPORTS
#define W32D_API __declspec(dllexport)
#else
#define W32D_API __declspec(dllimport)
#endif

// �����Ǵ� w32D.dll ������
class W32D_API Cw32D {
public:
	Cw32D(void);
	// TODO:  �ڴ�������ķ�����
};

extern W32D_API int nw32D;

W32D_API int fnw32D(void);

W32D_API int GetInt();
