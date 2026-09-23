// SwiftPM module marker for CNumKong.
//
// CNumKong owns NumKong's public C header/module facade; runtime dispatch is
// implemented by CNumKongDispatch. Xcode's SwiftPM integration still requires
// a relocatable object when this target is linked transitively. This exported
// marker makes the target substantive without changing runtime behavior.
#include "numkong/numkong.h"

const unsigned int nk_cnumkong_module_loaded = 1u;
