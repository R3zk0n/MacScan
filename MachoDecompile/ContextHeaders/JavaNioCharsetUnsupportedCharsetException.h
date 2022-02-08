// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHARSETUNSUPPORTEDCHARSETEXCEPTION_H
#define JAVANIOCHARSETUNSUPPORTEDCHARSETEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaLangIllegalArgumentException.h"

@interface JavaNioCharsetUnsupportedCharsetException : JavaLangIllegalArgumentException {
    NSString *charsetName_;
}




-(id)initWithNSString:(id)arg0 ;
-(id)getCharsetName;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif