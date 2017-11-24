//
//  MCJSON.h
//  hermes
//
//  Created by DINH Viêt Hoà on 4/8/13.
//  Copyright (c) 2013 MailCore. All rights reserved.
//

#ifndef MAILCORE_MCJSON_H

#define MAILCORE_MCJSON_H

#include "MCObject.h"
#include "MCHashMap.h"
#include "MCArray.h"
#include "MCValue.h"
#include "MCString.h"
#include "MCData.h"

#ifdef __cplusplus

namespace mailcore {
    
    class Null;
    
    class MAILCORE_EXPORT JSON {
    public:
        static String * objectToJSONString(Object * object);
        static Data * objectToJSONData(Object * object);
        static Object * objectFromJSONString(String * json);
        static Object * objectFromJSONData(Data * json);
    };
    
}

#endif

#endif /* defined(__hermes__MCJSON__) */
