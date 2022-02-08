// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef NSDATAINPUTSTREAM_H
#define NSDATAINPUTSTREAM_H


#import <CoreFoundation/CoreFoundation.h>

#import "JavaIoInputStream.h"

@interface NSDataInputStream : JavaIoInputStream {
    NSData *data_;
    NSUInteger position_;
}




-(id)initWithData:(id)arg0 ;
-(void)dealloc;
-(int)read;
-(int)readWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)available;
-(void)close;
+(id)streamWithData:(id)arg0 ;


@end


#endif