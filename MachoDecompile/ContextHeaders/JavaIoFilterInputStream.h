// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOFILTERINPUTSTREAM_H
#define JAVAIOFILTERINPUTSTREAM_H



#import "JavaIoInputStream.h"

@interface JavaIoFilterInputStream : JavaIoInputStream {
    uint8_t in_;
}




-(id)initWithJavaIoInputStream:(id)arg0 ;
-(int)available;
-(void)close;
-(void)markWithInt:(int)arg0 ;
-(BOOL)markSupported;
-(int)read;
-(int)readWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)reset;
-(NSInteger)skipWithLong:(NSInteger)arg0 ;
-(void)dealloc;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif