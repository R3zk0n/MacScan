// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILMISSINGFORMATARGUMENTEXCEPTION_H
#define JAVAUTILMISSINGFORMATARGUMENTEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaUtilIllegalFormatException.h"

@interface JavaUtilMissingFormatArgumentException : JavaUtilIllegalFormatException {
    NSString *s_;
}




-(id)initWithNSString:(id)arg0 ;
-(id)getFormatSpecifier;
-(id)getMessage;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif