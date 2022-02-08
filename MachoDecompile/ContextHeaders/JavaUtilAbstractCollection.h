// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILABSTRACTCOLLECTION_H
#define JAVAUTILABSTRACTCOLLECTION_H


#import <Foundation/Foundation.h>

#import "JavaUtilCollection-Protocol.h"

@interface JavaUtilAbstractCollection : NSObject <JavaUtilCollection>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(BOOL)addWithId:(id)arg0 ;
-(BOOL)addAllWithJavaUtilCollection:(id)arg0 ;
-(void)clear;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)containsAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)isEmpty;
-(id)iterator;
-(BOOL)removeWithId:(id)arg0 ;
-(BOOL)removeAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)retainAllWithJavaUtilCollection:(id)arg0 ;
-(int)size;
-(id)toArray;
-(id)toArrayWithNSObjectArray:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif