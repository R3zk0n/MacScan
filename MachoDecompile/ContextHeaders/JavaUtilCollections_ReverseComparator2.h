// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_REVERSECOMPARATOR2_H
#define JAVAUTILCOLLECTIONS_REVERSECOMPARATOR2_H


#import <Foundation/Foundation.h>

#import "JavaUtilComparator-Protocol.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilComparator-Protocol.h"

@interface JavaUtilCollections_ReverseComparator2 : NSObject <JavaUtilComparator, JavaIoSerializable>

 {
    id<JavaUtilComparator> *cmp_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilComparator:(id)arg0 ;
-(int)compareWithId:(id)arg0 withId:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif