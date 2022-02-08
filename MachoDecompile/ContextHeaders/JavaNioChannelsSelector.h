// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSSELECTOR_H
#define JAVANIOCHANNELSSELECTOR_H


#import <Foundation/Foundation.h>

#import "JavaIoCloseable-Protocol.h"

@interface JavaNioChannelsSelector : NSObject <JavaIoCloseable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)close;
-(BOOL)isOpen;
-(id)keys;
-(id)provider;
-(int)select;
-(int)selectWithLong:(NSInteger)arg0 ;
-(id)selectedKeys;
-(int)selectNow;
-(id)wakeup;
+(id)open;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif