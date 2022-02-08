// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILABSTRACTQUEUE_H
#define JAVAUTILABSTRACTQUEUE_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractCollection.h"
#import "JavaUtilQueue-Protocol.h"

@interface JavaUtilAbstractQueue : JavaUtilAbstractCollection <JavaUtilQueue>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(BOOL)addWithId:(id)arg0 ;
-(id)remove;
-(id)element;
-(void)clear;
-(BOOL)addAllWithJavaUtilCollection:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif