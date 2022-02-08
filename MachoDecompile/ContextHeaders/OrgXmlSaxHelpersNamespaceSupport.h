// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGXMLSAXHELPERSNAMESPACESUPPORT_H
#define ORGXMLSAXHELPERSNAMESPACESUPPORT_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "OrgXmlSaxHelpersNamespaceSupport_Context.h"

@interface OrgXmlSaxHelpersNamespaceSupport : NSObject {
    IOSObjectArray *contexts_;
    OrgXmlSaxHelpersNamespaceSupport_Context *currentContext_;
    int contextPos_;
    BOOL namespaceDeclUris_;
}




-(id)init;
-(void)reset;
-(void)pushContext;
-(void)popContext;
-(BOOL)declarePrefixWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)processNameWithNSString:(id)arg0 withNSStringArray:(id)arg1 withBoolean:(BOOL)arg2 ;
-(id)getURIWithNSString:(id)arg0 ;
-(id)getPrefixes;
-(id)getPrefixWithNSString:(id)arg0 ;
-(id)getPrefixesWithNSString:(id)arg0 ;
-(id)getDeclaredPrefixes;
-(void)setNamespaceDeclUrisWithBoolean:(BOOL)arg0 ;
-(BOOL)isNamespaceDeclUris;
-(void)dealloc;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif