// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGXMLSAXSAXEXCEPTION_H
#define ORGXMLSAXSAXEXCEPTION_H



#import "JavaLangException.h"

@interface OrgXmlSaxSAXException : JavaLangException {
    JavaLangException *exception_;
}




-(id)init;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithJavaLangException:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withJavaLangException:(id)arg1 ;
-(id)getMessage;
-(id)getException;
-(id)description;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif