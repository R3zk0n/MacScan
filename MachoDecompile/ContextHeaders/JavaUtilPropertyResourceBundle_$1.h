// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILPROPERTYRESOURCEBUNDLE_$1_H
#define JAVAUTILPROPERTYRESOURCEBUNDLE_$1_H


#import <Foundation/Foundation.h>

#import "JavaUtilPropertyResourceBundle.h"
#import "JavaUtilEnumeration-Protocol.h"
#import "JavaUtilEnumeration-Protocol.h"
#import "JavaUtilEnumeration-Protocol.h"

@interface JavaUtilPropertyResourceBundle_$1 : NSObject <JavaUtilEnumeration>

 {
    JavaUtilPropertyResourceBundle *this$0_;
    id<JavaUtilEnumeration> *local_;
    id<JavaUtilEnumeration> *pEnum_;
    NSString *nextElement_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)findNext;
-(BOOL)hasMoreElements;
-(id)nextElement;
-(id)initWithJavaUtilPropertyResourceBundle:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif