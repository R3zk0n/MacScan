// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_REVERSECOMPARATOR_H
#define JAVAUTILCOLLECTIONS_REVERSECOMPARATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilComparator-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilCollections_ReverseComparator : NSObject <JavaUtilComparator, JavaIoSerializable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(int)compareWithId:(id)arg0 withId:(id)arg1 ;
-(id)readResolve;
-(id)init;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif