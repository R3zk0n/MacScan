// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILEVENTLISTENERPROXY_H
#define JAVAUTILEVENTLISTENERPROXY_H


#import <Foundation/Foundation.h>

#import "JavaUtilEventListener-Protocol.h"
#import "JavaUtilEventListener-Protocol.h"

@interface JavaUtilEventListenerProxy : NSObject <JavaUtilEventListener>

 {
    id<JavaUtilEventListener> *listener_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilEventListener:(id)arg0 ;
-(id)getListener;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif