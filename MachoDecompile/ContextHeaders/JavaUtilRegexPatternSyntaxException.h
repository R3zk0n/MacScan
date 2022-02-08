// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILREGEXPATTERNSYNTAXEXCEPTION_H
#define JAVAUTILREGEXPATTERNSYNTAXEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaLangIllegalArgumentException.h"

@interface JavaUtilRegexPatternSyntaxException : JavaLangIllegalArgumentException {
    NSString *desc_;
    NSString *pattern_;
    int index_;
}




-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 ;
-(id)getPattern;
-(id)getMessage;
-(id)getDescription;
-(int)getIndex;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif