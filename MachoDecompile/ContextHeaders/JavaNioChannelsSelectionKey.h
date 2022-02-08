// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSSELECTIONKEY_H
#define JAVANIOCHANNELSSELECTIONKEY_H


#import <Foundation/Foundation.h>


@interface JavaNioChannelsSelectionKey : NSObject {
    uint8_t attachment_;
}




-(id)init;
-(id)attachWithId:(id)arg0 ;
-(id)attachment;
-(void)cancel;
-(id)channel;
-(int)interestOps;
-(id)interestOpsWithInt:(int)arg0 ;
-(BOOL)isAcceptable;
-(BOOL)isConnectable;
-(BOOL)isReadable;
-(BOOL)isValid;
-(BOOL)isWritable;
-(int)readyOps;
-(id)selector;
-(void)dealloc;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif