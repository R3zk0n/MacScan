// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_EMPTYMAP_H
#define JAVAUTILCOLLECTIONS_EMPTYMAP_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractMap.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilCollections_EmptyMap : JavaUtilAbstractMap <JavaIoSerializable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)containsKeyWithId:(id)arg0 ;
-(BOOL)containsValueWithId:(id)arg0 ;
-(id)entrySet;
-(id)getWithId:(id)arg0 ;
-(id)keySet;
-(id)values;
-(id)readResolve;
-(id)init;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif