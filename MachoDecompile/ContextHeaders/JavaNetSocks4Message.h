// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETSOCKS4MESSAGE_H
#define JAVANETSOCKS4MESSAGE_H


#import <Foundation/Foundation.h>

#import "IOSByteArray.h"

@interface JavaNetSocks4Message : NSObject {
    IOSByteArray *buffer_;
}




-(id)init;
-(int)getCommandOrResult;
-(void)setCommandOrResultWithInt:(int)arg0 ;
-(int)getPort;
-(void)setPortWithInt:(int)arg0 ;
-(int)getIP;
-(void)setIPWithByteArray:(id)arg0 ;
-(id)getUserId;
-(void)setUserIdWithNSString:(id)arg0 ;
-(id)description;
-(int)getLength;
-(id)getErrorStringWithInt:(int)arg0 ;
-(id)getBytes;
-(id)getStringWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)getVersionNumber;
-(void)setStringWithInt:(int)arg0 withInt:(int)arg1 withNSString:(id)arg2 ;
-(void)setVersionNumberWithInt:(int)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif