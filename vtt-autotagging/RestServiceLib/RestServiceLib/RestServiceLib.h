// ���� ifdef ����� DLL���� ���������ϴ� �۾��� ���� �� �ִ� ��ũ�θ� ����� 
// ǥ�� ����Դϴ�. �� DLL�� ��� �ִ� ������ ��� ����ٿ� ���ǵ� _EXPORTS ��ȣ��
// �����ϵǸ�, �ٸ� ������Ʈ������ �� ��ȣ�� ������ �� �����ϴ�.
// �̷��� �ϸ� �ҽ� ���Ͽ� �� ������ ��� �ִ� �ٸ� ��� ������Ʈ������ 
// RESTSERVICELIB_API �Լ��� DLL���� �������� ������ ����, �� DLL��
// �� DLL�� �ش� ��ũ�η� ���ǵ� ��ȣ�� ���������� ������ ���ϴ�.
#ifdef RESTSERVICELIB_EXPORTS
#define RESTSERVICELIB_API __declspec(dllexport)
#else
#define RESTSERVICELIB_API __declspec(dllimport)
#endif

// �� Ŭ������ RestServiceLib.dll���� ������ ���Դϴ�.
class RESTSERVICELIB_API CRestServiceLib {
public:
	CRestServiceLib(void);
	// TODO: ���⿡ �޼��带 �߰��մϴ�.
};

extern RESTSERVICELIB_API int nRestServiceLib;

RESTSERVICELIB_API int fnRestServiceLib(void);
