// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSFILELOCK_H
#define JAVANIOCHANNELSFILELOCK_H


#import <Foundation/Foundation.h>

#import "JavaNioChannelsFileChannel.h"
#import "JavaLangAutoCloseable-Protocol.h"

@interface JavaNioChannelsFileLock : NSObject <JavaLangAutoCloseable>

 {
    JavaNioChannelsFileChannel *channel_;
    NSInteger position_;
    NSInteger size_;
    BOOL shared_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaNioChannelsFileChannel:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 withBoolean:(BOOL)arg3 ;
-(id)channel;
-(NSInteger)position;
-(NSInteger)size;
-(BOOL)isShared;
-(BOOL)overlapsWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(BOOL)isValid;
-(void)release__;
-(void)close;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif