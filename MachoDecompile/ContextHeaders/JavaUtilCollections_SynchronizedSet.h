// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_SYNCHRONIZEDSET_H
#define JAVAUTILCOLLECTIONS_SYNCHRONIZEDSET_H

@class SynchronizedCollection;

#import <Foundation/Foundation.h>

#import "JavaUtilSet-Protocol.h"

@interface JavaUtilCollections_SynchronizedSet : SynchronizedCollection <JavaUtilSet>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilSet:(id)arg0 ;
-(id)initWithJavaUtilSet:(id)arg0 withId:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif