// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILARRAYS_ARRAYLIST_H
#define JAVAUTILARRAYS_ARRAYLIST_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractList.h"
#import "IOSObjectArray.h"
#import "JavaUtilList-Protocol.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilRandomAccess-Protocol.h"

@interface JavaUtilArrays_ArrayList : JavaUtilAbstractList <JavaUtilList, JavaIoSerializable, JavaUtilRandomAccess>

 {
    IOSObjectArray *a_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSObjectArray:(id)arg0 ;
-(BOOL)containsWithId:(id)arg0 ;
-(id)getWithInt:(int)arg0 ;
-(int)indexOfWithId:(id)arg0 ;
-(int)lastIndexOfWithId:(id)arg0 ;
-(id)setWithInt:(int)arg0 withId:(id)arg1 ;
-(int)size;
-(id)toArray;
-(id)toArrayWithNSObjectArray:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif