//
//  MCMD5.h
//  hermes
//
//  Created by DINH Viêt Hoà on 4/11/13.
//  Copyright (c) 2013 MailCore. All rights reserved.
//

#ifndef MAILCORE_MCMD5_H

#define MAILCORE_MCMD5_H

#include "MCData.h"
#include "MCString.h"

#ifdef __cplusplus

namespace mailcore {
    MAILCORE_EXPORT
    Data * md5Data(Data * data);

    MAILCORE_EXPORT
    String * md5String(Data * data);
}

#endif

#endif
