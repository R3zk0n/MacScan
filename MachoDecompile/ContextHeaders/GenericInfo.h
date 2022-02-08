// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef GENERICINFO_H
#define GENERICINFO_H


#import <Foundation/Foundation.h>

#import "LibcoreReflectListOfTypes.h"
#import "IOSObjectArray.h"
#import "JavaLangReflectType-Protocol.h"

@interface GenericInfo : NSObject {
    LibcoreReflectListOfTypes *genericExceptionTypes_;
    LibcoreReflectListOfTypes *genericParameterTypes_;
    id<JavaLangReflectType> *genericReturnType_;
    IOSObjectArray *formalTypeParameters_;
}




-(id)init:(id)arg0 parameters:(id)arg1 returnType:(id)arg2 typeParameters:(id)arg3 ;
-(void)dealloc;


@end


#endif