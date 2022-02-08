// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_SINGLETONSET_$1_H
#define JAVAUTILCOLLECTIONS_SINGLETONSET_$1_H


#import <Foundation/Foundation.h>

#import "JavaUtilCollections_SingletonSet.h"
#import "JavaUtilIterator-Protocol.h"

@interface JavaUtilCollections_SingletonSet_$1 : NSObject <JavaUtilIterator>

 {
    JavaUtilCollections_SingletonSet *this$0_;
    BOOL hasNext_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(id)initWithJavaUtilCollections_SingletonSet:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif