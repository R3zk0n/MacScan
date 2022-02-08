// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTLOCKSABSTRACTOWNABLESYNCHRONIZER_H
#define JAVAUTILCONCURRENTLOCKSABSTRACTOWNABLESYNCHRONIZER_H


#import <Foundation/Foundation.h>

#import "JavaLangThread.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilConcurrentLocksAbstractOwnableSynchronizer : NSObject <JavaIoSerializable>

 {
    JavaLangThread *exclusiveOwnerThread_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)setExclusiveOwnerThreadWithJavaLangThread:(id)arg0 ;
-(id)getExclusiveOwnerThread;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif