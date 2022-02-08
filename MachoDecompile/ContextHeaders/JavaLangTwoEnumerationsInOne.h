// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGTWOENUMERATIONSINONE_H
#define JAVALANGTWOENUMERATIONSINONE_H


#import <Foundation/Foundation.h>

#import "JavaUtilEnumeration-Protocol.h"
#import "JavaUtilEnumeration-Protocol.h"
#import "JavaUtilEnumeration-Protocol.h"

@interface JavaLangTwoEnumerationsInOne : NSObject <JavaUtilEnumeration>

 {
    id<JavaUtilEnumeration> *first_;
    id<JavaUtilEnumeration> *second_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilEnumeration:(id)arg0 withJavaUtilEnumeration:(id)arg1 ;
-(BOOL)hasMoreElements;
-(id)nextElement;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif