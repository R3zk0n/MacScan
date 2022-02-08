// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCOUNTDOWNLATCH_H
#define JAVAUTILCONCURRENTCOUNTDOWNLATCH_H


#import <Foundation/Foundation.h>

#import "JavaUtilConcurrentCountDownLatch_Sync.h"

@interface JavaUtilConcurrentCountDownLatch : NSObject {
    JavaUtilConcurrentCountDownLatch_Sync *sync_;
}




-(id)initWithInt:(int)arg0 ;
-(void)await;
-(BOOL)awaitWithLong:(NSInteger)arg0 withJavaUtilConcurrentTimeUnitEnum:(id)arg1 ;
-(void)countDown;
-(NSInteger)getCount;
-(id)description;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif