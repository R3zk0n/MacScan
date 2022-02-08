// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_EMPTYSET_H
#define JAVAUTILCOLLECTIONS_EMPTYSET_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractSet.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilCollections_EmptySet : JavaUtilAbstractSet <JavaIoSerializable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)containsWithId:(id)arg0 ;
-(int)size;
-(id)iterator;
-(id)readResolve;
-(id)init;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif