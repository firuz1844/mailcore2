//
//  SMTPDisconnectOperation.h
//  mailcore2
//
//  Created by DINH Viêt Hoà on 6/22/13.
//  Copyright (c) 2013 MailCore. All rights reserved.
//

#ifndef MAILCORE_MCSMTPDISCONNECTOPERATION_H

#define MAILCORE_MCSMTPDISCONNECTOPERATION_H

#include "MCBaseTypes.h"
#include "MCAbstract.h"
#include "MCSMTPOperation.h"

#ifdef __cplusplus

namespace mailcore {
    
    class MAILCORE_EXPORT SMTPDisconnectOperation : public SMTPOperation {
    public:
        SMTPDisconnectOperation();
        virtual ~SMTPDisconnectOperation();
        
    public: // subclass behavior
        virtual void main();
    };
    
}

#endif

#endif
