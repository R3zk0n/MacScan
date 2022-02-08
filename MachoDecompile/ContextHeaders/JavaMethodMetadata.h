// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAMETHODMETADATA_H
#define JAVAMETHODMETADATA_H


#import <Foundation/Foundation.h>


@interface JavaMethodMetadata : NSObject {
    *J2ObjcMethodInfo data_;
}




-(id)initWithMetadata:(struct J2ObjcMethodInfo *)arg0 ;
-(SEL)selector;
-(id)name;
-(id)javaName;
-(id)objcName;
-(int)modifiers;
-(id)returnType;
-(id)exceptionTypes;
-(BOOL)isConstructor;
-(id)genericSignature;


@end


#endif