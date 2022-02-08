// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGREFLECTMETHOD_H
#define JAVALANGREFLECTMETHOD_H



#import "ExecutableMember.h"

@interface JavaLangReflectMethod : ExecutableMember {
    BOOL isStatic_;
}




-(id)initWithMethodSignature:(id)arg0 selector:(SEL)arg1 class:(id)arg2 isStatic:(BOOL)arg3 metadata:(id)arg4 ;
-(id)getName;
-(int)getModifiers;
-(id)getReturnType;
-(id)getGenericReturnType;
-(id)invokeWithId:(id)arg0 withNSObjectArray:(id)arg1 ;
-(void)jniInvokeWithId:(id)arg0 args:(*unk)arg1 result:(*void)arg2 ;
-(id)invocationForTarget:(id)arg0 ;
-(void)invoke:(id)arg0 object:(id)arg1 ;
-(id)description;
-(id)getDefaultValue;
-(NSUInteger)hash;
+(id)methodWithMethodSignature:(id)arg0 selector:(SEL)arg1 class:(id)arg2 isStatic:(BOOL)arg3 metadata:(id)arg4 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif