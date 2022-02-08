// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef NSDATAOUTPUTSTREAM_H
#define NSDATAOUTPUTSTREAM_H


#import <CoreFoundation/CoreFoundation.h>

#import "JavaIoOutputStream.h"

@interface NSDataOutputStream : JavaIoOutputStream {
    NSMutableData *data_;
}




-(id)init;
-(void)dealloc;
-(void)writeWithInt:(int)arg0 ;
-(void)writeWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)data;
+(id)stream;


@end


#endif