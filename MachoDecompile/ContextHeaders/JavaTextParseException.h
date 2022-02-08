// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTPARSEEXCEPTION_H
#define JAVATEXTPARSEEXCEPTION_H



#import "JavaLangException.h"

@interface JavaTextParseException : JavaLangException {
    int errorOffset_;
}




-(id)initWithNSString:(id)arg0 withInt:(int)arg1 ;
-(int)getErrorOffset;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif