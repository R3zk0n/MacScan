// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_$1_H
#define JAVAUTILCOLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_$1_H


#import <Foundation/Foundation.h>

#import "JavaUtilIterator-Protocol.h"
#import "JavaUtilIterator-Protocol.h"

@interface JavaUtilCollections_UnmodifiableMap_UnmodifiableEntrySet_$1 : NSObject <JavaUtilIterator>

 {
    id<JavaUtilIterator> *iterator_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(id)initWithJavaUtilCollections_UnmodifiableMap_UnmodifiableEntrySet:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif