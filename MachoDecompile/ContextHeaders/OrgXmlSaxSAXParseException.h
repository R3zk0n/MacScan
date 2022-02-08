// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGXMLSAXSAXPARSEEXCEPTION_H
#define ORGXMLSAXSAXPARSEEXCEPTION_H


#import <Foundation/Foundation.h>

#import "OrgXmlSaxSAXException.h"

@interface OrgXmlSaxSAXParseException : OrgXmlSaxSAXException {
    NSString *publicId_;
    NSString *systemId_;
    int lineNumber_;
    int columnNumber_;
}




-(id)initWithNSString:(id)arg0 withOrgXmlSaxLocator:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withOrgXmlSaxLocator:(id)arg1 withJavaLangException:(id)arg2 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaLangException:(id)arg5 ;
-(void)init__WithNSString:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)getPublicId;
-(id)getSystemId;
-(int)getLineNumber;
-(int)getColumnNumber;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif