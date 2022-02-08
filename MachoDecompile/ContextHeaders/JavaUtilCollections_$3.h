// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_$3_H
#define JAVAUTILCOLLECTIONS_$3_H


#import <Foundation/Foundation.h>

#import "JavaUtilEnumeration-Protocol.h"
#import "JavaUtilIterator-Protocol.h"
#import "JavaUtilCollection-Protocol.h"

@interface JavaUtilCollections_$3 : NSObject <JavaUtilEnumeration>

 {
    id<JavaUtilIterator> *it_;
    id<JavaUtilCollection> *val$c_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasMoreElements;
-(id)nextElement;
-(id)initWithJavaUtilCollection:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif