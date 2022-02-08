// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGANNOTATIONRETENTION_H
#define JAVALANGANNOTATIONRETENTION_H


#import <Foundation/Foundation.h>

#import "JavaLangAnnotationRetentionPolicyEnum.h"
#import "JavaLangAnnotationRetention-Protocol.h"

@interface JavaLangAnnotationRetention : NSObject <JavaLangAnnotationRetention>



@property (readonly) JavaLangAnnotationRetentionPolicyEnum *value; // ivar: value_
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