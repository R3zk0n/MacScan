// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLINKEDHASHSET_H
#define JAVAUTILLINKEDHASHSET_H


#import <Foundation/Foundation.h>

#import "JavaUtilHashSet.h"
#import "JavaUtilSet-Protocol.h"
#import "NSCopying-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilLinkedHashSet : JavaUtilHashSet <JavaUtilSet, NSCopying, JavaIoSerializable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)initWithJavaUtilCollection:(id)arg0 ;
-(id)createBackingMapWithInt:(int)arg0 withFloat:(float)arg1 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif