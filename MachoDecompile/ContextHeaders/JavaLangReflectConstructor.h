// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGREFLECTCONSTRUCTOR_H
#define JAVALANGREFLECTCONSTRUCTOR_H



#import "ExecutableMember.h"

@interface JavaLangReflectConstructor : ExecutableMember



-(id)newInstanceWithNSObjectArray:(id)arg0 ;
-(id)jniNewInstance:(*unk)arg0 ;
-(id)allocInstance;
-(id)invocationForTarget:(id)arg0 ;
-(void)invoke:(id)arg0 ;
-(id)getName;
-(NSUInteger)hash;
-(id)description;
+(id)constructorWithMethodSignature:(id)arg0 selector:(SEL)arg1 class:(id)arg2 metadata:(id)arg3 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif