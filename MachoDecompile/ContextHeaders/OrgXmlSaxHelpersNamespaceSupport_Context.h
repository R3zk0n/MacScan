// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGXMLSAXHELPERSNAMESPACESUPPORT_CONTEXT_H
#define ORGXMLSAXHELPERSNAMESPACESUPPORT_CONTEXT_H


#import <Foundation/Foundation.h>

#import "JavaUtilHashtable.h"
#import "OrgXmlSaxHelpersNamespaceSupport.h"
#import "JavaUtilArrayList.h"
#import "OrgXmlSaxHelpersNamespaceSupport_Context.h"

@interface OrgXmlSaxHelpersNamespaceSupport_Context : NSObject {
    JavaUtilHashtable *prefixTable_;
    JavaUtilHashtable *uriTable_;
    JavaUtilHashtable *elementNameTable_;
    JavaUtilHashtable *attributeNameTable_;
    NSString *defaultNS_;
    BOOL declsOK_;
    OrgXmlSaxHelpersNamespaceSupport *this$0_;
    JavaUtilArrayList *declarations_;
    BOOL declSeen_;
    OrgXmlSaxHelpersNamespaceSupport_Context *parent_;
}




-(id)initWithOrgXmlSaxHelpersNamespaceSupport:(id)arg0 ;
-(void)setParentWithOrgXmlSaxHelpersNamespaceSupport_Context:(id)arg0 ;
-(void)clear;
-(void)declarePrefixWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)processNameWithNSString:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)getURIWithNSString:(id)arg0 ;
-(id)getPrefixWithNSString:(id)arg0 ;
-(id)getDeclaredPrefixes;
-(id)getPrefixes;
-(void)copyTables;
-(void)dealloc;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif