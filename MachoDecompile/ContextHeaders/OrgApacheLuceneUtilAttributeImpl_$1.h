// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILATTRIBUTEIMPL_$1_H
#define ORGAPACHELUCENEUTILATTRIBUTEIMPL_$1_H


#import <Foundation/Foundation.h>

#import "JavaLangStringBuilder.h"
#import "OrgApacheLuceneUtilAttributeReflector-Protocol.h"

@interface OrgApacheLuceneUtilAttributeImpl_$1 : NSObject <OrgApacheLuceneUtilAttributeReflector>

 {
    JavaLangStringBuilder *val$buffer_;
    BOOL val$prependAttClass_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)reflectWithIOSClass:(id)arg0 withNSString:(id)arg1 withId:(id)arg2 ;
-(id)initWithJavaLangStringBuilder:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif