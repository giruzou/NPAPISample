�v��
====
Nixysa��Google Chrome�p�̃T���v���v���O�C��������Ă݂�
�l�����Z���s���v���O�C��

�Ώۊ�
========
- Nixysa (NPAPI�̃��b�v���C�u����)
- Subversion or TortoiseSVN (Nixysa�̃R�[�h�擾�p)
- git
- Python (Nixysa�𓮍삳���邽��)
- Visual C++ 2010 (�v���O�C���̃r���h)
- Google Chrome 9

�r���h���@
==========
�R�}���h�v�����v�g�ł̍��
    >svn checkout http://nixysa.googlecode.com/svn/trunk/ nixysa-read-only
    >cd nixysa-read-only
    >git clone git://github.com/nus/NPAPISample.git
    >start NPAPISample\calculator.sln
    
Visual C++�ł̍��
1.���j���[�o�[ -> �r���h -> �\���}�l�[�W���[
�A�N�e�B�u�\�����[�V�����\����[Debug]����[Release]�ɕύX
2.���j���[�o�[ -> �r���h -> calculator�̃r���h

�����A���L�̗l�ȃr���h�G���[���N������
    1>C:\Program Files\Microsoft SDKs\Windows\v7.0A\include\winnt.h(6361): error C2146: �\���G���[ : ';' ���A���ʎq 'ContextRecord' �̑O�ɕK�v�ł��B
    1>C:\Program Files\Microsoft SDKs\Windows\v7.0A\include\winnt.h(6361): error C4430: �^�w��q������܂��� - int �Ɖ��肵�܂����B����: C++ �� int ������l�Ƃ��ăT�|�[�g���Ă��܂���
    1>C:\Program Files\Microsoft SDKs\Windows\v7.0A\include\winnt.h(6361): error C4430: �^�w��q������܂��� - int �Ɖ��肵�܂����B����: C++ �� int ������l�Ƃ��ăT�|�[�g���Ă��܂���
    1>C:\Program Files\Microsoft SDKs\Windows\v7.0A\include\winnt.h(12983): error C2065: 'PCONTEXT' : ��`����Ă��Ȃ����ʎq�ł��B
    1>C:\Program Files\Microsoft SDKs\Windows\v7.0A\include\winnt.h(12984): error C2146: �\���G���[ : ')' ���A���ʎq 'ContextRecord' �̑O�ɕK�v�ł��B
    1>C:\Program Files\Microsoft SDKs\Windows\v7.0A\include\winnt.h(12984): warning C4229: ���`�����g�p����Ă��܂� : �f�[�^�̏C���q�͖�������܂��B
    1>C:\Program Files\Microsoft SDKs\Windows\v7.0A\include\winnt.h(12984): error C2182: 'RtlCaptureContext' : 'void' �^���s�K�؂Ɏg�p����Ă��܂��B
    1>C:\Program Files\Microsoft SDKs\Windows\v7.0A\include\winnt.h(12984): error C2491: 'RtlCaptureContext' : dllimport �f�[�^ �̒�`�͋�����܂���B
    1>C:\Program Files\Microsoft SDKs\Windows\v7.0A\include\winnt.h(12984): error C2059: �\���G���[ : ')'
   �ȉ����l�ȃG���[
   ...

nixysa-read-only\third_party\npapi\include\nptypes.h��48�s�ڂ�1�s�ǉ�
    47|#if defined(WIN32) || defined(OS2)
    48|    #include <Windows.h>	// ���̍s��ǉ�

nixysa-read-only\nixysa\static_glue\npapi\npn_api.h��107,108�s�ڂ�
    107| size_t size = std::min(sizeof(g_browser_functions),
    108|                        static_cast<size_t>(funcs->size));
��
    107| size_t size;
    108| {
    109|     using namespace std;
    110|    size = min(sizeof(g_browser_functions),
    111|                      static_cast<size_t>(funcs->size));
    112| };
�ɕύX


