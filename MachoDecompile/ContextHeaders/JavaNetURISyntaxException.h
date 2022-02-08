// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETURISYNTAXEXCEPTION_H
#define JAVANETURISYNTAXEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaLangException.h"

@interface JavaNetURISyntaxException : JavaLangException {
    NSString *input_;
    int index_;
}




-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(int)getIndex;
-(id)getReason;
-(id)getInput;
-(id)getMessage;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif