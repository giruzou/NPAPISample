// �v���O�C�����̋L�q�BNP_GetValue�֐����R�[������邱�ƂŃv���O�C����񂪎擾�����B
#include <npapi.h>

extern "C" {
    const char *NP_GetMIMEDescription(void) {
        return "application/x-calculator::Four Arithmetic Operations";
    }

    NPError NP_GetValue(NPP instance, NPPVariable variable, void *value) {
        switch(variable) {
        case NPPVpluginNameString:
            // �v���O�C������ԋp
            *static_cast<const char **>(value) = "x-calculator";
            break;
        case NPPVpluginDescriptionString:
            // �v���O�C���̐����������ԋp
            *static_cast<const char **>(value) = "Four Arithmetic Operations";
            break;
        default:
            return NPERR_INVALID_PARAM;
            break;
        }
        return NPERR_NO_ERROR;
    }
}
