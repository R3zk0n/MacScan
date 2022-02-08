// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_SINGLETONMAP_$1_$1_H
#define JAVAUTILCOLLECTIONS_SINGLETONMAP_$1_$1_H


#import <Foundation/Foundation.h>

#import "JavaUtilCollections_SingletonMap_$1.h"
#import "JavaUtilIterator-Protocol.h"

@interface JavaUtilCollections_SingletonMap_$1_$1 : NSObject <JavaUtilIterator>

 {
    JavaUtilCollections_SingletonMap_$1 *this$0_;
    BOOL hasNext_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(id)initWithJavaUtilCollections_SingletonMap_$1:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif