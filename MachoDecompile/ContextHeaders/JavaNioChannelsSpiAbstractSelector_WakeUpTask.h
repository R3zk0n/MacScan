// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSSPIABSTRACTSELECTOR_WAKEUPTASK_H
#define JAVANIOCHANNELSSPIABSTRACTSELECTOR_WAKEUPTASK_H


#import <Foundation/Foundation.h>

#import "JavaNioChannelsSpiAbstractSelector.h"
#import "JavaLangRunnable-Protocol.h"

@interface JavaNioChannelsSpiAbstractSelector_WakeUpTask : NSObject <JavaLangRunnable>

 {
    JavaNioChannelsSpiAbstractSelector *this$0_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)run;
-(id)initWithJavaNioChannelsSpiAbstractSelector:(id)arg0 ;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif