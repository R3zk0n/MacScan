// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOBYTEARRAYINPUTSTREAM_H
#define JAVAIOBYTEARRAYINPUTSTREAM_H



#import "JavaIoInputStream.h"
#import "IOSByteArray.h"

@interface JavaIoByteArrayInputStream : JavaIoInputStream {
    IOSByteArray *buf_;
    int pos_;
    int mark_;
    int count_;
}




-(id)initWithByteArray:(id)arg0 ;
-(id)initWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)available;
-(void)close;
-(void)markWithInt:(int)arg0 ;
-(BOOL)markSupported;
-(int)read;
-(int)readWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)reset;
-(NSInteger)skipWithLong:(NSInteger)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif