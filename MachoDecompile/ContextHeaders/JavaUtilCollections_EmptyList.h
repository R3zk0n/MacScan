// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_EMPTYLIST_H
#define JAVAUTILCOLLECTIONS_EMPTYLIST_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractList.h"
#import "JavaUtilRandomAccess-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilCollections_EmptyList : JavaUtilAbstractList <JavaUtilRandomAccess, JavaIoSerializable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)containsWithId:(id)arg0 ;
-(int)size;
-(id)getWithInt:(int)arg0 ;
-(id)readResolve;
-(id)init;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif