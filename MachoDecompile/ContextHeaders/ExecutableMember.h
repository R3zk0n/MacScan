// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef EXECUTABLEMEMBER_H
#define EXECUTABLEMEMBER_H


#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>

#import "JavaLangReflectAccessibleObject.h"
#import "IOSClass.h"
#import "JavaMethodMetadata.h"
#import "JavaLangReflectGenericDeclaration-Protocol.h"
#import "JavaLangReflectMember-Protocol.h"

@interface ExecutableMember : JavaLangReflectAccessibleObject <JavaLangReflectGenericDeclaration, JavaLangReflectMember>

 {
    IOSClass *class_;
    SEL selector_;
    NSMethodSignature *methodSignature_;
    JavaMethodMetadata *metadata_;
    char * binaryParameterTypes_;
}


@property (readonly) NSMethodSignature *signature;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithMethodSignature:(id)arg0 selector:(SEL)arg1 class:(id)arg2 metadata:(id)arg3 ;
-(id)getName;
-(int)getModifiers;
-(int)getNumParams;
-(id)getParameterTypes;
-(char *)getBinaryParameterTypes;
-(id)getDeclaringClass;
-(id)getTypeParameters;
-(id)getGenericParameterTypes;
-(id)getGenericExceptionTypes;
-(BOOL)isSynthetic;
-(id)getExceptionTypes;
-(id)internalName;
-(id)getDeclaredAnnotations;
-(id)getParameterAnnotations;
-(id)toGenericString;
-(BOOL)isVarArgs;
-(BOOL)isBridge;
-(id)metadata;
-(char)isEqual:(id)arg0 ;
-(void)dealloc;


@end


#endif