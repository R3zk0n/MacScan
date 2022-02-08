// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILMISSINGRESOURCEEXCEPTION_H
#define JAVAUTILMISSINGRESOURCEEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaLangRuntimeException.h"

@interface JavaUtilMissingResourceException : JavaLangRuntimeException {
    NSString *className__;
    NSString *key_;
}




-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 ;
-(id)getClassName;
-(id)getKey;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif