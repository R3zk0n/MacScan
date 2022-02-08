// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGANNOTATIONTARGET_H
#define JAVALANGANNOTATIONTARGET_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "JavaLangAnnotationTarget-Protocol.h"

@interface JavaLangAnnotationTarget : NSObject <JavaLangAnnotationTarget>



@property (readonly) IOSObjectArray *value; // ivar: value_
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithValue:(id)arg0 ;
-(id)annotationType;
+(id)__annotations;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif